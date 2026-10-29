@interface NewQRCodeScannerGoodsContext : NSObject
{
    BOOL _hasCodeInDetection; // +0x8
    __CVBuffer * _pixelBuf; // +0x10
    UIImage * _image; // +0x18
}
- (__CVBuffer *)pixelBuf;
- (void)setPixelBuf:(__CVBuffer *)arg1;
- (BOOL)hasCodeInDetection;
- (void)setHasCodeInDetection:(BOOL)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
@end
