@interface MMTipsViewController : MMWindowViewController <MMTipsViewControllerDelegate, IWCUIKitInputControllerDelegate, UITextFieldDelegate>
{
    id <MMTipsViewControllerDelegate> m_delegate; // +0x78
    unsigned long long _tipsType; // +0x80
    NSString * _tipsTitle; // +0x88
    NSString * _tipsContent; // +0x90
    NSMutableArray * _tipsActionArray; // +0x98
    NSMutableArray * _btnArray; // +0xa0
    UIButton * _leftBtn; // +0xa8
    UIButton * _rightBtn; // +0xb0
    BOOL _ignoreSwapTitle; // +0xb8
    unsigned int _tipsTextMaxCount; // +0xbc
    MMUIView<IWCUIKitGrowTextViewProtocol> * _tipsTextView; // +0xc0
    UITextField * _tipsPasswordTextField; // +0xc8
    UILabel * _placeHolderLabel; // +0xd0
    UIImageView * _inputView; // +0xd8
    UIButton * _expressionButton; // +0xe0
    MMObject<IWCUIKitInputControllerProtocol> * _inputController; // +0xe8
    UIView * _textBackgroundImage; // +0xf0
    BOOL _hasInputSth; // +0xf8
    UITapGestureRecognizer * _tapGR; // +0x100
    UIButton * _backgroundBtn; // +0x108
    UIView * _containerView; // +0x110
    UIImageView * _containerBg; // +0x118
    UIScrollView * _contentView; // +0x120
    UIView * _buttonsView; // +0x128
    double _realContentViewHeight; // +0x130
    MMUILabel<IWCCTRichTextViewProtocol> * _tipsTitleLabel; // +0x138
    MMUILabel * _tipsContentLabel; // +0x140
    double contentYOfKeyboardShow; // +0x148
    BOOL bIsForbidCancelBtn; // +0x150
    BOOL _allButtonVertical; // +0x151
    BOOL _alwaysWeakContent; // +0x152
    BOOL _hideTipsWhenClickedOutOfTips; // +0x153
    UIImageView * _tipsImgView; // +0x158
    id _m_userData; // +0x160
    NSString * _tipsTextPlaceholder; // +0x168
    NSString * _textFieldDefaultText; // +0x170
    long long _tipTag; // +0x178
    UIView * _customView; // +0x180
    UIViewController * _topViewController; // +0x188
    long long _fixedUserInterfaceStyle; // +0x190
    id <IWCUIKitInputControllerProxyService> _inputControllerProxyService; // +0x198
}
+ (void)load;
- (void)wcpay_show;
- (void)wcpay_onClickBtn:(id)arg1;
- (void)showWithClickEmpty:(id /* block */)arg1 clickBtn:(id /* block */)arg2;
- (void)onClickEmptyBackgroundViewToHideTips:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)setClickEmptyBlock:(id /* block */)arg1;
- (id /* block */)clickEmptyBlock;
- (void)setClickBtnBlock:(id /* block */)arg1;
- (id /* block */)clickBtnBlock;
- (id)initWithTitle:(id)arg1 content:(id)arg2 buttons:(id)arg3;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4 andConfirmText:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4 btnTitle:(id)arg5 handler:(id /* block */)arg6;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 rightBtnStyle:(long long)arg9;
- (id)initWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 sel:(SEL)arg5 btnTitle:(id)arg6 target:(id)arg7 sel:(SEL)arg8 btnTitle:(id)arg9 target:(id)arg10 sel:(SEL)arg11;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 content:(id)arg3 buttons:(id)arg4;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 content:(id)arg3 actions:(id)arg4;
- (id)initWithTitle:(id)arg1 image:(id)arg2 content:(id)arg3 actions:(id)arg4;
- (void)setIsRequestKeyWindow:(BOOL)arg1;
- (BOOL)isRequestKeyWindow;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andBtn:(id)arg3;
- (id)initWithTitle:(id)arg1 content:(id)arg2 textFieldPlaceholder:(id)arg3 maxCount:(unsigned int)arg4 buttons:(id)arg5;
- (id)initWithTitle:(id)arg1 content:(id)arg2 customView:(id)arg3 buttons:(id)arg4;
- (void)addButtonWithTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addButtonWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addDestructiveButtonWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addCancelButtonWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addButtonWithTitle:(id)arg1 colorName:(id)arg2 handler:(id /* block */)arg3;
- (void)addButtonWithTitle:(id)arg1 handler:(id /* block */)arg2 style:(long long)arg3;
- (void)addTextViewWithMaxLen:(unsigned int)arg1;
- (void)addPasswordInputTextField;
- (void)addConfiguredPasswordInputTextField:(id)arg1;
- (void)updateTipsTitleWithNewTitle:(id)arg1;
- (id)getPasswordTextField;
- (id)getTextView;
- (id)getButtonsView;
- (void)showInView:(id)arg1;
- (void)show;
- (void)hideTips;
- (void)clickBgEmptyToHideTips;
- (id)btnAtIndex:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutSubviews;
- (double)getContainerMaxHeight;
- (double)getRealContainerHeight;
- (void)updateContentHeightWithDiff:(double)arg1;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (id)topViewControllerInMainWindow;
- (void)createContainImgTips;
- (void)addTextBackgroundImageToContentView;
- (void)initPasswordInputView;
- (void)initInputView;
- (void)initInputToolView;
- (void)initInputController;
- (void)becomeInput;
- (void)resignInput;
- (id)getBtnAtIndex:(unsigned int)arg1;
- (BOOL)isLayoutButtonsVertical;
- (void)updateSubViewsFrame;
- (id)getButtonFromBtnString:(id)arg1 style:(long long)arg2 location:(long long)arg3;
- (void)onClickBtn:(id)arg1;
- (void)setButtonsEnable:(BOOL)arg1;
- (void)removeAllBtn;
- (id)bulidNSAttributedStringText:(id)arg1 mediumFont:(BOOL)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)overrideUserInterfaceStyle;
- (id)presentContentView;
- (void)didCommitText:(id)arg1;
- (void)didCommitEmptyText;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillShow;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (void)tapGestureInProcess:(id)arg1;
- (void)setButtonsAtIndex:(unsigned int)arg1 enable:(BOOL)arg2;
- (void)dealloc;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)handleKeyboardDidHide;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (id)inputControllerProxyService;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_tipsContentLabel;
- (void)setM_tipsContentLabel:(id)arg1;
- (id)m_tipsTitleLabel;
- (void)setM_tipsTitleLabel:(id)arg1;
- (id)tipsImgView;
- (void)setTipsImgView:(id)arg1;
- (BOOL)bIsForbidCancelBtn;
- (void)setBIsForbidCancelBtn:(BOOL)arg1;
- (id)tipsTitle;
- (id)m_userData;
- (void)setM_userData:(id)arg1;
- (id)tipsTextPlaceholder;
- (void)setTipsTextPlaceholder:(id)arg1;
- (id)textFieldDefaultText;
- (void)setTextFieldDefaultText:(id)arg1;
- (long long)tipTag;
- (void)setTipTag:(long long)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (id)topViewController;
- (void)setTopViewController:(id)arg1;
- (BOOL)allButtonVertical;
- (void)setAllButtonVertical:(BOOL)arg1;
- (BOOL)alwaysWeakContent;
- (void)setAlwaysWeakContent:(BOOL)arg1;
- (BOOL)hideTipsWhenClickedOutOfTips;
- (void)setHideTipsWhenClickedOutOfTips:(BOOL)arg1;
- (long long)fixedUserInterfaceStyle;
- (void)setFixedUserInterfaceStyle:(long long)arg1;
- (void)setInputControllerProxyService:(id)arg1;
- (void).cxx_destruct;
@end

