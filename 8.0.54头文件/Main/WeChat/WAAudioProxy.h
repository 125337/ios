@interface WAAudioProxy : NSObject <IWAAudioService>
+ (BOOL)isInnerAppAudioActive;
+ (void)showInnerAppAudioConflictAlert;
+ (BOOL)isBackgroundAudioPlayingOrWaiting;
+ (BOOL)pauseBackgroundAudio;
+ (void)resumeBackgroundAudio;
+ (BOOL)isInterrupting;
+ (BOOL)isPhoneCalling;
+ (void)resumeOtherAppPlayingIfNeeded;
+ (void)syncWebViewAudioEvent:(id)arg1;
@end

