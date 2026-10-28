@interface InAppReplayKit2Pusher : NSObject <TRTCCloudDelegate>
{
    BOOL _isPushing; // +0x8
    BOOL _isStarting; // +0x9
    TRTCCloud * _trtcCloud; // +0x10
}
- (id)initWithTRTCCloud:(id)arg1;
- (void)start;
- (void)stop;
- (void)startInAppScreenCapture;
- (void)stopInAppScreenCapture;
- (void)pausePush;
- (void)resumePush;
- (void)onAppWillResignActive:(id)arg1;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)showRecodingStatus:(BOOL)arg1;
- (void)onNetStatus:(id)arg1;
- (void)onEnterRoom:(long long)arg1;
- (void)onConnectionLost;
- (void)onNetworkQuality:(id)arg1 remoteQuality:(id)arg2;
- (id)trtcCloud;
- (void)setTrtcCloud:(id)arg1;
- (BOOL)isPushing;
- (void)setIsPushing:(BOOL)arg1;
- (BOOL)isStarting;
- (void)setIsStarting:(BOOL)arg1;
- (void).cxx_destruct;
@end
