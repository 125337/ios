@interface MPOriginalImageSource : NSObject
{
    BOOL _isHDR; // +0x8
    BOOL _useCoreImageHDR; // +0x9
    BOOL _hasManualGainMap; // +0xa
    long long _width; // +0x10
    long long _height; // +0x18
    long long _storageWidth; // +0x20
    long long _storageHeight; // +0x28
    long long _orientation; // +0x30
    NSString * _format; // +0x38
    NSString * _colorSpace; // +0x40
    CGImageSource * _cgSource; // +0x48
    CGImage * _baseImage; // +0x50
    CIImage * _hdrCIImage; // +0x58
    NSData * _gainMapPixels; // +0x60
    long long _gainMapWidth; // +0x68
    long long _gainMapHeight; // +0x70
    long long _gainMapBytesPerRow; // +0x78
    long long _gainMapBytesPerPixel; // +0x80
    struct _gainMapMeta; // +0x88
}
- (void)dealloc;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (long long)storageWidth;
- (void)setStorageWidth:(long long)arg1;
- (long long)storageHeight;
- (void)setStorageHeight:(long long)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (BOOL)isHDR;
- (void)setIsHDR:(BOOL)arg1;
- (id)format;
- (void)setFormat:(id)arg1;
- (id)colorSpace;
- (void)setColorSpace:(id)arg1;
- (CGImageSource *)cgSource;
- (void)setCgSource:(CGImageSource *)arg1;
- (CGImage *)baseImage;
- (void)setBaseImage:(CGImage *)arg1;
- (id)hdrCIImage;
- (void)setHdrCIImage:(id)arg1;
- (BOOL)useCoreImageHDR;
- (void)setUseCoreImageHDR:(BOOL)arg1;
- (BOOL)hasManualGainMap;
- (void)setHasManualGainMap:(BOOL)arg1;
- (id)gainMapPixels;
- (void)setGainMapPixels:(id)arg1;
- (long long)gainMapWidth;
- (void)setGainMapWidth:(long long)arg1;
- (long long)gainMapHeight;
- (void)setGainMapHeight:(long long)arg1;
- (long long)gainMapBytesPerRow;
- (void)setGainMapBytesPerRow:(long long)arg1;
- (long long)gainMapBytesPerPixel;
- (void)setGainMapBytesPerPixel:(long long)arg1;
- (struct)gainMapMeta;
- (void)setGainMapMeta:(struct)arg1;
- (void).cxx_destruct;
@end
