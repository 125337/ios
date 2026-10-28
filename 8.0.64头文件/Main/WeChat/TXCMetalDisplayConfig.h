@interface TXCMetalDisplayConfig : NSObject
{
    int _maxDisplayLum; // +0x8
    int _minDisplayLum; // +0xc
    int _maxDisplayMasteringLum; // +0x10
    int _minDisplayMasteringLum; // +0x14
    unsigned long long _colorSpace; // +0x18
    unsigned long long _pixelFormat; // +0x20
}
+ (int)hdrStaticMetadataLuminaceScale;
+ (BOOL)isBT2020Supported;
+ (id)createWithHdrMetadata:(const void *)arg1 pixelFormat:(int)arg2;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)colorSpace;
- (void)setColorSpace:(unsigned long long)arg1;
- (int)maxDisplayLum;
- (void)setMaxDisplayLum:(int)arg1;
- (int)minDisplayLum;
- (void)setMinDisplayLum:(int)arg1;
- (int)maxDisplayMasteringLum;
- (void)setMaxDisplayMasteringLum:(int)arg1;
- (int)minDisplayMasteringLum;
- (void)setMinDisplayMasteringLum:(int)arg1;
- (unsigned long long)pixelFormat;
- (void)setPixelFormat:(unsigned long long)arg1;
@end
