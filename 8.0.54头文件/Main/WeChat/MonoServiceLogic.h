@interface MonoServiceLogic : NSObject
+ (BOOL)isAudioMonoServiceWorkingIgnoreType:(unsigned long long)arg1 ignoreAppScene:(BOOL)arg2 inMainScene:(BOOL)arg3;
+ (BOOL)isAudioMonoServiceWorking;
+ (BOOL)isAudioMonoServiceWorkingIgnoreType:(unsigned long long)arg1;
+ (BOOL)isVideoMonoServiceWorkingIgnoreAppScene:(BOOL)arg1 inMainScene:(BOOL)arg2;
+ (BOOL)isVideoMonoServiceWorking;
+ (void)showMonoServiceWorkingConflict;
+ (id)getConflictWording;
+ (void)stopWxaVoipIfNeed;
@end

