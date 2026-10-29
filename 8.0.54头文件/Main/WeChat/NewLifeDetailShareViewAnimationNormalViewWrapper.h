@interface NewLifeDetailShareViewAnimationNormalViewWrapper : NSObject <NewLifeDetailShareViewAnimationProtocol, FlutterTexture>
{
    UIView * _hostView; // +0x8
    id <FlutterTextureRegistry> _textureRegistry; // +0x10
    long long _textureId; // +0x18
    __CVBuffer * _cvPixelBufferRef; // +0x20
}
- (id)initWithView:(id)arg1;
- (void)bindFlutterTextureRegistry:(id)arg1;
- (void)showView;
- (void)hideView;
- (id)getViewInfo;
- (__CVBuffer *)copyPixelBuffer;
- (void)releaeRes;
- (id)hostView;
- (void)setHostView:(id)arg1;
- (id)textureRegistry;
- (void)setTextureRegistry:(id)arg1;
- (long long)textureId;
- (void)setTextureId:(long long)arg1;
- (__CVBuffer *)cvPixelBufferRef;
- (void)setCvPixelBufferRef:(__CVBuffer *)arg1;
- (void).cxx_destruct;
@end

