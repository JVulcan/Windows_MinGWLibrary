#ifdef _WIN32
#ifdef MY_EXPORT
#define TDCORE_API __declspec(dllexport)
#else
#define TDCORE_API __declspec(dllimport)
#endif
#else
#define MY_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

TDCORE_API
void addNum(int x);

TDCORE_API
void initNum(int value);

TDCORE_API
int getNum();


#ifdef __cplusplus
}
#endif