@interface MJSegmentTrimHandleReusableView : UICollectionReusableView <MJSegmentReusableView>
{
    id <MJSegmentReusableViewDelegate> _delegate; // +0x8
    UIView<MJSegmentTrimHandleProtocol> * _backingView; // +0x10
}
- (void)setupViews;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)willDisplay;
- (void)didEndDisplaying;
- (UIEdgeInsets)trimHandleViewInsets;
- (void)setTrimHandleViewInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)leftHitInsets;
- (void)setLeftHitInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)rightHitInsets;
- (void)setRightHitInsets:(UIEdgeInsets)arg1;
- (BOOL)isLeftExpandable;
- (void)setIsLeftExpandable:(BOOL)arg1;
- (BOOL)isRightExpandable;
- (void)setIsRightExpandable:(BOOL)arg1;
- (BOOL)respondsToPanGesture:(id)arg1;
- (unsigned long long)trimmingEdgeForPanGesture:(id)arg1;
- (void)showSnapIndicatorLineWithEdge:(unsigned long long)arg1;
- (void)hideSnapIndicatorLine;
- (void)showSnapIndicatorDotWithEdge:(unsigned long long)arg1;
- (void)hideSnapIndicatorDot;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backingView;
- (void)setBackingView:(id)arg1;
- (void).cxx_destruct;
@end

