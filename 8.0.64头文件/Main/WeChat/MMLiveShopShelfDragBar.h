@interface MMLiveShopShelfDragBar : MMUIView
{
    MMUIView * _barView; // +0x8
    double _displayDragCloseStyleProgress; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateBarViewColor:(id)arg1;
- (void)layoutSubviews;
- (void)setDisplayDragCloseStyleProgress:(double)arg1;
- (void)updateDisplayDragCloseStyle;
- (void)doLayoutBarView;
- (void)handleDragBarGestureChange:(double)arg1;
- (void)handleDragBarGestureEnd;
- (void)setDisplayDragCloseStyle:(BOOL)arg1;
- (BOOL)displayDragCloseStyle;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)barView;
- (void)setBarView:(id)arg1;
- (double)displayDragCloseStyleProgress;
- (void).cxx_destruct;
@end
