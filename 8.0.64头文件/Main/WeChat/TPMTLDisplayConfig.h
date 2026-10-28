@interface TPMTLDisplayConfig : NSObject
{
    int _maxDisplayLum; // +0x8
    int _minDisplayLum; // +0xc
    unsigned long long _colorspace; // +0x10
}
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)colorspace;
- (void)setColorspace:(unsigned long long)arg1;
- (int)maxDisplayLum;
- (void)setMaxDisplayLum:(int)arg1;
- (int)minDisplayLum;
- (void)setMinDisplayLum:(int)arg1;
@end
