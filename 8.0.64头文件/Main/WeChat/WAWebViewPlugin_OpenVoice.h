@interface WAWebViewPlugin_OpenVoice : WAWebViewPlugin_embedView <MMOpenVoiceVideoViewDelegate>
{
    BOOL _statusBarHidden; // +0x8
    CGRect _webViewFrame; // +0x10
    BOOL _tabBarVisible; // +0x30
    CGPoint _contentOffset; // +0x38
    long long _contentInsetAdjustmentBehavior; // +0x48
    BOOL _statusBarBlack; // +0x50
    BOOL _scrollEnabled; // +0x51
    BOOL _isInVideoFullScreen; // +0x52
    BOOL _isRunningInSheetModeBeforeFullScreen; // +0x53
    unsigned int _currentFullScrennViewID; // +0x54
}
+ (long long)getOrientationByDirection:(long long)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)insertView:(id)arg1 callback:(id /* block */)arg2;
- (void)updateView:(id)arg1 callback:(id /* block */)arg2;
- (void)removeView:(id)arg1 callback:(id /* block */)arg2;
- (void)requestFullScreen:(id)arg1 callback:(id /* block */)arg2;
- (void)exitFullScreen:(id)arg1 callback:(id /* block */)arg2;
- (void)enableFullScreen:(BOOL)arg1 orientation:(long long)arg2 caller:(id)arg3;
- (id)getWAVCBy:(id)arg1;
- (long long)forceInterfaceOrientationBy:(id)arg1;
- (BOOL)isInVideoFullScreen;
- (void)setIsInVideoFullScreen:(BOOL)arg1;
- (unsigned int)currentFullScrennViewID;
- (void)setCurrentFullScrennViewID:(unsigned int)arg1;
- (BOOL)isRunningInSheetModeBeforeFullScreen;
- (void)setIsRunningInSheetModeBeforeFullScreen:(BOOL)arg1;
@end
