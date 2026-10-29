@interface MMLiveMagicRewardResMemoryMonitorTask : MMLiveMagicRewardMemoryMonitorTask <_TtP6WeChat18IMRViewResListener_, _TtP6WeChat15IMRViewListener_>
{
    BOOL _isResMemoryLoaded; // +0x8
    BOOL _isUnLoading; // +0x9
    BOOL _enableAutoUnload; // +0xa
    _TtC6WeChat15MagicRewardView * _magicRewardView; // +0x10
    id /* block */ _onResMemoryLoadedCallback; // +0x18
    id /* block */ _onResMemoryUnLoadedCallback; // +0x20
}
- (id)initWithRewardView:(id)arg1 enableAutoUnLoad:(BOOL)arg2;
- (void)configListeners;
- (void)checkMemory;
- (void)cancel;
- (void)tryUnLoadMemory:(id /* block */)arg1;
- (void)onResLoadedWithView:(id)arg1;
- (void)onResUnloadedWithView:(id)arg1;
- (void)onAnimationStartWithView:(id)arg1;
- (void)onAnimationCancelWithView:(id)arg1;
- (void)onAnimationEndWithView:(id)arg1;
- (void)onAnimationRepeatWithView:(id)arg1;
- (void)onAnimationTimeoutWithView:(id)arg1;
- (void)restartMonitorIfNeedAfterMemoryUsed:(id)arg1;
- (id)description;
- (id)magicRewardView;
- (void)setMagicRewardView:(id)arg1;
- (BOOL)isResMemoryLoaded;
- (void)setIsResMemoryLoaded:(BOOL)arg1;
- (BOOL)isUnLoading;
- (void)setIsUnLoading:(BOOL)arg1;
- (BOOL)enableAutoUnload;
- (void)setEnableAutoUnload:(BOOL)arg1;
- (id /* block */)onResMemoryLoadedCallback;
- (void)setOnResMemoryLoadedCallback:(id /* block */)arg1;
- (id /* block */)onResMemoryUnLoadedCallback;
- (void)setOnResMemoryUnLoadedCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

