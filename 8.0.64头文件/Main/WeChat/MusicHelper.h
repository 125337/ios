@interface MusicHelper : NSObject
+ (BOOL)isPlaying;
+ (BOOL)isPaused;
+ (BOOL)pauseWithManually:(BOOL)arg1 reportScene:(unsigned int)arg2;
+ (BOOL)pause;
+ (void)resume;
+ (void)resumeByWechatBiz;
+ (void)resumeOnlyFromManualPause:(BOOL)arg1;
+ (void)stop;
+ (BOOL)isIdle;
+ (BOOL)isWaiting;
@end
