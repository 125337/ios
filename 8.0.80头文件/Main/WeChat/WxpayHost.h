@interface WxpayHost : NSObject
+ (BOOL)initializeWithConfiguration:(id)arg1 error:(id *)arg2;
+ (BOOL)registerCapabilities:(id)arg1 error:(id *)arg2;
+ (void)prepareRuntimeWithCompletion:(id /* block */)arg1;
+ (void)preloadPayScene:(id)arg1 params:(id)arg2 openContext:(id)arg3 completion:(id /* block */)arg4;
+ (id)invokePayScene:(id)arg1 params:(id)arg2 presentingViewController:(id)arg3 openContext:(id)arg4 completion:(id /* block */)arg5;
+ (id)attachPayScene:(id)arg1 params:(id)arg2 toView:(id)arg3 parentViewController:(id)arg4 openContext:(id)arg5 completion:(id /* block */)arg6;
+ (id)addPayEventListener:(id /* block */)arg1;
+ (id)postContainerEvent:(id)arg1;
+ (void)reportRecoveryRefusedForUseCase:(id)arg1 reason:(id)arg2;
+ (void)shutdownWithCompletion:(id /* block */)arg1;
+ (id)payModuleInfo;
+ (id)payConfig;
+ (id)packageInfo:(id)arg1;
+ (id)dispatchCapability:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 sink:(id /* block */)arg5;
+ (id)callContextForScene:(id)arg1 appId:(id)arg2 viewController:(id)arg3;
@end
