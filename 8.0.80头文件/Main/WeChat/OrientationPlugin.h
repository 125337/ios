@interface OrientationPlugin : NSObject <FlutterPlugin, FlutterStreamHandler>
{
    int _currentOrientation; // +0x8
    id _motionManager; // +0x10
}
+ (void)registerWithRegistrar:(id)arg1;
- (id)init;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)setSystemChromePreferredOrientations:(id)arg1;
- (void)forceOrientation:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (id)motionManager;
- (void)setMotionManager:(id)arg1;
- (int)currentOrientation;
- (void)setCurrentOrientation:(int)arg1;
- (void).cxx_destruct;
@end
