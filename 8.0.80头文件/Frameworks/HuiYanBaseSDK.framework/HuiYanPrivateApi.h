@interface HuiYanPrivateApi : NSObject
+ (id)sdkVersion;
+ (void)initWithViewController:(id)arg1;
+ (void)startGetAuthConfigData:(id)arg1 withSuccCallback:(id /* block */)arg2 withFailCallback:(id /* block */)arg3;
+ (void)startAuthByLiveData:(id)arg1 withSuccCallback:(id /* block */)arg2 withFailCallback:(id /* block */)arg3;
+ (void)stopAuthActionErr:(int)arg1 errMsg:(id)arg2;
+ (void)release;
+ (void)setLoggerCallback:(id /* block */)arg1 withToken:(id)arg2;
@end
