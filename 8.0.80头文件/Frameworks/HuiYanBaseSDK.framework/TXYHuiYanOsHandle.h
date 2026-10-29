@interface TXYHuiYanOsHandle : TXYHyBaseHandle
{
    NSBundle * localLanguageBundle; // +0x8
    TXYHyPrivateVM * _authingVM; // +0x10
    id /* block */ _startSucceedBlock; // +0x18
    id /* block */ _startFailedBlock; // +0x20
    id /* block */ _authResultSucceedBlock; // +0x28
    id /* block */ _authResultFailedBlock; // +0x30
    id /* block */ _huiYanSuccCallback; // +0x38
    id /* block */ _huiYanFailCallback; // +0x40
}
+ (id)sdkVersion;
+ (id)sharedInstance;
+ (void)clearInstance;
- (void)initVC:(id)arg1;
- (void)startGetAuthConfigData:(id)arg1 withSuccCallback:(id /* block */)arg2 withFailCallback:(id /* block */)arg3;
- (void)toAuthViewController;
- (void)startAuthByLiveData:(id)arg1 withSuccCallback:(id /* block */)arg2 withFailCallback:(id /* block */)arg3;
- (void)stopAuthActionErr:(int)arg1 errMsg:(id)arg2;
- (void)callBackLog:(id)arg1;
- (id)topViewController;
- (id /* block */)viewControllerJumpBlock;
- (id)getTargetVC;
- (void)createPrivateVM;
- (void)clearTargetVC;
- (id)baseVM;
- (void)dealloc;
- (void)closeAuthViewWithComplete:(id /* block */)arg1;
- (id)authingVM;
- (void)setAuthingVM:(id)arg1;
- (id /* block */)startSucceedBlock;
- (void)setStartSucceedBlock:(id /* block */)arg1;
- (id /* block */)startFailedBlock;
- (void)setStartFailedBlock:(id /* block */)arg1;
- (id /* block */)authResultSucceedBlock;
- (void)setAuthResultSucceedBlock:(id /* block */)arg1;
- (id /* block */)authResultFailedBlock;
- (void)setAuthResultFailedBlock:(id /* block */)arg1;
- (id /* block */)huiYanSuccCallback;
- (void)setHuiYanSuccCallback:(id /* block */)arg1;
- (id /* block */)huiYanFailCallback;
- (void)setHuiYanFailCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
