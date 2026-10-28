@interface WCPIPVideoFrame : WCPIPRenderObj <NSCopying>
{
    BOOL _flipX; // +0x8
    MMLivePixelBuffer * _pixelBufferObj; // +0x10
    MMLivePixelBuffer * _cachedAspectPixelBufferObj; // +0x18
    CIImage * _cachedFillImage; // +0x20
    unsigned long long _srcType; // +0x28
    NSString * _userId; // +0x30
    unsigned long long _renderMode; // +0x38
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isSrcValid;
- (id)pixelBufferObj;
- (void)setPixelBufferObj:(id)arg1;
- (id)cachedAspectPixelBufferObj;
- (void)setCachedAspectPixelBufferObj:(id)arg1;
- (id)cachedFillImage;
- (void)setCachedFillImage:(id)arg1;
- (unsigned long long)srcType;
- (void)setSrcType:(unsigned long long)arg1;
- (BOOL)flipX;
- (void)setFlipX:(BOOL)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (unsigned long long)renderMode;
- (void)setRenderMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
