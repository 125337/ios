@interface WAWebViewPlugin_InputEmoticon : WAWebViewPlugin_embedView <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonSearchViewControllerDelegate>
{
    BOOL _isEmoticonViewShown; // +0x8
    EmoticonBoardView * _emoticonView; // +0x10
    double _panelDuration; // +0x18
}
- (void)dealloc;
- (void)setupEmoticonView;
- (void)setupNotifications;
- (void)onKeyboardWillShow;
- (BOOL)showEmotionEmojiPicker:(double)arg1 ToShow:(BOOL)arg2 EmotionBoardHeight:(double *)arg3 finishButtonTitle:(id)arg4;
- (BOOL)showEmotionPicker:(double)arg1 ToShow:(BOOL)arg2 EmotionBoardHeight:(double *)arg3;
- (BOOL)showEmotionView:(double)arg1 ToShow:(BOOL)arg2 viewType:(int)arg3 EmotionBoardHeight:(double *)arg4 finishButtonTitle:(id)arg5;
- (void)hideKeyBoardIfShown;
- (void)showEmotionView:(int)arg1;
- (void)hideEmotionView;
- (void)sendEmotionTextToJs:(id)arg1;
- (void)onSendButtonClicked;
- (void)didSelectorEmoticon:(id)arg1;
- (void)deleteEmoticon;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)sendOnKeyboardHeightChangeEventWithHeight:(double)arg1 duration:(double)arg2;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (double)panelDuration;
- (void)setPanelDuration:(double)arg1;
- (BOOL)isEmoticonViewShown;
- (void)setIsEmoticonViewShown:(BOOL)arg1;
- (void).cxx_destruct;
@end
