@interface FLTFrameUpdater : NSObject
{
    long long _textureId; // +0x8
    NSObject<FlutterTextureRegistry> * _registry; // +0x10
}
- (id)initWithRegistry:(id)arg1;
- (void)onDisplayLink:(id)arg1;
- (long long)textureId;
- (void)setTextureId:(long long)arg1;
- (id)registry;
- (void).cxx_destruct;
@end

