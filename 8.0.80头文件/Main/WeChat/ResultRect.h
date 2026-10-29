@interface ResultRect : NSObject
{
    CGPoint _leftTop; // +0x8
    CGPoint _rightTop; // +0x18
    CGPoint _rightBottom; // +0x28
    CGPoint _leftBottom; // +0x38
}
- (BOOL)standardRectangle;
- (BOOL)standardPassport;
- (CGPoint)leftTop;
- (void)setLeftTop:(CGPoint)arg1;
- (CGPoint)rightTop;
- (void)setRightTop:(CGPoint)arg1;
- (CGPoint)rightBottom;
- (void)setRightBottom:(CGPoint)arg1;
- (CGPoint)leftBottom;
- (void)setLeftBottom:(CGPoint)arg1;
@end
