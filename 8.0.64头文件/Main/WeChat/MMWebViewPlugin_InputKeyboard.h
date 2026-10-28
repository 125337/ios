@interface MMWebViewPlugin_InputKeyboard : MMWebViewPluginBase <EmoticonSearchViewControllerDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, InputControllerDelegate>
{
    id /* block */ _inputTextCallbackBlock; // +0x8
    unsigned long long _maxInputLen; // +0x10
    unsigned long long _showRemindWordCount; // +0x18
    WCInputController * _inputController; // +0x20
    UIView * _inputView; // +0x28
    EmoticonBoardView * _emoticonBoardView; // +0x30
    UIView * _clickSensingView; // +0x38
    UIButton * _expressionButton; // +0x40
    UILabel * _bottomRemindLabel; // +0x48
    MMGrowTextView * _growTextView; // +0x50
    NSString * _finishText; // +0x58
    BOOL _bIsAlreadySendEvent; // +0x60
    BOOL _bIsShowJSKeyBoard; // +0x61
    BOOL _bOnlyShowSmileyPanel; // +0x62
    double _smileyPanelDuration; // +0x68
    unsigned long long _currentShowType; // +0x70
    MMUIButton * _commentCancelBtn; // +0x78
    MMUILabel * _writeCommentLabel; // +0x80
    UIView * _backgroundGuardView; // +0x88
    UIView * _seperatorLine; // +0x90
    double _editBoxHeight; // +0x98
    double _textViewMargin; // +0xa0
    double _buttonMargin; // +0xa8
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)resignResponder;
- (void)showKeyBoardWithPlaceholder:(id)arg1 defaultText:(id)arg2 maxTextLen:(unsigned long long)arg3 contentOffsetY:(id)arg4 disableScrollAdjustment:(BOOL)arg5 showRemindWordCount:(unsigned long long)arg6 callBackBlock:(id /* block */)arg7 customParams:(id)arg8;
- (void)hideKeyBoardByJsapiWithCB:(id /* block */)arg1;
- (BOOL)showEmotionBoardOnly:(double)arg1 ToShow:(BOOL)arg2 EmotionBoardHeight:(double *)arg3 scene:(unsigned long long)arg4;
- (BOOL)showFullEmotionBoard:(double)arg1 ToShow:(BOOL)arg2 EmotionBoardHeight:(double *)arg3 scene:(unsigned long long)arg4;
- (BOOL)showEmotionBoard:(double)arg1 ToShow:(BOOL)arg2 viewType:(int)arg3 EmotionBoardHeight:(double *)arg4 scene:(unsigned long long)arg5;
- (void)showInputViewWithPlaceholder:(id)arg1 defaultText:(id)arg2 contentOffsetY:(id)arg3 disableScrollAdjustment:(BOOL)arg4 customParams:(id)arg5;
- (void)showEmotionBoardAnimate:(int)arg1;
- (void)ensureInitInputViewWithCustomParams:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(BOOL)arg2;
- (void)handlePanAndTabOnView:(id)arg1;
- (void)initInputToolView;
- (void)initInputViewForShowTypeDefault;
- (void)initInputViewForShowTypeComment;
- (void)layoutInputToolViewForShowTypeCommentWithCustomParams:(id)arg1;
- (void)initEmoticonView;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (double)getVisibleHeight;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)setupView:(double)arg1;
- (void)updateExpressionButtonPosition;
- (void)keyboardWillShow;
- (void)onHideKeyboard;
- (void)callBackToJs;
- (void)keyboardDidHide;
- (void)clearViewAndController;
- (void)onSendButtonClicked;
- (void)OnEmoticonStateDidChanged:(BOOL)arg1;
- (void)onEmoticonSearchIconClicked;
- (void)didSelectorEmoticon:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)deleteEmoticon;
- (void)hideEmotionBoardAnimate;
- (void)sendEmotionTextToJs:(id)arg1;
- (void)sendEmoticonToJS:(id)arg1;
- (double)inputViewHeightForShowTypeComment;
- (void)onCommentCancelBtnClicked:(id)arg1;
- (double)textViewMargin;
- (double)buttonMargin;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (BOOL)m_bIsShowJSKeyBoard;
- (void)setM_bIsShowJSKeyBoard:(BOOL)arg1;
- (unsigned long long)currentShowType;
- (void)setCurrentShowType:(unsigned long long)arg1;
- (id)commentCancelBtn;
- (void)setCommentCancelBtn:(id)arg1;
- (id)writeCommentLabel;
- (void)setWriteCommentLabel:(id)arg1;
- (id)backgroundGuardView;
- (void)setBackgroundGuardView:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (double)editBoxHeight;
- (void)setEditBoxHeight:(double)arg1;
- (void)setTextViewMargin:(double)arg1;
- (void)setButtonMargin:(double)arg1;
- (void).cxx_destruct;
@end
