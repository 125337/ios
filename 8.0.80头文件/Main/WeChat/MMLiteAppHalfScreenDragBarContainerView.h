@interface MMLiteAppHalfScreenDragBarContainerView : UIView
{
    MMLiteAppHalfScreenDragBarView * _dragBarView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (double)containerHeight;
- (void)setupMask;
- (void)setupDragBar;
- (void)updateDisplayDragCloseProgress:(double)arg1;
- (void)layoutSubviews;
- (id)dragBarView;
- (void).cxx_destruct;
@end
