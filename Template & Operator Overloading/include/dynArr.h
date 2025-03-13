#ifndef DYNARR_H
#define DYNARR_H

template <typename T>
class dynArr
{
    public:
        dynArr<T>();
        virtual ~dynArr();
        void insert(T);
        void rmInd(int);
        void remove(T);
        T getNext();
        int getLen();
        T reset();

    protected:

    private:
        int *length = new int;
        int *pos = new int;
        T *data = new T[50];
};

#endif // DYNARR_H
