@interface MMLiveObjectManipulationViewConfiguration : NSObject <NSCopying>
{
    BOOL _cancelOutOfBoundManipulations; // +0x8
    BOOL _enableTap; // +0x9
    BOOL _enableRotation; // +0xa
    BOOL _enableScaling; // +0xb
    double _minimumScale; // +0x10
    double _maximumScale; // +0x18
    double _cardinalRotationSnapAngle; // +0x20
    double _minimumHitAreaRatioRelativeToParent; // +0x28
    double _minimumBorderDimensionRatioRelativeToParent; // +0x30
    double _borderOutset; // +0x38
    double _borderWidth; // +0x40
    UIColor * _borderColor; // +0x48
    double _borderCornerRadius; // +0x50
    id <MMLiveObjectManipulationViewCornerAction> _topLeftCornerAction; // +0x58
    id <MMLiveObjectManipulationViewCornerAction> _topRightCornerAction; // +0x60
    id <MMLiveObjectManipulationViewCornerAction> _bottomLeftCornerAction; // +0x68
    id <MMLiveObjectManipulationViewCornerAction> _bottomRightCornerAction; // +0x70
    id <MMLiveObjectManipulationViewCornerAction> _topLeftCornerActionInAccessibilityMode; // +0x78
    id <MMLiveObjectManipulationViewCornerAction> _topRightCornerActionInAccessibilityMode; // +0x80
    id <MMLiveObjectManipulationViewCornerAction> _bottomLeftCornerActionInAccessibilityMode; // +0x88
    id <MMLiveObjectManipulationViewCornerAction> _bottomRightCornerActionInAccessibilityMode; // +0x90
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (double)minimumScale;
- (void)setMinimumScale:(double)arg1;
- (double)maximumScale;
- (void)setMaximumScale:(double)arg1;
- (BOOL)cancelOutOfBoundManipulations;
- (void)setCancelOutOfBoundManipulations:(BOOL)arg1;
- (BOOL)enableTap;
- (void)setEnableTap:(BOOL)arg1;
- (double)cardinalRotationSnapAngle;
- (void)setCardinalRotationSnapAngle:(double)arg1;
- (double)minimumHitAreaRatioRelativeToParent;
- (void)setMinimumHitAreaRatioRelativeToParent:(double)arg1;
- (double)minimumBorderDimensionRatioRelativeToParent;
- (void)setMinimumBorderDimensionRatioRelativeToParent:(double)arg1;
- (double)borderOutset;
- (void)setBorderOutset:(double)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (double)borderCornerRadius;
- (void)setBorderCornerRadius:(double)arg1;
- (BOOL)enableRotation;
- (void)setEnableRotation:(BOOL)arg1;
- (BOOL)enableScaling;
- (void)setEnableScaling:(BOOL)arg1;
- (id)topLeftCornerAction;
- (void)setTopLeftCornerAction:(id)arg1;
- (id)topRightCornerAction;
- (void)setTopRightCornerAction:(id)arg1;
- (id)bottomLeftCornerAction;
- (void)setBottomLeftCornerAction:(id)arg1;
- (id)bottomRightCornerAction;
- (void)setBottomRightCornerAction:(id)arg1;
- (id)topLeftCornerActionInAccessibilityMode;
- (void)setTopLeftCornerActionInAccessibilityMode:(id)arg1;
- (id)topRightCornerActionInAccessibilityMode;
- (void)setTopRightCornerActionInAccessibilityMode:(id)arg1;
- (id)bottomLeftCornerActionInAccessibilityMode;
- (void)setBottomLeftCornerActionInAccessibilityMode:(id)arg1;
- (id)bottomRightCornerActionInAccessibilityMode;
- (void)setBottomRightCornerActionInAccessibilityMode:(id)arg1;
- (void).cxx_destruct;
@end
