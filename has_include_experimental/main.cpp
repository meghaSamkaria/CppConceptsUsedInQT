
#include <QCoreApplication>
#include <iostream>
#ifdef __has_include
#if __has_include(<filesystem>)
# include<filesystem>
namespace fd = std::filesystem;
#else
# include <experimental/filesystem>
  namespace fs = std::experimental::filesystem;
#endif
#endif


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout<<"here\n";
    fd::path p{"C:/"};
    std::cout<<p<<"\n";
    return a.exec();
}
