@interface MMGradientBottomView : UIView
{
    BOOL _ignoreHitTest; // +0x8
    MMGradientView * _gradientView; // +0x10
    UIView * _contentView; // +0x18
    UIColor * _color; // +0x20
}
+ (double)gradientHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setColor:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)color;
- (BOOL)ignoreHitTest;
- (void)setIgnoreHitTest:(BOOL)arg1;
- (void).cxx_destruct;
@end

