@interface FLTVideoPlayer : NSObject <FlutterTexture, FlutterStreamHandler>
{
    BOOL _disposed; // +0x8
    BOOL _isPlaying; // +0x9
    BOOL _isLooping; // +0xa
    BOOL _isInitialized; // +0xb
    AVPlayer * _player; // +0x10
    AVPlayerItemVideoOutput * _videoOutput; // +0x18
    CADisplayLink * _displayLink; // +0x20
    FlutterEventChannel * _eventChannel; // +0x28
    id /* block */ _eventSink; // +0x30
    CGAffineTransform _preferredTransform; // +0x38
}
- (id)initWithAsset:(id)arg1 frameUpdater:(id)arg2;
- (void)addObservers:(id)arg1;
- (void)itemDidPlayToEndTime:(id)arg1;
- (id)getVideoCompositionWithTransform:(CGAffineTransform)arg1 withAsset:(id)arg2 withVideoTrack:(id)arg3;
- (void)createVideoOutputAndDisplayLink:(id)arg1;
- (id)initWithURL:(id)arg1 frameUpdater:(id)arg2 httpHeaders:(id)arg3;
- (CGAffineTransform)fixTransform:(id)arg1;
- (id)initWithPlayerItem:(id)arg1 frameUpdater:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updatePlayingState;
- (void)sendInitialized;
- (void)play;
- (void)pause;
- (long long)position;
- (long long)duration;
- (void)seekTo:(int)arg1;
- (void)setIsLooping:(BOOL)arg1;
- (void)setVolume:(double)arg1;
- (void)setPlaybackSpeed:(double)arg1;
- (__CVBuffer *)copyPixelBuffer;
- (void)onTextureUnregistered:(id)arg1;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (void)disposeSansEventChannel;
- (void)dispose;
- (id)player;
- (id)videoOutput;
- (id)displayLink;
- (id)eventChannel;
- (void)setEventChannel:(id)arg1;
- (id /* block */)eventSink;
- (void)setEventSink:(id /* block */)arg1;
- (CGAffineTransform)preferredTransform;
- (void)setPreferredTransform:(CGAffineTransform)arg1;
- (BOOL)disposed;
- (BOOL)isPlaying;
- (BOOL)isLooping;
- (BOOL)isInitialized;
- (void).cxx_destruct;
@end

