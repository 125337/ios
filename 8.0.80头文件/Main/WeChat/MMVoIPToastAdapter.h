@interface MMVoIPToastAdapter : NSObject
{
    unsigned long long _scene; // +0x8
    MMStringToastView * _voipToastWindowInstance; // +0x10
    id /* block */ _checkIsInMinimizeBlock; // +0x18
    WeToast * _weToast; // +0x20
    NSString * _lastToastText; // +0x28
}
- (id)initWithScene:(unsigned long long)arg1 checkIsMinimizeModeBlock:(id /* block */)arg2 toastWindowInstanceIfNeed:(id)arg3;
- (void)dealloc;
- (id)ManuallySelectVoipToastWindow;
- (id)ManuallySelectWeToast;
- (id)selectUpstreamWithParams:(id)arg1;
- (void)showToastWithUpstream:(id)arg1 Params:(id)arg2;
- (void)doShowVoipToastWindowWithInstance:(id)arg1 Params:(id)arg2;
- (void)doShowWeToastWithInstance:(id)arg1 Params:(id)arg2;
- (void)interruptOthersWithCurrentUpstream:(id)arg1;
- (void)showToastWithParams:(id)arg1;
- (void)hideToast;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)voipToastWindowInstance;
- (void)setVoipToastWindowInstance:(id)arg1;
- (id /* block */)checkIsInMinimizeBlock;
- (void)setCheckIsInMinimizeBlock:(id /* block */)arg1;
- (id)weToast;
- (void)setWeToast:(id)arg1;
- (id)lastToastText;
- (void)setLastToastText:(id)arg1;
- (void).cxx_destruct;
@end
