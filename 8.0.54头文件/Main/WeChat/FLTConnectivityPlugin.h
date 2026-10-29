@interface FLTConnectivityPlugin : NSObject <FlutterStreamHandler, CLLocationManagerDelegate, FlutterPlugin>
{
    id /* block */ _eventSink; // +0x8
    Reachability * _reachabilityForInternetConnection; // +0x10
}
+ (void)registerWithRegistrar:(id)arg1;
- (id)statusFromReachability:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)onReachabilityDidChange:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (void).cxx_destruct;
@end

