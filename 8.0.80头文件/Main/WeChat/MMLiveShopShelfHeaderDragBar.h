@interface MMLiveShopShelfHeaderDragBar : MMUIView
{
    MMUIView * _barView; // +0x8
    UIImageView * _closeIcon; // +0x10
    double _displayDragCloseStyleProgress; // +0x18
    UIColor * _closeIconColor; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateBarViewColor:(id)arg1;
- (void)updateCloseIconColor:(id)arg1;
- (void)updateBarBgColor:(id)arg1;
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
- (id)closeIcon;
- (void)setCloseIcon:(id)arg1;
- (double)displayDragCloseStyleProgress;
- (id)closeIconColor;
- (void)setCloseIconColor:(id)arg1;
- (void).cxx_destruct;
@end
