@interface MMFinderLivedConnectMicAudiencePreviewCameraView : UIView <MMLiveTrtcRenderingNotificationDelegate>
{
    BOOL _activeMode; // +0x8
    UIView * _activeRenderTargetView; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    UIImageView * _passivePreviewView; // +0x20
    CGRect _clearArea; // +0x28
}
- (id)initWithTaskId:(id)arg1 activeMode:(BOOL)arg2;
- (void)setActiveMode:(BOOL)arg1;
- (void)setClearArea:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onLiveTask:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 localRenderFlipX:(BOOL)arg3;
- (void)initializeComponents;
- (id)liveTask;
- (id)activeRenderTargetView;
- (void)setActiveRenderTargetView:(id)arg1;
- (BOOL)activeMode;
- (CGRect)clearArea;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)passivePreviewView;
- (void)setPassivePreviewView:(id)arg1;
- (void).cxx_destruct;
@end

