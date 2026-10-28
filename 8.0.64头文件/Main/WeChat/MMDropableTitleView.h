@interface MMDropableTitleView : MMTitleView <MMDropableTitleViewAbility>
{
    UIColor * _buttonBackgroundColor; // +0x8
    double _arrowImageViewAngle; // +0x10
    UIImage * _arrowImage; // +0x18
    UIColor * _arrowImageViewBackgroundColor; // +0x20
    UIColor * _titleLabelTextColor; // +0x28
    id <MMDropableTitleViewDelegate> _titleViewDelegate; // +0x30
    MMUIButton * _button; // +0x38
    MMUILabel * _titleLabel; // +0x40
    UIImageView * _arrowImageView; // +0x48
    NSString * _title; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 buttonBackgroundColor:(id)arg2 arrowImageViewAngle:(double)arg3;
- (id)initWithTitle:(id)arg1 buttonBackgroundColor:(id)arg2 arrowImageViewAngle:(double)arg3 arrowImage:(id)arg4 arrowImageViewBackgroundColor:(id)arg5 titleLabelTextColor:(id)arg6;
- (void)layoutSubviews;
- (void)initViews;
- (void)updateTitle:(id)arg1 animated:(BOOL)arg2;
- (void)setIsEnable:(BOOL)arg1;
- (void)rotateArrowWithAnimated:(BOOL)arg1;
- (void)laytoutTitleViews;
- (void)onClick:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)titleViewDelegate;
- (void)setTitleViewDelegate:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end
