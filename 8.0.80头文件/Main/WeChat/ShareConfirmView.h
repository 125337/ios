@interface ShareConfirmView : MMUIWindow <IUiUtilExt, MMGrowTextViewDelegate, MessageObserverDelegate, IMsgExt, InputControllerDelegate, IMMGrowTextViewExt>
{
    UIImageView * _inputView; // +0x8
    EmoticonBoardView * _emoticonBoardView; // +0x10
    UIButton * _expressionButton; // +0x18
    MMGrowTextView * _textView; // +0x20
    WCInputController * _inputController; // +0x28
    UIImage * _thumbImage; // +0x30
    NSString * _title; // +0x38
    NSString * _desc; // +0x40
    NSString * _source; // +0x48
    NSString * _thumbImageUrl; // +0x50
    NSString * _defaultInputText; // +0x58
    NSString * _defaultShowText; // +0x60
    unsigned long long _style; // +0x68
    unsigned long long _innerPlayerStyle; // +0x70
    BOOL _isShowTextView; // +0x78
    BOOL _hasInputSth; // +0x79
    long long _currentOrientation; // +0x80
    unsigned long long _confirmType; // +0x88
    id <ShareConfirmViewDelegate> _scvDelegate; // +0x90
    NSString * _successText; // +0x98
    UIView * m_textBackgroundImage; // +0xa0
    UIView * m_bottomView; // +0xa8
    WCPasteTextLengthLogic * pastelogic; // +0xb0
}
- (void)registerLogoutEvent;
- (void)unregisterLogoutEvent;
- (void)setHidden:(BOOL)arg1;
- (void)internalInit;
- (void)setupRootViewController;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)dealloc;
- (void)showView;
- (id)getInputText;
- (void)initContentView;
- (double)getVisibleHeight;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (void)updateInputViewLayout;
- (void)updateContentLayout;
- (void)rotateToOrientation:(long long)arg1;
- (void)rotateToCurrentOrientation;
- (void)calNewImageViewFrame:(id)arg1;
- (long long)getTextViewBackgroundFrameHeight;
- (long long)calTextViewBackgroundImageFrameHeight:(long long)arg1;
- (void)genTextView:(CGRect)arg1;
- (id)genSourceLabel:(id)arg1;
- (id)genBackgroundView;
- (id)genTitleLabel;
- (id)genDescriptionLabel;
- (void)formImageContentView;
- (void)formTitleAtRightContentView;
- (void)formTitleAtTopContentView;
- (void)genBottomContentView:(id)arg1;
- (void)initBottomButtons;
- (void)initInputToolView;
- (void)initEmoticonView;
- (void)initInputController;
- (void)becomeInput;
- (void)resignInput;
- (void)showSendSuccessView;
- (void)notifySendMsgOK;
- (void)stayAtWeChat;
- (void)didCommitText:(id)arg1;
- (void)didCommitEmptyText;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)keyboardWillShow;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (void)onConfirm;
- (void)onCancel;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hideKeyBoard;
- (id)getWebThumbImage;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)onMainWindowFrameChanged;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)thumbImageUrl;
- (void)setThumbImageUrl:(id)arg1;
- (id)defaultInputText;
- (void)setDefaultInputText:(id)arg1;
- (id)defaultShowText;
- (void)setDefaultShowText:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)innerPlayerStyle;
- (void)setInnerPlayerStyle:(unsigned long long)arg1;
- (BOOL)isShowTextView;
- (void)setIsShowTextView:(BOOL)arg1;
- (id)scvDelegate;
- (void)setScvDelegate:(id)arg1;
- (BOOL)hasInputSth;
- (void)setHasInputSth:(BOOL)arg1;
- (unsigned long long)confirmType;
- (void)setConfirmType:(unsigned long long)arg1;
- (id)pastelogic;
- (void)setPastelogic:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)successText;
- (void)setSuccessText:(id)arg1;
- (void).cxx_destruct;
@end
