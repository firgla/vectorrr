#pragma once
#include <new>
#include <cstdlib>
#include<iostream>
template<typename T>
class vector
{
private:

    T *ptr;
    std::size_t vsize, vcapacity;

    void reallocate(std::size_t n)
    {

        T *ptr1 = static_cast<T *>(std::malloc(sizeof(T) * n));
        for(std::size_t i = 0; i < vsize; i++)
        {
            new (ptr1 + i) T(static_cast<T &&>(ptr[i]));
            (ptr + i)->~T();
        }

        std::free(ptr);
        ptr = ptr1;
        vcapacity = n;

    }

public:

    vector()
        : ptr(nullptr)
        , vsize(0)
        , vcapacity(0)
    {}

    vector(vector<T> const &vec)
        : vector<T>()
    {
        reallocate(vec.size);
        vsize = vec.size;
        for (std::size_t i = 0; i < vec.size; i++)
        {
            new (ptr + i) T(vec[i]);
        }
    }

    vector(vector<T>      &&vec)
        : ptr(vec.ptr)
        , vsize(vec.size)
        , vcapacity(vec.capacity)
        {
            new (&vec) vector<T>();
        }

    vector<T> &operator=(vector<T> const &vec)
    {
        if (this != &vec)
        {
            this->~vector();
            new (this) vector(vec);
        }
        return *this;
    }

    vector<T> &operator=(vector<T>       &&vec)
    {
        if (this != &vec)
        {
            this->~vector();
            new (this) vector(static_cast<vector &&>(vec));
        }
        return *this;
    }


/*member types*/

    using      value_type = T;
    using       size_type = std::size_t;
    using difference_type = std::ptrdiff_t;

    using       reference = value_type       &;
    using const_reference = value_type const &;


    /*pointer, const_pointer, iterator, const_iterator*/

    using               iterator = T*;
    using         const_iterator = T const *;

    /*
    using       reverse_iterator = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;
    */

/*member functions*/

    constexpr void assign( size_type count, const T& value )
    {
        for 
    }

/*element access*/

    T       &operator[](std::size_t i)       {return ptr[i];}
    T const &operator[](std::size_t i) const {return ptr[i];}

    T       &front()                         {return ptr[0];}
    T       &back()                          {return ptr[vsize - 1];}

    T const &front()                    const {return ptr[0];}
    T const &back()                     const {return ptr[vsize - 1];}



/*iterators*/

    T       *begin()       {return ptr;}
    T       *  end()       {return ptr + vsize;}

    T const *begin() const {return ptr;}
    T const *  end() const {return ptr + vsize;}

/*capacity*/

    bool         empty() const {return vcapacity == 0;}

    size_type     size() const {return vsize;}

    size_type capacity() const {return vcapacity;}

    void shrink_to_fit()
    {
        if (vsize == vcapacity) return;

        reallocate(vsize);
    }

/*modifiers*/

    
    iterator erase(iterator it)
    {
        return erase(it, it + 1);
    }

    iterator erase(const_iterator it)
    {
        return erase(it, it + 1);
    }

    iterator erase(iterator it_f, iterator it_l)
    {
        std::size_t const n = it_l - it_f;

        for (std::size_t i = static_cast<std::size_t>(it_f - ptr); i + n < vsize; i++)
        {
            ptr[i] = static_cast<T &&>(ptr[i + n]);
        }

        for (std::size_t i = vsize - n; i < vsize; i++)
        {
            (ptr + i)->~T();
        }

        vsize = vsize - n;

        return it_f;
    }

    iterator erase(const_iterator it_f, const_iterator it_l)
    {
        return erase(it_f, it_l);
    }

    void clear()
    {
        for(size_t i = 0; i < vsize; i++)
        {
            (ptr + i)->~T();
        }
        
        vsize = 0;
    }

    iterator insert( const_iterator pos, const T& value)
    {
        return iterator(pos, 1, value);
    }

    iterator insert( const_iterator pos, T&& value )
    {
        return iterator(pos, 1, value);
    
    }


    iterator insert(const_iterator it, std::size_t count, const T& value)
    {   
        if (vcapacity < vsize + count)
        {
            reallocate(vsize + count);
            vcapacity = vsize + count;
        }

        for(std::size_t i = vsize; i < static_cast<std::size_t>(it - ptr); i--)
        {
            ptr[i + count] = static_cast<T &&>(ptr[i]);
        }

        for(std::size_t i = static_cast<std::size_t>(it - ptr); i < static_cast<std::size_t>(it - ptr) + count; i++)
        {
            ptr[i] = value;
        }

        vsize = vsize + count;

        return ptr + (it - ptr) - 1;
    
    }

    void push_back(T const &value)
    {
        if(vsize == vcapacity)
            reallocate(vcapacity == 0 ? 1 : 2 * vcapacity);
        new (ptr + vsize++) T(value);
    }

    template<typename... Args>
    void emplace_back(Args &&... args)
    {
        if(size == capacity)
            reallocate(capacity == 0 ? 1 : 2 * vcapacity);
        new (ptr + vsize++) T(static_cast<Args &&>(args)...);
    }

    void pop_back()
    {
        (ptr + vsize - 1)->~T();

        vsize = vsize - 1;
    }

    void resize(std::size_t count)
    {
        if (count < vcapacity)
        {
            for(std::size_t i = count; i < vsize; i++)
                (ptr + i)->~T();

            vsize = count;

        }

        if (count > vcapacity)
        {
        
            for(std::size_t i = vsize; i < count; i++)
            {
                new (ptr + i) T();
            }

            vcapacity = count;
            vsize = count;
        }

    }

    void resize(std::size_t count, T value)
    {
        if (count < vcapacity)
        {
            for(std::size_t i = count; i < vsize; i++)
                (ptr + i)->~T();

            vsize = count;

        }

        if (count > vcapacity)
        {
            reallocate(count);
        
            for(std::size_t i = vsize; i < count; i++)
            {
                new (ptr + i) T(value);
            }

            vcapacity = count;
            vsize = count;
        }

    }

/*Non-member functions*/

    bool operator==(const vector<T> &rhs)
    {
        return std::equal(this->begin(), this->end(), rhs.begin(), rhs.end()); 
    }

    bool operator!=(const vector<T> &rhs)
    {
        return !(std::equal(this->begin(), this->end(), rhs.begin(), rhs.end()));
    }

    bool operator<(const vector<T> &rhs)
    {
        return std::lexicographical_compare
        (
            this->begin(), this->end(),
            rhs.begin(), rhs.end()
        );
    }

    bool operator>(const vector<T> &rhs)
    {
        return std::lexicographical_compare
        (
            rhs.begin(), rhs.end(),
            this->begin(), this->end()
        );
    }

    bool operator>=(const vector<T> &rhs)
    {
        return !(std::lexicographical_compare
                    (
                        this->begin(), this->end(),
                        rhs.begin(), rhs.end()
                    )
                );
    }

    bool operator<=(const vector<T> &rhs)
    {
        return !(std::lexicographical_compare
                    (
                        rhs.begin(), rhs.end(),
                        this->begin(), this->end()
                    )
                );
    }



    ~vector()
    {
        for(std::size_t i = 0; i < vsize; ++i)
            (ptr + i)->~T();
        std::free(ptr);
    }
    
};


