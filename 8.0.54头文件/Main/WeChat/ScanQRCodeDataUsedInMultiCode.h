@interface ScanQRCodeDataUsedInMultiCode : NSObject
{
    BOOL _isClipImage; // +0x8
    id /* block */ _block; // +0x10
    CGPoint _contentOffset; // +0x18
    CGPoint _normalLongPressPoint; // +0x28
    CGRect _curRelatedRect; // +0x38
}
- (CGRect)curRelatedRect;
- (void)setCurRelatedRect:(CGRect)arg1;
- (CGPoint)contentOffset;
- (void)setContentOffset:(CGPoint)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (BOOL)isClipImage;
- (void)setIsClipImage:(BOOL)arg1;
- (CGPoint)normalLongPressPoint;
- (void)setNormalLongPressPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end

