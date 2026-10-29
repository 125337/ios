@interface SPXAudioPlayer : BaseAudioPlayer
- (void)openSPXFile:(id)arg1;
- (void)setDataFormat;
- (void)prepareBuffers;
- (id)init;
- (void)dealloc;
- (BOOL)preparePlayWithFile:(id)arg1 sync:(BOOL)arg2;
- (void)playAtTime:(unsigned int)arg1;
- (void)setProgress:(unsigned int)arg1;
- (void)replay;
- (void)stop;
- (void)autostop;
@end

