@interface WANativeViewTexture : NSObject
{
    BOOL _mirror; // +0x8
    __CVBuffer * _pixelBuffer; // +0x10
    UIImage * _image; // +0x18
    long long _rotation; // +0x20
    long long _contentMode; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (void)seRotation:(long long)arg1;
- (CGSize)getSize;
- (id)getCIImage;
- (__CVBuffer *)pixelBuffer;
- (id)image;
- (void)setImage:(id)arg1;
- (long long)rotation;
- (void)setRotation:(long long)arg1;
- (BOOL)mirror;
- (void)setMirror:(BOOL)arg1;
- (long long)contentMode;
- (void)setContentMode:(long long)arg1;
- (void).cxx_destruct;
@end
