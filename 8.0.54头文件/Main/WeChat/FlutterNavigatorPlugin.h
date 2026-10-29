@interface FlutterNavigatorPlugin : NSObject <FlutterNavigatorHost, MMFlutterPlugin>
{
    NSObject<FlutterNavigatorDelegate> * _delegate; // +0x8
    MMFlutterViewController * _viewController; // +0x10
    FlutterNavigatorCallback * _callback; // +0x18
    MMFlutterEngineGroup * _engineGroup; // +0x20
    NSMutableArray * _enginePlugins; // +0x28
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)setAttachedEngineGroup:(id)arg1;
- (void)setAttachedFlutterPlugins:(id)arg1;
- (void)pushPlugin:(id)arg1 route:(id)arg2 arguments:(id)arg3 completion:(id /* block */)arg4;
- (void)popPlugin:(id)arg1 route:(id)arg2 error:(id *)arg3;
- (void)enableSwipeBackWithError:(id *)arg1;
- (void)disableSwipeBackWithError:(id *)arg1;
- (void)onNewRouteRoute:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)engineGroup;
- (void)setEngineGroup:(id)arg1;
- (id)enginePlugins;
- (void)setEnginePlugins:(id)arg1;
- (void).cxx_destruct;
@end

