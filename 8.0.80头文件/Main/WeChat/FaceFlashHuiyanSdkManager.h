@interface FaceFlashHuiyanSdkManager : NSObject
+ (id)sharedInstance;
- (void)initSDK;
- (void)startAndSetHuiYanAuthDataCallback:(id)arg1 withSelectSuccCallback:(id /* block */)arg2 withSuccCallback:(id /* block */)arg3 withFailCallback:(id /* block */)arg4 onViewController:(id)arg5;
- (void)startNextStepByLight:(id)arg1;
- (void)stopAuthAction:(int)arg1 errMsg:(id)arg2;
- (void)closeAuthViewWithComplete:(id /* block */)arg1;
- (void)releaseSDK;
- (id)getVersion;
- (void)setLoggerCallback:(id)arg1;
@end
