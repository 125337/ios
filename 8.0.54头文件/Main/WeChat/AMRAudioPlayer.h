@interface AMRAudioPlayer : BaseAudioPlayer
- (void)openAMRFile:(id)arg1;
- (void)setDataFormat;
- (void)prepareBuffers;
- (BOOL)preparePlayNotNotify;
- (void)clearVoiceHeadWithFile:(id)arg1;
- (BOOL)preparePlayWithFile:(id)arg1 sync:(BOOL)arg2;
- (void)play;
- (void)playAtTime:(unsigned int)arg1;
- (void)setProgress:(unsigned int)arg1;
- (void)replay;
- (void)stop;
- (void)autostop;
@end

