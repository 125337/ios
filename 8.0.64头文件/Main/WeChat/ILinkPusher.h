@interface ILinkPusher : MMUserService <ILinkPushApiDelegate, ILinkPusherAudioDataDelegate, MMServiceProtocol>
{
    NSString * _rtmpUrl; // +0x8
    int _videoFPS; // +0x10
    os_unfair_lock_s _videoPixelBufferListLock; // +0x14
    BOOL _isInRoom; // +0x18
    BOOL _enableCustomAudio; // +0x19
    id <ILinkAudioFrameDelegate> _audioFrameDelegate; // +0x20
    NSObject<OS_dispatch_queue> * _workingQueue; // +0x28
    NSMutableArray * _videoPixelBufferList; // +0x30
    shared_ptr<wxvoipsdk::ILinkPusherAudioDataCallback> _ilinkPuhserAudioDataCallback; // +0x38
}
- (id)init;
- (void)startILinkPushService;
- (void)enterRoom:(id)arg1;
- (void)exitRoom;
- (void)sendCustomAudioData:(char *)arg1 length:(unsigned int)arg2;
- (void)sendCustomVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)sendCustomMessage:(id)arg1;
- (void)sendCustomVideoEncData:(id)arg1 width:(double)arg2 height:(double)arg3 frameType:(long long)arg4;
- (void)setCustomVideoEncoderParam:(int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 fps:(int)arg4 bitrate:(int)arg5 minbitrate:(int)arg6 gop:(int)arg7;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onInviteOrAcceptTimeout:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onMemberChange:(id)arg1;
- (void)onMemberChange:(id)arg1 withNewJoinedMembers:(id)arg2;
- (void)onMultiTalkReady;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMuteStateChange:(BOOL)arg1;
- (void)OnVideoStateChange:(BOOL)arg1 VideoOn:(BOOL)arg2;
- (void)onErr:(int)arg1 groupUserName:(id)arg2;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(BOOL)arg5 screenData:(BOOL)arg6;
- (void)onSpeakerStateChange:(BOOL)arg1;
- (void)onAddMultiTalkMemberResult:(BOOL)arg1 errorType:(int)arg2 groupInfo:(id)arg3;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extArray:(id)arg2;
- (void)onReceiveSubscribeMemberChangeMsg:(int)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onMultiTalkBannerChange:(id)arg1;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkNotAllowCameraLimit:(unsigned int)arg1;
- (void)onSetMultiTalkScreenSharingStatus:(int)arg1 ScreenSharingStatus:(int)arg2;
- (void)startLocalAudio;
- (void)stopLocalAudio;
- (void)setHandsFree:(BOOL)arg1;
- (void)muteLocalAudio:(BOOL)arg1;
- (void)setAudioCaptureVolume:(long long)arg1;
- (void)restartAudioDevice:(BOOL)arg1;
- (void)sendTRTCRemoteAudioData:(char *)arg1 length:(unsigned int)arg2 channels:(unsigned int)arg3 sampleRate:(unsigned int)arg4;
- (void)OnAudioLocalProcessedData:(char *)arg1 dataLen:(int)arg2 channels:(int)arg3 sampleRate:(int)arg4;
- (void)setILinkAudioFrameDelegate:(id)arg1;
- (void)updateLiveRemoteStatus:(BOOL)arg1;
- (id)audioFrameDelegate;
- (void)setAudioFrameDelegate:(id)arg1;
- (shared_ptr<wxvoipsdk::ILinkPusherAudioDataCallback>)ilinkPuhserAudioDataCallback;
- (void)setIlinkPuhserAudioDataCallback:(shared_ptr<wxvoipsdk::ILinkPusherAudioDataCallback>)arg1;
- (id)workingQueue;
- (void)setWorkingQueue:(id)arg1;
- (id)videoPixelBufferList;
- (void)setVideoPixelBufferList:(id)arg1;
- (BOOL)isInRoom;
- (void)setIsInRoom:(BOOL)arg1;
- (BOOL)enableCustomAudio;
- (void)setEnableCustomAudio:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
