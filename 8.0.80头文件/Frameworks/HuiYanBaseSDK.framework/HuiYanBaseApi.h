@interface HuiYanBaseApi : NSObject
+ (id)sdkVersion;
+ (void)initWithViewController:(id)arg1;
+ (void)startAuthConfigData:(id)arg1 withSelectSuccCallback:(id /* block */)arg2 withSuccCallback:(id /* block */)arg3 withFailCallback:(id /* block */)arg4;
+ (void)startNextStepByLight:(id)arg1;
+ (void)setLightData:(id)arg1;
+ (void)stopAuthAction:(int)arg1 errMsg:(id)arg2;
+ (void)release;
+ (void)setLoggerCallback:(id /* block */)arg1 withToken:(id)arg2;
+ (void)closeAuthViewWithComplete:(id /* block */)arg1;
@end
