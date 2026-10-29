@interface WCFinderProfileWarningView : UIView
{
    BOOL _clickable; // +0x8
    long long _type; // +0x10
    UIView * _rightView; // +0x18
    UIImageView * _iconView; // +0x20
    UILabel * _textLabel; // +0x28
    UIImageView * _tailIconView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (void)setTailIconView:(id)arg1;
- (void)setClickable:(BOOL)arg1;
- (id)tailView;
- (void)setRightView:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setType:(long long)arg1;
- (id)displayBackgroundColor;
- (id)displayIcon;
- (void)setText:(id)arg1;
- (id)text;
- (long long)type;
- (BOOL)clickable;
- (id)rightView;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)tailIconView;
- (void).cxx_destruct;
@end
