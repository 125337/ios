@interface LiteAppVideoPlayerFrameUpdater : NSObject
{
    BOOL _isDisposed; // +0x8
    long long _textureId; // +0x10
    NSObject<FlutterTextureRegistry> * _registry; // +0x18
}
- (id)initWithRegistry:(id)arg1;
- (void)refreshDisplay;
- (BOOL)isDisposed;
- (void)setIsDisposed:(BOOL)arg1;
- (long long)textureId;
- (void)setTextureId:(long long)arg1;
- (id)registry;
- (void).cxx_destruct;
@end

