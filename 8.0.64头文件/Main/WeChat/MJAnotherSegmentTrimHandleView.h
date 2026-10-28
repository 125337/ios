@interface MJAnotherSegmentTrimHandleView : MMUIView <MJSegmentTrimHandleProtocol>
{
    BOOL _isLeftExpandable; // +0x8
    BOOL _isRightExpandable; // +0x9
    MMUIView * _foregroundView; // +0x10
    MJTrimHandle * _leftHandle; // +0x18
    MJTrimHandle * _rightHandle; // +0x20
    UIEdgeInsets _trimHandleViewInsets; // +0x28
    UIEdgeInsets _leftHitInsets; // +0x48
    UIEdgeInsets _rightHitInsets; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutViews;
- (BOOL)respondsToPanGesture:(id)arg1;
- (unsigned long long)trimmingEdgeForPanGesture:(id)arg1;
- (void)showSnapIndicatorLineWithEdge:(unsigned long long)arg1;
- (void)hideSnapIndicatorLine;
- (void)showSnapIndicatorDotWithEdge:(unsigned long long)arg1;
- (void)hideSnapIndicatorDot;
- (void)setTrimHandleViewInsets:(UIEdgeInsets)arg1;
- (CGRect)leftTrimHandleHitRect;
- (CGRect)rightTrimHandleHitRect;
- (UIEdgeInsets)trimHandleViewInsets;
- (UIEdgeInsets)leftHitInsets;
- (void)setLeftHitInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)rightHitInsets;
- (void)setRightHitInsets:(UIEdgeInsets)arg1;
- (BOOL)isLeftExpandable;
- (void)setIsLeftExpandable:(BOOL)arg1;
- (BOOL)isRightExpandable;
- (void)setIsRightExpandable:(BOOL)arg1;
- (id)foregroundView;
- (void)setForegroundView:(id)arg1;
- (id)leftHandle;
- (void)setLeftHandle:(id)arg1;
- (id)rightHandle;
- (void)setRightHandle:(id)arg1;
- (void).cxx_destruct;
@end
