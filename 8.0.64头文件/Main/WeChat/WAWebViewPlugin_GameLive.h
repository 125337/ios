@interface WAWebViewPlugin_GameLive : WAWebViewPlugin_embedView <WAOpenGlCaptureDelegate, WAAudioPlayBackDelegate, WCActionSheetDelegate, WAGameLiveServiceExt, MMGameAudioMixDelegate>
{
    BOOL started; // +0x8
    BOOL capture; // +0x9
    BOOL disappear; // +0xa
    BOOL disableMicMusicCapture; // +0xb
    BOOL _bForceUpdateAudioPlayBack; // +0xc
    unsigned int mark_id; // +0x10
    unsigned int video_width; // +0x14
    unsigned int video_height; // +0x18
    unsigned int video_cap_frame_cnt; // +0x1c
    unsigned int video_snd_frame_cnt; // +0x20
    unsigned int audio_cap_frame_cnt; // +0x24
    unsigned int audio_mix_frame_cnt; // +0x28
    unsigned int audio_snd_frame_cnt; // +0x2c
    unsigned long long last_stats_stamp; // +0x30
    unsigned long long _stopScene; // +0x38
    id /* block */ _closeBlock; // +0x40
    MMGameAudioMixWrapper * _mixWrapper; // +0x48
    MMGameOffTexture * _offTexture; // +0x50
}
- (id)init;
- (void)dealloc;
- (void)onGameViewWillAppear:(BOOL)arg1;
- (void)onGameViewWillDisappear:(BOOL)arg1;
- (void)startLive:(id)arg1;
- (void)startPush;
- (void)stopPush;
- (void)joinTeam:(id)arg1 complete:(id /* block */)arg2;
- (void)stopLive:(unsigned long long)arg1 complete:(id /* block */)arg2;
- (void)doStopLive;
- (void)checkAudioPlayBack;
- (BOOL)captureDisabled;
- (void)enableDelegate:(BOOL)arg1;
- (BOOL)isCurrGameLiving;
- (BOOL)isLiving;
- (void)updateSnapshotImg;
- (id)getSnapshotFromPixelBuffer:(__CVBuffer *)arg1;
- (id)getImageFromView:(id)arg1;
- (void)updateResolutionRatio:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)updateEncodeParmas;
- (void)checkStats;
- (void)onScreenCapture:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelBuffer:(__CVBuffer *)arg4;
- (void)onScreenCapture:(unsigned int)arg1 data:(void *)arg2 size:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bytesPerRow:(unsigned long long)arg7 format:(int)arg8;
- (void)onAudioPlayBack:(id)arg1 when:(id)arg2;
- (void)onWxAudioPlayBackWithSessionId:(int)arg1 data:(char *)arg2 size:(unsigned int)arg3 channels:(unsigned int)arg4 samplerate:(unsigned int)arg5 fmt:(unsigned long long)arg6;
- (void)showLiveScreenToast:(BOOL)arg1 msg:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)onMMLiveVerifyFinishedWithLiveTask:(id)arg1 verifySuccess:(BOOL)arg2;
- (void)onMMLiveWillStart;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startSuccess:(BOOL)arg2;
- (void)onMMLiveCancel;
- (void)onExitLiveSuccessWithLiveTask;
- (void)onMixData:(id)arg1 format:(long long)arg2 samplerate:(int)arg3 channel:(int)arg4;
- (void)wkRequest:(id)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id)mixWrapper;
- (void)setMixWrapper:(id)arg1;
- (id)offTexture;
- (void)setOffTexture:(id)arg1;
- (void).cxx_destruct;
@end
