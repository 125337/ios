@interface LiveHybridRecentWatchNativeApiFlutterPlugin : NSObject <MMFlutterPlugin, LiveHybridRecentWatchNativeApi>
{
    UIViewController * _viewController; // +0x8
}
- (void)onAttachedToViewController:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)modLivePersonalCenterRecentWatchOptionsOpType:(long long)arg1 feedIds:(id)arg2 completion:(id /* block */)arg3;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
