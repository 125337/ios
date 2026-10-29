@interface WSWebNativeVideoPlayerView : UIView <WSWebNativeVideoPlayerViewEvents>
{
    BOOL _shouldResumeWhenCallingPlayIfNeeded; // +0x8
    unsigned int _nativeViewId; // +0xc
    id <WSWebNativeVideoPlayerLogicDelegate> _delegate; // +0x10
    WSWebNativeVideoPlayerLogic * _logic; // +0x18
}
- (id)initWithViewId:(unsigned int)arg1 delegate:(id)arg2;
- (id)initWithViewId:(unsigned int)arg1 andPluginKey:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)setFinderDataItem:(id)arg1;
- (void)setVideoPath:(id)arg1;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)stop;
- (void)destroy;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setLoop:(BOOL)arg1;
- (void)seek:(double)arg1;
- (void)playIfNeeded;
- (void)pauseIfNeeded;
- (unsigned int)nativeViewId;
- (id)delegate;
- (id)logic;
- (void)setLogic:(id)arg1;
- (BOOL)shouldResumeWhenCallingPlayIfNeeded;
- (void)setShouldResumeWhenCallingPlayIfNeeded:(BOOL)arg1;
- (void).cxx_destruct;
@end

