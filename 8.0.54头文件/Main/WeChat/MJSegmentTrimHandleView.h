@interface MJSegmentTrimHandleView : MMUIView <MJSegmentTrimHandleProtocol>
{
    BOOL _isLeftExpandable; // +0x8
    BOOL _isRightExpandable; // +0x9
    MMUIView * _backgroundView; // +0x10
    MMUIView * _contentView; // +0x18
    CAShapeLayer * _maskLayer; // +0x20
    UIImageView * _leftTrimHandleImageView; // +0x28
    UIImageView * _rightTrimHandleImageView; // +0x30
    UIEdgeInsets _trimHandleViewInsets; // +0x38
    UIEdgeInsets _leftHitInsets; // +0x58
    UIEdgeInsets _rightHitInsets; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)setupLayers;
- (void)layoutViews;
- (void)layoutInsetsRelatedViews;
- (void)layoutSubviews;
- (BOOL)respondsToPanGesture:(id)arg1;
- (unsigned long long)trimmingEdgeForPanGesture:(id)arg1;
- (CGRect)leftTrimHandleHitRect;
- (CGRect)rightTrimHandleHitRect;
- (void)setTrimHandleViewInsets:(UIEdgeInsets)arg1;
- (void)setIsLeftExpandable:(BOOL)arg1;
- (void)setIsRightExpandable:(BOOL)arg1;
- (UIEdgeInsets)trimHandleViewInsets;
- (UIEdgeInsets)leftHitInsets;
- (void)setLeftHitInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)rightHitInsets;
- (void)setRightHitInsets:(UIEdgeInsets)arg1;
- (BOOL)isLeftExpandable;
- (BOOL)isRightExpandable;
- (id)backgroundView;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)leftTrimHandleImageView;
- (void)setLeftTrimHandleImageView:(id)arg1;
- (id)rightTrimHandleImageView;
- (void)setRightTrimHandleImageView:(id)arg1;
- (void).cxx_destruct;
@end

