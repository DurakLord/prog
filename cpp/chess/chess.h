class desk{
    private:
    figure matrix[8][8];
    friend class figure;
};

class figure{
    protected:
    const char *name;
    int* s;
};

class whiteFigure : public figure{
    private:
    int color = 1;
};

class blackFigure : public figure{
    private:
    int color = 0;
};


