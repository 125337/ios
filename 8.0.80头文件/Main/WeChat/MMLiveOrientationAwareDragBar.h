@interface MMLiveOrientationAwareDragBar : MMUIView
{
    MMUIView * _barView; // +0x8
    double _displayDragCloseStyleProgress; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateBarViewColor:(id)arg1;
- (void)handleDragBarGestureChange:(double)arg1;
- (void)handleDragBarGestureEnd;
- (void)layoutSubviews;
- (BOOL)isLandscape;
- (void)layoutBarViewForCurrentOrientation;
- (void)updateDisplayDragCloseStyle;
- (void)setDisplayDragCloseStyleProgress:(double)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)barView;
- (void)setBarView:(id)arg1;
- (double)displayDragCloseStyleProgress;
- (void).cxx_destruct;
@end
