@interface MMWeEffectFrame : NSObject
{
    BOOL _mirror; // +0x8
    BOOL _isFront; // +0x9
    int _texture; // +0xc
    int _maskTexture; // +0x10
    int _faceTrackRet; // +0x14
    long long _inputFormat; // +0x18
    opaqueCMSampleBuffer * _sampleBuffer; // +0x20
    __CVBuffer * _pixelBuffer; // +0x28
    long long _renderRotation; // +0x30
    XImage * _rgbaImage; // +0x38
    CGSize _textureSize; // +0x40
    CGSize _faceTrackScaledSize; // +0x50
    CGRect _normalizeFrame; // +0x60
}
- (long long)inputFormat;
- (void)setInputFormat:(long long)arg1;
- (opaqueCMSampleBuffer *)sampleBuffer;
- (void)setSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (int)texture;
- (void)setTexture:(int)arg1;
- (CGSize)textureSize;
- (void)setTextureSize:(CGSize)arg1;
- (int)maskTexture;
- (void)setMaskTexture:(int)arg1;
- (BOOL)mirror;
- (void)setMirror:(BOOL)arg1;
- (long long)renderRotation;
- (void)setRenderRotation:(long long)arg1;
- (BOOL)isFront;
- (void)setIsFront:(BOOL)arg1;
- (id)rgbaImage;
- (void)setRgbaImage:(id)arg1;
- (CGRect)normalizeFrame;
- (void)setNormalizeFrame:(CGRect)arg1;
- (int)faceTrackRet;
- (void)setFaceTrackRet:(int)arg1;
- (CGSize)faceTrackScaledSize;
- (void)setFaceTrackScaledSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

