@interface MMLiveRemoteTrtcRenderContext : NSObject
{
    BOOL _isFirstFrameRendered; // +0x8
    BOOL _isFirstFrameFromCapture; // +0x9
    int _texture; // +0xc
    NSString * _userId; // +0x10
    NSString * _userName; // +0x18
    unsigned long long _renderSrc; // +0x20
    MMLivePixelBuffer * _pixelBuffer; // +0x28
    XImage * _texImage; // +0x30
    CGSize _textureSize; // +0x38
    CGRect _normalizeFrame; // +0x48
}
- (BOOL)isValid;
- (void)updateTexture:(int)arg1 textureSize:(CGSize)arg2;
- (void)extractTexture:(int *)arg1 textureSize:(CGSize *)arg2;
- (void)updateTexImage:(id)arg1 textureSize:(CGSize)arg2;
- (void)extractTexImage:(id *)arg1 textureSize:(CGSize *)arg2;
- (id)description;
- (id)normalizeFrameDescription;
- (id)userId;
- (void)setUserId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)renderSrc;
- (void)setRenderSrc:(unsigned long long)arg1;
- (id)pixelBuffer;
- (void)setPixelBuffer:(id)arg1;
- (int)texture;
- (void)setTexture:(int)arg1;
- (CGSize)textureSize;
- (void)setTextureSize:(CGSize)arg1;
- (id)texImage;
- (void)setTexImage:(id)arg1;
- (CGRect)normalizeFrame;
- (void)setNormalizeFrame:(CGRect)arg1;
- (BOOL)isFirstFrameRendered;
- (void)setIsFirstFrameRendered:(BOOL)arg1;
- (BOOL)isFirstFrameFromCapture;
- (void)setIsFirstFrameFromCapture:(BOOL)arg1;
- (void).cxx_destruct;
@end
