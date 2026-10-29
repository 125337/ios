@interface NewQRCodeImageGestureContext : NSObject
{
    CGPoint _touchCenterCoordinate; // +0x8
    CGSize _touchImageSize; // +0x18
}
- (CGPoint)touchCenterCoordinate;
- (void)setTouchCenterCoordinate:(CGPoint)arg1;
- (CGSize)touchImageSize;
- (void)setTouchImageSize:(CGSize)arg1;
@end

