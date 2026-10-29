@interface MMLiveRTMPPushAdapter : MMLivePushAdapter <TXLivePushListener>
{
    TXLivePush * _txLivePusher; // +0x8
}
- (id)createPusher;
- (void)startPush:(id)arg1;
- (void)updateAudioRecord:(BOOL)arg1;
- (void)livePuserEnableBlackStream:(BOOL)arg1;
- (void)stopPush;
- (void)startLocalAudio;
- (void)stopLocalAudio;
- (void)enterRoom;
- (void)exitRoom;
- (void)setVideoEncoderParam:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)setVideoMuted:(BOOL)arg1;
- (void)setHEVCUsing:(BOOL)arg1 forceMixing:(BOOL)arg2;
- (void)enableBlackStream:(BOOL)arg1;
- (void)doRtmpVideoQosChange;
- (void)setAudioMuted:(BOOL)arg1;
- (BOOL)sendSEIMessage:(id)arg1 repeatCount:(long long)arg2;
- (void)sendSEIMessageData:(id)arg1;
- (void)onLivePusherBGMStart:(long long)arg1;
- (void)onLivePusherBGMProgress:(long long)arg1 duration:(long long)arg2;
- (void)onLivePusherBGMComplete:(long long)arg1;
- (void)playLivePusherBgmOnMain:(id)arg1;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(BOOL)arg3;
- (void)onPushEvent:(int)arg1 withParam:(id)arg2;
- (void)onNetStatus:(id)arg1;
- (id)txLivePusher;
- (void)setTxLivePusher:(id)arg1;
- (void).cxx_destruct;
@end

