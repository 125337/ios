@interface AVAudioPlayer (VolumeHook)
+ (void)hookAVAudioPlayer;
- (void)mmAudioHook_setDelegate:(id)arg1;
- (BOOL)mmAudioHook_play;
- (BOOL)mmAudioHook_playAtTime:(double)arg1;
- (void)mmAudioHook_pause;
- (void)mmAudioHook_stop;
- (id)hook_init;
- (id)hook_initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)hook_initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id *)arg3;
- (id)hook_initWithData:(id)arg1 error:(id *)arg2;
- (id)hook_initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id *)arg3;
- (BOOL)hook_play;
- (void)hook_setVolume:(float)arg1;
@end
