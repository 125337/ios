@interface MMLiveMorphDismissTargetExtraConfig : NSObject
{
    double _targetCornerRadius; // +0x8
    CGRect _backgroundBlurFrameOnScreen; // +0x10
}
- (CGRect)backgroundBlurFrameOnScreen;
- (void)setBackgroundBlurFrameOnScreen:(CGRect)arg1;
- (double)targetCornerRadius;
- (void)setTargetCornerRadius:(double)arg1;
@end
