@interface WSWebViewPlugin_InputKeyboard : WSWebViewPluginBase <BaseEmoticonViewDelegate, EmoticonBoardViewDelegate>
{
     defaultAnimateDuration; // +0x8
     storedAnimateDuration; // +0x10
     monitorKeyboard; // +0x19
     keyBoardHeight; // +0x20
     $__lazy_storage_$_emoticonBoardView; // +0x28
}
- (void)didSelectorEmoticon:(id)arg1;
- (void)deleteEmoticon;
- (void)onSendButtonClicked;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)showEmoticonBoardWithAnimateDuration:(double)arg1;
- (void)hideEmoticonBoardWithAnimateDuration:(double)arg1;
- (double)getEmoticonBoardHeight;
- (void)resignResponder;
- (void)sendToH5WithEmoticonText:(id)arg1;
- (double)ajustedAnimateDuration:(double)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
