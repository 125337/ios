@interface WAGameLiveProxy : NSObject <IWAGameLiveService>
+ (void)setDelegate:(id)arg1;
+ (void)menuClickStartGameLive:(id)arg1 versionType:(unsigned long long)arg2 callback:(id /* block */)arg3 nav:(id)arg4 dic:(id)arg5;
+ (void)notifyAppRebootWithNav:(id)arg1;
+ (void)sendGameLiveMenuClickEvent:(id)arg1 versionType:(unsigned long long)arg2;
+ (void)notifyGameLiveWillStart;
+ (BOOL)isGameLiving:(id)arg1 versionType:(unsigned long long)arg2;
+ (BOOL)isLiving;
+ (BOOL)minimize;
+ (BOOL)isDisableMicMusicCapture;
+ (void)notifyGameViewVisible:(BOOL)arg1;
+ (void)updateCoverImage:(id)arg1;
+ (void)enableLocalVideo:(BOOL)arg1;
+ (void)enableLocalAudio:(BOOL)arg1;
+ (BOOL)enableCustomVideoCapture:(BOOL)arg1;
+ (BOOL)sendCustomVideoData:(__CVBuffer *)arg1 pixelFormat:(int)arg2 timestampMs:(unsigned long long)arg3 rotation:(int)arg4;
+ (BOOL)sendCustomVideoData:(void *)arg1 size:(int)arg2 pixelFormat:(int)arg3 timestampMs:(unsigned long long)arg4 width:(double)arg5 height:(double)arg6 rotation:(int)arg7;
+ (BOOL)sendCustomVideoData:(id)arg1 pixelFormat:(int)arg2 timestampMs:(unsigned long long)arg3 width:(double)arg4 height:(double)arg5 rotation:(int)arg6;
+ (BOOL)enableCustomAudioCapture:(BOOL)arg1;
+ (BOOL)sendCustomAudioData:(void *)arg1 size:(int)arg2 sampleRate:(int)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
+ (BOOL)sendCustomAudioData:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
+ (BOOL)enableMixExternalAudio:(BOOL)arg1 playout:(BOOL)arg2;
+ (BOOL)mixExternalAudioData:(void *)arg1 size:(int)arg2 sampleRate:(int)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
+ (BOOL)mixExternalAudioData:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
+ (void)setExperimentConfig:(id)arg1 withParams:(id)arg2;
+ (void)setEncoderParamWithVideoSize:(double)arg1 height:(double)arg2;
+ (void)stopGameLive:(unsigned long long)arg1 complete:(id /* block */)arg2 nav:(id)arg3;
+ (void)joinTeam:(id)arg1 complete:(id /* block */)arg2;
+ (void)reportMenuLiveButtonExpose;
@end

