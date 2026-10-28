@interface MMToastView : UIView
{
    float _progress; // +0x8
    unsigned long long _style; // +0x10
    NSString * _svgIconName; // +0x18
    UIImage * _iconImage; // +0x20
    NSString * _text; // +0x28
    NSMutableAttributedString * _attributedString; // +0x30
    UIView<MultiLineTextView> * _customView; // +0x38
    UIView * _backgroundView; // +0x40
    UIImageView * _iconView; // +0x48
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x50
    SightIconView * _sightIconView; // +0x58
    MMUILabel * _textLabel; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (id)activityIndicatorView;
- (id)sightIconView;
- (void)setProgress:(float)arg1;
- (void)updateFrame;
- (void)updateLayout;
- (void)updateIcon;
- (void)setStyle:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setSvgIconName:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setCustomView:(id)arg1;
- (id)contentColor;
- (double)maxWidth;
- (UIEdgeInsets)insets;
- (double)iconTextPadding;
- (CGSize)iconSize;
- (unsigned long long)style;
- (id)svgIconName;
- (id)iconImage;
- (id)text;
- (id)attributedString;
- (id)customView;
- (float)progress;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setSightIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
