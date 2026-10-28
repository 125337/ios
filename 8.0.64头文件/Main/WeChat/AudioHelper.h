@interface AudioHelper : NSObject
+ (BOOL)IsWeiXinSoundPlaying;
+ (BOOL)IsWeiXinSoundPaused;
+ (void)StopAudio;
+ (BOOL)IsMusicPlaying;
+ (BOOL)IsMusicIdle;
+ (BOOL)IsMusicWaiting;
+ (BOOL)IsMusicPaused;
+ (void)StopMusic;
+ (BOOL)PauseMusic;
+ (void)RestartMusic;
+ (BOOL)IsAudioTalkPlaying;
+ (BOOL)IsAudioTalkRecording;
+ (BOOL)PauseAudioTalk;
+ (void)RestartAudioTalk;
+ (void)PlaySystemSound:(id)arg1 FileType:(id)arg2 Ambient:(BOOL)arg3;
+ (void)AVPlaySystemSound:(id)arg1 FileType:(id)arg2 Ambient:(BOOL)arg3;
+ (void)playSound:(id)arg1 fileType:(id)arg2 volume:(float)arg3 ambient:(BOOL)arg4;
+ (void)playSound:(id)arg1 fileType:(id)arg2 volume:(float)arg3 ambient:(BOOL)arg4 withCompletion:(id /* block */)arg5;
+ (void)playSoundAtPath:(id)arg1 volume:(float)arg2 ambient:(BOOL)arg3;
+ (void)playSoundAtPath:(id)arg1 volume:(float)arg2 ambient:(BOOL)arg3 withCompletion:(id /* block */)arg4;
+ (void)playVibration;
+ (BOOL)playNewMsgNotify;
+ (BOOL)playNewMsgNotifyInMessageContent;
+ (void)playSendMsgNotify;
+ (void)showRecordDenied;
+ (BOOL)isSilkFile:(id)arg1;
+ (id)GetQVIVoiceAnalysis;
@end
