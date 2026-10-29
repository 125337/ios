@interface LVNativePlugin : NSObject <MMFlutterPlugin, MegaVideoNativeApi>
{
    UIViewController * _currentViewController; // +0x8
    MegaVideoCommCallback * _commCallbackApi; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)onMegaVideoCommCallbackWithKey:(id)arg1 data:(id)arg2;
- (void)openFeedPlayerDetailCheckroomTicket:(id)arg1 openParamsBytes:(id)arg2 error:(id *)arg3;
- (void)openWatchLaterListTicket:(id)arg1 error:(id *)arg2;
- (void)openKitchenType:(long long)arg1 feed:(id)arg2 params:(id)arg3 error:(id *)arg4;
- (id)getInitMainFeedListContextWithError:(id *)arg1;
- (void)setOnceOrientationOrientation:(long long)arg1 error:(id *)arg2;
- (void)didGetGestureEventIsHandled:(BOOL)arg1 error:(id *)arg2;
- (void)minimizePlayerId:(long long)arg1 error:(id *)arg2;
- (void)updatePlaySessionIdPlaySessionId:(id)arg1 commentscene:(long long)arg2 error:(id *)arg3;
- (void)showSharePanelFeed:(id)arg1 commentscene:(long long)arg2 error:(id *)arg3;
- (void)showLastExitFeedHintFeed:(id)arg1 error:(id *)arg2;
- (id)remarkForWechatUserUsername:(id)arg1 error:(id *)arg2;
- (void)markStarFeed:(id)arg1 starContext:(id)arg2 commentscene:(long long)arg3 snapshotInfo:(id)arg4 error:(id *)arg5;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)commCallbackApi;
- (void)setCommCallbackApi:(id)arg1;
- (void).cxx_destruct;
@end

