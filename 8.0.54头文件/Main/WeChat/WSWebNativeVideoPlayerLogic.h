@interface WSWebNativeVideoPlayerLogic : NSObject
{
    unsigned int _nativeViewId; // +0x8
    id <WSWebNativeVideoPlayerLogicDelegate> _delegate; // +0x10
}
- (id)initWithViewId:(unsigned int)arg1 andDelegate:(id)arg2;
- (id)createPlayerView:(CGRect)arg1;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)stop;
- (void)destroy;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setLoop:(BOOL)arg1;
- (void)seek:(double)arg1;
- (unsigned int)nativeViewId;
- (id)delegate;
- (void).cxx_destruct;
@end

