@interface ILinkPusher : MMUserService <ILinkPushApiDelegate, MMServiceProtocol>
{
    NSString * _rtmpUrl; // +0x8
    int _videoFPS; // +0x10
    os_unfair_lock_s _videoPixelBufferListLock; // +0x14
    BOOL _isInRoom; // +0x18
    BOOL _enableCustomAudio; // +0x19
    NSObject<OS_dispatch_queue> * _workingQueue; // +0x20
    NSMutableArray * _videoPixelBufferList; // +0x28
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
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extArray:(id)arg2;
- (void)onReceiveSubscribeMemberChangeMsg:(int)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkNotAllowCameraLimit:(unsigned int)arg1;
- (void)onSetMultiTalkScreenSharingStatus:(int)arg1 ScreenSharingStatus:(int)arg2;
- (id)workingQueue;
- (void)setWorkingQueue:(id)arg1;
- (id)videoPixelBufferList;
- (void)setVideoPixelBufferList:(id)arg1;
- (BOOL)isInRoom;
- (void)setIsInRoom:(BOOL)arg1;
- (BOOL)enableCustomAudio;
- (void)setEnableCustomAudio:(BOOL)arg1;
- (void).cxx_destruct;
@end
