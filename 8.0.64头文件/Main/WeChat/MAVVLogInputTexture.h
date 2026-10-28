@interface MAVVLogInputTexture : NSObject
{
    BOOL _needPosition; // +0x8
    int _width; // +0xc
    int _height; // +0x10
    id <MTLTexture> _mtlTexture; // +0x18
    __CVBuffer * _pixelBuffer; // +0x20
    MAVVLogLayoutInfo * _layoutInfo; // +0x28
    MAVVLogLayoutInfo * _toLayoutInfo; // +0x30
    MAVInputAnimation * _animation; // +0x38
    long long _rotate; // +0x40
    CGRect _position; // +0x48
    CGRect _cropRect; // +0x68
}
- (id)init;
- (id)mtlTexture;
- (void)setMtlTexture:(id)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (id)layoutInfo;
- (void)setLayoutInfo:(id)arg1;
- (id)toLayoutInfo;
- (void)setToLayoutInfo:(id)arg1;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (CGRect)position;
- (void)setPosition:(CGRect)arg1;
- (CGRect)cropRect;
- (void)setCropRect:(CGRect)arg1;
- (long long)rotate;
- (void)setRotate:(long long)arg1;
- (BOOL)needPosition;
- (void)setNeedPosition:(BOOL)arg1;
- (void).cxx_destruct;
@end
