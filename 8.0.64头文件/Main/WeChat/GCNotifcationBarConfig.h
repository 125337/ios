@interface GCNotifcationBarConfig : NSObject
{
    BOOL _isRightImgClose; // +0x8
    CGSize _leftImgSize; // +0x10
    CGSize _rightImgSize; // +0x20
}
- (CGSize)leftImgSize;
- (void)setLeftImgSize:(CGSize)arg1;
- (CGSize)rightImgSize;
- (void)setRightImgSize:(CGSize)arg1;
- (BOOL)isRightImgClose;
- (void)setIsRightImgClose:(BOOL)arg1;
@end
