@interface WCFinderProfileWarnningView : UIView
{
    BOOL _imageLoading; // +0x8
    long long _type; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _textLabel; // +0x20
    UIImageView * _tailIconView; // +0x28
    UIColor * _textColor; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setType:(long long)arg1;
- (id)displayBackgroundColor;
- (id)displayTextColor;
- (id)displayIcon;
- (void)setText:(id)arg1;
- (id)text;
- (void)setClickable:(BOOL)arg1;
- (BOOL)clickable;
- (long long)type;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)tailIconView;
- (void)setTailIconView:(id)arg1;
- (BOOL)imageLoading;
- (void)setImageLoading:(BOOL)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (void).cxx_destruct;
@end

