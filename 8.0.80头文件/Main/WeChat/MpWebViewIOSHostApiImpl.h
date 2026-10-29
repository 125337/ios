@interface MpWebViewIOSHostApiImpl : NSObject <MpWebViewIOSHostApi>
- (void)setInputViewHeightViewId:(id)arg1 height:(id)arg2 isCustomKeyboard:(id)arg3 error:(id *)arg4;
- (void)setAccessoryViewHeightViewId:(id)arg1 height:(id)arg2 error:(id *)arg3;
- (void)reloadInputViewViewId:(id)arg1 error:(id *)arg2;
- (void)setKeyboardFocusEnabledViewId:(id)arg1 enabled:(id)arg2 error:(id *)arg3;
- (void)enableContentInsetControlViewId:(id)arg1 error:(id *)arg2;
- (void)setContentInsetBottomViewId:(id)arg1 bottom:(id)arg2 error:(id *)arg3;
- (void)disableContentInsetControlViewId:(id)arg1 error:(id *)arg2;
- (void)lockContentOffsetViewId:(id)arg1 error:(id *)arg2;
- (void)unlockContentOffsetViewId:(id)arg1 error:(id *)arg2;
- (void)endEditingViewId:(id)arg1 error:(id *)arg2;
@end
