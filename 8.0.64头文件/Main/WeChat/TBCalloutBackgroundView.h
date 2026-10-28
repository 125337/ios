@interface TBCalloutBackgroundView : UIView
{
    BOOL _highlighted; // +0x8
    CALayer * _contentMask; // +0x10
    double _anchorHeight; // +0x18
    double _anchorMargin; // +0x20
    CGPoint _arrowPoint; // +0x28
}
+ (id)dataWithBase64EncodedString:(id)arg1;
+ (id)embeddedImageNamed:(id)arg1;
+ (id)CalloutArrow;
+ (id)CalloutArrow_2x;
- (CGPoint)arrowPoint;
- (void)setArrowPoint:(CGPoint)arg1;
- (BOOL)highlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)contentMask;
- (void)setContentMask:(id)arg1;
- (double)anchorHeight;
- (void)setAnchorHeight:(double)arg1;
- (double)anchorMargin;
- (void)setAnchorMargin:(double)arg1;
@end
