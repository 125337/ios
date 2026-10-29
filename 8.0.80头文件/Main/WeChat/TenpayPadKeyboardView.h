@interface TenpayPadKeyboardView : UIView
{
    double _bottomSpace; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)layoutButtons;
- (double)bottomSpace;
- (void)setBottomSpace:(double)arg1;
@end
