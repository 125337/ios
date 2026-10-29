@interface FlutterTextureRegistryRelay : NSObject <FlutterTextureRegistry>
{
    NSObject<FlutterTextureRegistry> * _parent; // +0x8
}
- (id)initWithParent:(id)arg1;
- (long long)registerTexture:(id)arg1;
- (void)textureFrameAvailable:(long long)arg1;
- (void)unregisterTexture:(long long)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (void).cxx_destruct;
@end
