@interface WCLiveHalfScreenView : MMUIHalfScreenViewController <MMUIHalfScreenViewControllerDelegate>
{
    BOOL _hasCancelButton; // +0x68
    BOOL _isShorterHalfVC; // +0x69
    BOOL _useBoldTitle; // +0x6a
    BOOL _isShown; // +0x6b
    MMUILabel * _infoTitle; // +0x70
    RichTextView * _infoDesc; // +0x78
    UIButton * _confirmButton; // +0x80
    UIButton * _cancelButton; // +0x88
    NSString * _desc; // +0x90
    id /* block */ _confirmCallback; // +0x98
    id /* block */ _cancelCallback; // +0xa0
    NSString * _confirmButtonLabel; // +0xa8
    NSString * _cancelButtonLabel; // +0xb0
    UIColor * _singleConfirmButtonBgColor; // +0xb8
    UIColor * _singleConfirmButtonFgColor; // +0xc0
    UIColor * _confirmButtonBgColor; // +0xc8
    UIColor * _confirmButtonFgColor; // +0xd0
    UIColor * _cancelButtonBgColor; // +0xd8
    UIColor * _cancelButtonFgColor; // +0xe0
    UIColor * _titleColor; // +0xe8
    UIColor * _descColor; // +0xf0
    double _descTextSize; // +0xf8
    long long _titleAlignment; // +0x100
    long long _descAlignment; // +0x108
    double _buttonBottomMargin; // +0x110
    double _configHalfScreenHeight; // +0x118
    double _titleTopMargin; // +0x120
    double _titleDescGap; // +0x128
    double _viewLeftRightMargin; // +0x130
}
- (id)initWithTitle:(id)arg1 andDesc:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupUI;
- (void)layoutUI;
- (void)layoutLiveConfirmButton;
- (void)updateConfirmButtonLayout;
- (void)layoutConfrimAndCancelButtons;
- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (void)onArrowButtonClicked;
- (void)popOrDismissSelf;
- (void)popOrDismissSelfWithCompletion:(id /* block */)arg1;
- (void)notifySelfPopedOrDismissed;
- (id)infoTitle;
- (void)setInfoTitle:(id)arg1;
- (id)infoDesc;
- (void)setInfoDesc:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id /* block */)confirmCallback;
- (void)setConfirmCallback:(id /* block */)arg1;
- (id /* block */)cancelCallback;
- (void)setCancelCallback:(id /* block */)arg1;
- (id)confirmButtonLabel;
- (void)setConfirmButtonLabel:(id)arg1;
- (id)cancelButtonLabel;
- (void)setCancelButtonLabel:(id)arg1;
- (BOOL)hasCancelButton;
- (void)setHasCancelButton:(BOOL)arg1;
- (BOOL)isShorterHalfVC;
- (void)setIsShorterHalfVC:(BOOL)arg1;
- (id)singleConfirmButtonBgColor;
- (void)setSingleConfirmButtonBgColor:(id)arg1;
- (id)singleConfirmButtonFgColor;
- (void)setSingleConfirmButtonFgColor:(id)arg1;
- (id)confirmButtonBgColor;
- (void)setConfirmButtonBgColor:(id)arg1;
- (id)confirmButtonFgColor;
- (void)setConfirmButtonFgColor:(id)arg1;
- (id)cancelButtonBgColor;
- (void)setCancelButtonBgColor:(id)arg1;
- (id)cancelButtonFgColor;
- (void)setCancelButtonFgColor:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)descColor;
- (void)setDescColor:(id)arg1;
- (double)descTextSize;
- (void)setDescTextSize:(double)arg1;
- (long long)titleAlignment;
- (void)setTitleAlignment:(long long)arg1;
- (long long)descAlignment;
- (void)setDescAlignment:(long long)arg1;
- (double)buttonBottomMargin;
- (void)setButtonBottomMargin:(double)arg1;
- (double)configHalfScreenHeight;
- (void)setConfigHalfScreenHeight:(double)arg1;
- (double)titleTopMargin;
- (void)setTitleTopMargin:(double)arg1;
- (double)titleDescGap;
- (void)setTitleDescGap:(double)arg1;
- (double)viewLeftRightMargin;
- (void)setViewLeftRightMargin:(double)arg1;
- (BOOL)useBoldTitle;
- (void)setUseBoldTitle:(BOOL)arg1;
- (BOOL)isShown;
- (void)setIsShown:(BOOL)arg1;
- (void).cxx_destruct;
@end

