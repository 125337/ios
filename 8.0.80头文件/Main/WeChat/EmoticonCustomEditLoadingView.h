@interface EmoticonCustomEditLoadingView : UIView
{
    CALayer * _borderAnimationContainer; // +0x8
    CADisplayLink * _borderDisplayLink; // +0x10
    double _borderAnimStartTime; // +0x18
    NSArray * _edgeCumulativeLengths; // +0x20
    NSArray * _edgeGradients; // +0x28
    double _borderPerimeter; // +0x30
    double _borderLineWidth; // +0x38
    double _borderTailFraction; // +0x40
    double _borderAnimDuration; // +0x48
    double _borderGrowthDuration; // +0x50
    CALayer * _staticBorderLayer; // +0x58
    CGRect _borderFrame; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setBorderFrame:(CGRect)arg1;
- (void)setBorderLineWidth:(double)arg1;
- (void)setBorderTailFraction:(double)arg1;
- (void)setBorderAnimDuration:(double)arg1;
- (void)setBorderGrowthDuration:(double)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (id)animationBorder;
- (void)_updateBorderAnimation;
- (id)staticSquareBorderLayer;
- (void)showStaticBorder;
- (void)hideStaticBorder;
- (double)_alphaAtDist:(double)arg1 headDist:(double)arg2 tailLength:(double)arg3 perimeter:(double)arg4 gamma:(double)arg5;
- (id)borderAnimationContainer;
- (void)setBorderAnimationContainer:(id)arg1;
- (id)borderDisplayLink;
- (void)setBorderDisplayLink:(id)arg1;
- (double)borderAnimStartTime;
- (void)setBorderAnimStartTime:(double)arg1;
- (id)edgeCumulativeLengths;
- (void)setEdgeCumulativeLengths:(id)arg1;
- (id)edgeGradients;
- (void)setEdgeGradients:(id)arg1;
- (CGRect)borderFrame;
- (double)borderPerimeter;
- (void)setBorderPerimeter:(double)arg1;
- (double)borderLineWidth;
- (double)borderTailFraction;
- (double)borderAnimDuration;
- (double)borderGrowthDuration;
- (id)staticBorderLayer;
- (void)setStaticBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end
