@interface MPOriginalImageLevelPlane : NSObject
{
    NSString * _key; // +0x8
    long long _level; // +0x10
    long long _width; // +0x18
    long long _height; // +0x20
    long long _orientation; // +0x28
    long long _bytesPerTexel; // +0x30
    NSString * _format; // +0x38
    NSData * _pixels; // +0x40
}
- (id)key;
- (void)setKey:(id)arg1;
- (long long)level;
- (void)setLevel:(long long)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (long long)bytesPerTexel;
- (void)setBytesPerTexel:(long long)arg1;
- (id)format;
- (void)setFormat:(id)arg1;
- (id)pixels;
- (void)setPixels:(id)arg1;
- (void).cxx_destruct;
@end
