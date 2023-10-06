
struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
    int length;
    int width;
    int height;
    
};

typedef struct box box;

int get_volume(box b) 
{
	/**
	* Return the volume of the box
	*/
    return (b.length * b.width * b.height);
}

int is_lower_than_max_height(box b) 
{
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    char r;
    if(b.height < MAX_HEIGHT)
    {
        r = 1;
    }
    else if(b.height >= MAX_HEIGHT)
    {
        r = 0;
    }
    
    return r;
}

