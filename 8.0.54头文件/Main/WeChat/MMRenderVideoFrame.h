@interface MMRenderVideoFrame : NSObject <TRTCVideoRenderDelegate>
{
    UIImageView * _localVideoView1; // +0x8
    NSMutableDictionary * _userVideoViews1; // +0x10
    NSMutableArray * _remoteVideoQueue; // +0x18
}
- (id)init;
- (void)addUser:(id)arg1 videoView:(id)arg2;
- (void)onRenderVideoFrame:(id)arg1 userId:(id)arg2 streamType:(long long)arg3;
- (id)getRemoteVideo:(id)arg1;
- (id)localVideoView1;
- (void)setLocalVideoView1:(id)arg1;
- (id)userVideoViews1;
- (void)setUserVideoViews1:(id)arg1;
- (id)remoteVideoQueue;
- (void)setRemoteVideoQueue:(id)arg1;
- (void).cxx_destruct;
@end

