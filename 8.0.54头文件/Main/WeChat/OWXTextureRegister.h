@interface OWXTextureRegister : NSObject <FlutterTexture, OMJTextureRegister>
{
    NSObject<FlutterTextureRegistry> * _textures; // +0x8
    id <OMJTextureHolder> _textureHolder; // +0x10
}
- (id)initWithTextures:(id)arg1;
- (long long)registerTextureWithHolder:(id)arg1;
- (void)unregisterTextureWithID:(long long)arg1;
- (void)textureFrameAvailableWithID:(long long)arg1;
- (__CVBuffer *)copyPixelBuffer;
- (id)textures;
- (void)setTextures:(id)arg1;
- (id)textureHolder;
- (void)setTextureHolder:(id)arg1;
- (void).cxx_destruct;
@end

