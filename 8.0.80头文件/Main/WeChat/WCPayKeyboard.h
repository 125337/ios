@interface WCPayKeyboard : UIView
{
    UIImageView * _imgDelete; // +0x8
    UIImageView * _imgDeleteHL; // +0x10
    UIColor * _btnBackgroundColorNormal; // +0x18
    UIColor * _btnBackgroundColorHighlighted; // +0x20
    UIColor * _delBtnBackgroundColorNormal; // +0x28
    UIColor * _delBtnBackgroundColorHighlighted; // +0x30
    BOOL _showConfirm; // +0x38
    id <UITextInput> _textView; // +0x40
    long long _maxLength; // +0x48
    id <WACustomKeyboardDelegate> _delegate; // +0x50
    NSTimer * _timer; // +0x58
    double _height; // +0x60
    UIButton * _extraButton; // +0x68
    long long _type; // +0x70
    CGSize _oldSize; // +0x78
    UIEdgeInsets _insets; // +0x88
}
- (id)init;
- (BOOL)enableInputClicksWhenVisible;
- (void)layoutSubviews;
- (void)setType:(long long)arg1 showConfirm:(BOOL)arg2;
- (void)setup3X4Keyboard:(BOOL)arg1;
- (void)setup4X4Keyboard:(BOOL)arg1;
- (void)setExtraKey:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)dismissPressed:(id)arg1;
- (void)deleteReleased:(id)arg1;
- (void)startDelete;
- (void)characterDeleted;
- (void)deletePressed:(id)arg1;
- (void)characterPressed:(id)arg1;
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
- (CGSize)oldSize;
- (void)setOldSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
