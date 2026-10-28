@interface BTMinimizeAnimationView : MMUIView
{
    UIView * _backgroundView; // +0x8
    UIView * _snapshotCellView; // +0x10
    CAShapeLayer * _maskLayer; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 snapshotCellView:(id)arg2;
- (void)initSubview;
- (void)setMaskLayerAnimationWithStartPath:(id)arg1 endPath:(id)arg2 duration:(double)arg3;
- (void)setSnapshotCellViewAlpha:(double)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)snapshotCellView;
- (void)setSnapshotCellView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
