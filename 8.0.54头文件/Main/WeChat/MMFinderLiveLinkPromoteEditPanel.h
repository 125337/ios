@interface MMFinderLiveLinkPromoteEditPanel : MMPageSheetBaseView <InputControllerDelegate>
{
    BOOL _resignFirstResponderOnTap; // +0x8
    BOOL _isKeyboardShow; // +0x9
    BOOL _hasClickInputTipLabel; // +0xa
    BOOL _isPageWillClose; // +0xb
    unsigned long long _keyboardAdjustBehavior; // +0x10
    MMUIButton * _rightButton; // +0x18
    UIView * _contentView; // +0x20
    UIView * _inputContentBackView; // +0x28
    MMGrowTextView * _growTextView; // +0x30
    WCInputController * _inputController; // +0x38
    MMUILabel * _inputTipLabel; // +0x40
    MMUILabel * _errorTipLabel; // +0x48
    double _keyboardHeight; // +0x50
    NSArray * _extensionLinkAllowedList; // +0x58
    NSString * _copiedArticleLink; // +0x60
    UIColor * _tipLabelColor; // +0x68
}
- (id)init;
- (void)innerInit;
- (id)getGrowTextView;
- (void)initNotifications;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)setResignFirstResponderOnTap:(BOOL)arg1;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)onPageSheetContainerBgTapped;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (void)layoutUI;
- (void)layoutOtherUI;
- (void)layoutContentView;
- (double)contentWidth;
- (double)contentHeight;
- (void)updateDetailViewFrameAnimated:(BOOL)arg1;
- (void)layoutInputContentBackView;
- (void)layoutGrowTextView;
- (double)getGrowTextViewHeight;
- (void)updateInputTipLabel:(id)arg1;
- (void)layoutInputTipLabel;
- (void)layoutErrorTipLabel;
- (void)initInputController;
- (void)updateNavRightButtonEnable;
- (void)updateInputTipLabelHidden;
- (void)onLeftButtonAction;
- (void)onRightButtonAction;
- (void)onLinkConfirmed:(id)arg1;
- (void)onInputTipLabelTap:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (double)getVisibleHeight;
- (void)makeInputBecomeFirstResponder;
- (void)showErrorTips:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)animateAdjustTextViewWithDuration:(double)arg1;
- (void)getExtensionLinkAllowedList;
- (BOOL)hasCopyArticleLink;
- (void)detectCopyArticleLink;
- (void)updateCopiedArticleLink:(id)arg1;
- (BOOL)checkLinkTextValid:(id)arg1;
- (id)titleText;
- (id)placeholderText;
- (id)validUriPrefixes;
- (unsigned long long)keyboardAdjustBehavior;
- (void)setKeyboardAdjustBehavior:(unsigned long long)arg1;
- (BOOL)resignFirstResponderOnTap;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)inputContentBackView;
- (void)setInputContentBackView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)inputTipLabel;
- (void)setInputTipLabel:(id)arg1;
- (id)errorTipLabel;
- (void)setErrorTipLabel:(id)arg1;
- (BOOL)isKeyboardShow;
- (void)setIsKeyboardShow:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)extensionLinkAllowedList;
- (void)setExtensionLinkAllowedList:(id)arg1;
- (id)copiedArticleLink;
- (void)setCopiedArticleLink:(id)arg1;
- (BOOL)hasClickInputTipLabel;
- (void)setHasClickInputTipLabel:(BOOL)arg1;
- (BOOL)isPageWillClose;
- (void)setIsPageWillClose:(BOOL)arg1;
- (id)tipLabelColor;
- (void)setTipLabelColor:(id)arg1;
- (void).cxx_destruct;
@end

