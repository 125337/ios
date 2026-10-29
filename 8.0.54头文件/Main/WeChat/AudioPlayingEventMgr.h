@interface AudioPlayingEventMgr : MMUserService <MMServiceProtocol, AudioPlayingEvent>
{
    NSMutableArray * m_AVAudioPlayers; // +0x8
    NSMutableArray * m_AVPlayers; // +0x10
    NSMutableArray * m_OpenALs; // +0x18
    NSMutableArray * m_audioUnits; // +0x20
    NSMutableArray * m_webViews; // +0x28
    BOOL _canPlaySound; // +0x30
}
+ (void)hookAudio;
- (void)onServiceInit;
- (void)setCanPlaySound:(BOOL)arg1;
- (BOOL)isWebViewPlaying;
- (void)turnAllAudioPlayerVolumeOn:(BOOL)arg1;
- (void)onEnterWebView;
- (void)onLeaveWebView;
- (void)onAVAudioPlayerInit:(id)arg1;
- (void)onAVAudioPlayerWillPlay:(id)arg1;
- (void)onAVAudioPlayer:(id)arg1 setVolume:(float)arg2 stop:(BOOL *)arg3;
- (void)onAVPlayerInit:(id)arg1;
- (void)onAVPlayerWillPlay:(id)arg1;
- (void)onAVPlayer:(id)arg1 setVolume:(float)arg2 stop:(BOOL *)arg3;
- (void)onAudioQueueNewOutput:(OpaqueAudioQueue *)arg1;
- (void)onAudioQueue:(OpaqueAudioQueue *)arg1 willEnqueueBuffer:(AudioQueueBuffer *)arg2;
- (void)onAudioUnitPlaybackEnd:(AudioBufferList *)arg1;
- (void)onSetScheduleAudioSlice:(ScheduledAudioSlice *)arg1;
- (void)onALSourcefBegin:(unsigned int)arg1 param:(int)arg2 value:(float)arg3 stop:(BOOL *)arg4;
- (void)onALSourcePlayBegin:(unsigned int)arg1;
- (void)onALGenSources:(unsigned int)arg1;
- (void)onALDeleteSources:(unsigned int)arg1;
- (void)onSystemSoundWillPlay:(unsigned int)arg1 stop:(BOOL *)arg2;
- (void)onWebViewControllerAppear:(id)arg1;
- (void)onWebViewControllerDisappear:(id)arg1;
- (BOOL)canPlaySound;
- (void).cxx_destruct;
@end

