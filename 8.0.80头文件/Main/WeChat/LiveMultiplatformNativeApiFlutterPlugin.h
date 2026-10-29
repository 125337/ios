@interface LiveMultiplatformNativeApiFlutterPlugin : NSObject <MMFlutterPlugin, LiveMultiplatformNativeApi>
{
    LiveMultiplatformFlutterApi * _flutterApi; // +0x8
    UIViewController * _viewController; // +0x10
    NSString * _pendingReplayStreamId; // +0x18
}
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)openReplayFeedStreamStreamId:(id)arg1 request:(id)arg2 container:(id)arg3 enterFeedId:(id)arg4 hasMore:(BOOL)arg5 completion:(id /* block */)arg6;
- (void)cancelReplayFeedStreamStreamId:(id)arg1;
- (void)openNativePageParams:(id)arg1 error:(id *)arg2;
- (BOOL)tryJumpToNewLiveRoomWithJumpInfoData:(id)arg1 dataItem:(id)arg2 commentScene:(unsigned long long)arg3 index:(unsigned long long)arg4 chnlExtra:(id)arg5;
- (void)reportClickLiveCard:(id)arg1 commentScene:(unsigned long long)arg2 index:(unsigned long long)arg3 chnlExtra:(id)arg4;
- (void)openReplay:(id)arg1 commentScene:(unsigned long long)arg2;
- (void)openLiveRoom:(id)arg1 commentScene:(unsigned long long)arg2 index:(unsigned long long)arg3 chnlExtra:(id)arg4;
- (void)openFeedDetail:(id)arg1 commentScene:(unsigned long long)arg2;
- (void)openProfile:(id)arg1 dataItem:(id)arg2 commentScene:(unsigned long long)arg3;
- (void)getSelfFinderUsernameWithCompletion:(id /* block */)arg1;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)pendingReplayStreamId;
- (void)setPendingReplayStreamId:(id)arg1;
- (void).cxx_destruct;
@end
