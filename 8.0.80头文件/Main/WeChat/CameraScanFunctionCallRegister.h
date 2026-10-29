@interface CameraScanFunctionCallRegister : FunctionCallBaseRegister
- (id)moduleName;
- (void)registerModuleFunctions;
- (void)scanCodeWithImageInfo:(id)arg1 params:(id)arg2 callBack:(id)arg3;
- (void)finishSession:(id)arg1;
- (void)resolveImageWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)imageMsgFromImageInfo:(id)arg1;
- (id)imageInfoFromParams:(id)arg1;
- (id)currentHostViewController;
- (void)startDetectWithImage:(id)arg1 session:(id)arg2 completion:(id /* block */)arg3;
- (void)setupLogicDelegateForSession:(id)arg1;
- (void)handleDetectResult:(BOOL)arg1 finished:(BOOL)arg2 session:(id)arg3 completion:(id /* block */)arg4;
- (void)finishSessionAfterDispatchKeepAlive:(id)arg1;
- (BOOL)presentMultiCodeCandidatesForSession:(id)arg1;
- (void)setupMultiCodeDelegateForSession:(id)arg1 multiCodeView:(id)arg2;
- (void)dismissMultiCodeViewForSession:(id)arg1;
@end
