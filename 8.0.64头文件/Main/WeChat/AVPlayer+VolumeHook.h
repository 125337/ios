@interface AVPlayer (VolumeHook)
+ (void)hookAVPlayer;
- (id)hook_init;
- (BOOL)hook_play;
- (void)hook_setVolume:(float)arg1;
@end
