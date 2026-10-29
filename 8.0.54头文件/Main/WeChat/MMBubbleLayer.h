@interface MMBubbleLayer : NSObject
{
    int _arrowDirection; // +0x8
    double _cornerRadius; // +0x10
    double _arrowHeight; // +0x18
    double _arrowWidth; // +0x20
    double _arrowPosition; // +0x28
    CGSize _size; // +0x30
}
- (id)init;
- (void)setArrowPosition:(double)arg1;
- (void)setArrowPositionAtPos:(double)arg1 baseLen:(double)arg2;
- (id)layerForSize:(CGSize)arg1;
- (id)arrowPoints;
- (id)keyPointAtcorner;
- (id)centerOfCorner;
- (CGRect)contentFrame;
- (id)bubblePath;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (double)arrowHeight;
- (void)setArrowHeight:(double)arg1;
- (double)arrowWidth;
- (void)setArrowWidth:(double)arg1;
- (int)arrowDirection;
- (void)setArrowDirection:(int)arg1;
- (double)arrowPosition;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
@end

