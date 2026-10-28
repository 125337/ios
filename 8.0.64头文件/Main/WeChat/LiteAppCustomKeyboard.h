@interface LiteAppCustomKeyboard : UIView <UIScrollViewDelegate, UIInputViewAudioFeedback>
{
    UIScrollView * scrollView; // +0x8
    UIPageControl * pageControl; // +0x10
    UIImageView * _imgDelete; // +0x18
    UIImageView * _imgDeleteHL; // +0x20
    UIColor * _btnBackgroundColorNormal; // +0x28
    UIColor * _btnBackgroundColorHighlighted; // +0x30
    UIColor * _delBtnBackgroundColorNormal; // +0x38
    UIColor * _delBtnBackgroundColorHighlighted; // +0x40
    UIColor * _btnBorderColor; // +0x48
    BOOL _zeroLeft; // +0x50
    BOOL _withMargin; // +0x51
    BOOL _withCornerRadius; // +0x52
    NSString * _confirmTitle; // +0x58
    UIColor * _confirmColor; // +0x60
    UIColor * _confirmBgColor; // +0x68
    BOOL _confirmBtnEnableFlag; // +0x70
    UIButton * _confirmBtn; // +0x78
    BOOL _disableDarkMode; // +0x80
    BOOL _showConfirm; // +0x81
    id <UITextInput> _textView; // +0x88
    long long _maxLength; // +0x90
    NSTimer * _timer; // +0x98
    double _height; // +0xa0
    UIButton * _extraButton; // +0xa8
    long long _type; // +0xb0
    UIEdgeInsets _insets; // +0xb8
}
- (id)init;
- (void)didRotate;
- (BOOL)isPay;
- (void)updateInterfaceStyle;
- (void)setType:(long long)arg1 showConfirm:(BOOL)arg2;
- (void)setDisableDarkMode:(BOOL)arg1;
- (void)setConfirmTitle:(id)arg1;
- (void)setConfirmColor:(long long)arg1;
- (void)setConfirmBgColor:(long long)arg1;
- (void)enableKeyboardConfirm:(BOOL)arg1;
- (void)setup3X4Keyboard:(BOOL)arg1;
- (double)commonBtnWidth;
- (double)commonBtnHeight;
- (id)generateButton:(CGRect)arg1;
- (id)generateNumberButton:(CGRect)arg1;
- (id)generateDeleteButton:(CGRect)arg1;
- (id)generateExtraButton:(CGRect)arg1;
- (id)generateConfirmButton:(CGRect)arg1;
- (void)setup4X4Keyboard:(BOOL)arg1;
- (void)setExtraKey:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)visitSubviewsOfView:(id)arg1 vistor:(id /* block */)arg2;
- (BOOL)enableInputClicksWhenVisible;
- (void)dismissPressed:(id)arg1;
- (void)deleteReleased:(id)arg1;
- (void)startDelete;
- (void)characterDeleted;
- (void)deletePressed:(id)arg1;
- (void)characterPressed:(id)arg1;
- (double)getHeight;
- (void)scrollViewDidScroll:(id)arg1;
- (void)changePage:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)isDarkMode;
- (id)getKeyboardButtonFont;
- (long long)maxLength;
- (void)setMaxLength:(long long)arg1;
- (UIEdgeInsets)insets;
- (void)setInsets:(UIEdgeInsets)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (id)extraButton;
- (void)setExtraButton:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (BOOL)showConfirm;
- (void)setShowConfirm:(BOOL)arg1;
- (void).cxx_destruct;
@end
