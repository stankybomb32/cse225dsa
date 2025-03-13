void sortedList::insert(int num)
{
    int swap;
    for (int i=0; i<length-1; i++)
    {
        if (data[i+1]>num)
        {
            swap = data[i];
            data[i] = num;
            num = swap;
        }
    }
    length++;
    data[length-1] = num;
}
