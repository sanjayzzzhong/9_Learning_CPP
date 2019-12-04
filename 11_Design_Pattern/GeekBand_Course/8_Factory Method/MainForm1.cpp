/*
 * @Author: sanjayzhong
 * @Github: https://github.com/sanjayzzzhong
 * @Date: 2019-12-03 16:58:59
 */
class MainForm : public Form
{
    TextBox *txtFilePath;
    TextBox *txtFileNumber;
    ProgressBar *progressBar;

public:
    void Button1_Click()
    {

        ISplitter *splitter =
            new BinarySplitter(); //依赖具体类, 现在想要把这个依赖去除

        splitter->split();
    }
};
