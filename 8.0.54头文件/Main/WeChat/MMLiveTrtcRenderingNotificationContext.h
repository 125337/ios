@interface MMLiveTrtcRenderingNotificationContext : NSObject
{
    id <MMLiveTrtcRenderingNotificationDelegate> _micFocusPreviewDelegate; // +0x8
    id <MMLiveTrtcRenderingNotificationDelegate> _micAudiencePreviewDelegate; // +0x10
    id <MMLiveTrtcRenderingNotificationDelegate> _ktvSingerPreviewDelegate; // +0x18
}
- (void)notifyRenderVideoFrame:(id)arg1 userId:(id)arg2 streamType:(long long)arg3 byLiveTask:(id)arg4;
- (void)notifyLiveCaptureDidOutputSampleBuffer:(opaqueCMSampleBuffer *)arg1 localRenderFlipX:(BOOL)arg2 byLiveTask:(id)arg3;
- (void)notifyRenderImageBuffer:(__CVBuffer *)arg1 forUserId:(id)arg2 byLiveTask:(id)arg3;
- (BOOL)shouldSendRawNotification;
- (BOOL)shouldSendAggregatedNotification;
- (id)micFocusPreviewDelegate;
- (void)setMicFocusPreviewDelegate:(id)arg1;
- (id)micAudiencePreviewDelegate;
- (void)setMicAudiencePreviewDelegate:(id)arg1;
- (id)ktvSingerPreviewDelegate;
- (void)setKtvSingerPreviewDelegate:(id)arg1;
- (void).cxx_destruct;
@end

