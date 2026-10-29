@interface MMAssetPickerSliderThumbView : MMUIView
{
    BOOL _isActive; // +0x8
    UIImageView * _arrow; // +0x10
    UIEdgeInsets _touchInsets; // +0x18
}
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)setIsActive:(BOOL)arg1;
- (id)arrow;
- (void)setArrow:(id)arg1;
- (UIEdgeInsets)touchInsets;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
- (BOOL)isActive;
- (void).cxx_destruct;
@end

