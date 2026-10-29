@interface FlutterDarwinExternalTextureMetal : NSObject
{
    __CVMetalTextureCache * _textureCache; // +0x8
    NSObject<FlutterTexture> * _externalTexture; // +0x10
    BOOL _textureFrameAvailable; // +0x18
    sk_sp<flutter::DlImage> _externalImage; // +0x20
    __CVBuffer * _lastPixelBuffer; // +0x28
    unsigned int _pixelFormat; // +0x30
    BOOL _enableImpeller; // +0x34
    long long _textureID; // +0x38
}
- (id)initWithTextureCache:(__CVMetalTextureCache *)arg1 textureID:(long long)arg2 texture:(id)arg3 enableImpeller:(BOOL)arg4;
- (void)dealloc;
- (void)paintContext:(PaintContext *)arg1 bounds:(const SkRect *)arg2 freeze:(BOOL)arg3 sampling:(int)arg4;
- (void)onNeedsUpdatedTexture:(PaintContext *)arg1;
- (void)onGrContextCreated;
- (void)onGrContextDestroyed;
- (void)markNewFrameAvailable;
- (void)onTextureUnregistered;
- (sk_sp<flutter::DlImage>)wrapExternalPixelBuffer:(__CVBuffer *)arg1 context:(PaintContext *)arg2;
- (sk_sp<flutter::DlImage>)wrapNV12ExternalPixelBuffer:(__CVBuffer *)arg1 context:(PaintContext *)arg2;
- (sk_sp<flutter::DlImage>)wrapRGBAExternalPixelBuffer:(__CVBuffer *)arg1 context:(PaintContext *)arg2;
- (long long)textureID;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

