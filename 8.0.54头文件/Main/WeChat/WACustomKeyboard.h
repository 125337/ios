@interface WACustomKeyboard : UIView <UIScrollViewDelegate, UIInputViewAudioFeedback>
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
    BOOL _showConfirm; // +0x50
    id <UITextInput> _textView; // +0x58
    long long _maxLength; // +0x60
    id <WACustomKeyboardDelegate> _delegate; // +0x68
    NSTimer * _timer; // +0x70
    double _height; // +0x78
    UIButton * _extraButton; // +0x80
    long long _type; // +0x88
    UIEdgeInsets _insets; // +0x90
}
- (id)init;
- (void)didRotate;
- (void)setType:(long long)arg1 showConfirm:(BOOL)arg2;
- (void)setup3X4Keyboard:(BOOL)arg1;
- (void)setup4X4Keyboard:(BOOL)arg1;
- (void)setExtraKey:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
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
- (long long)maxLength;
- (void)setMaxLength:(long long)arg1;
- (UIEdgeInsets)insets;
- (void)setInsets:(UIEdgeInsets)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
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

