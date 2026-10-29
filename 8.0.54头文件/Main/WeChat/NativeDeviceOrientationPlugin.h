@interface NativeDeviceOrientationPlugin : NSObject <FlutterPlugin, FlutterStreamHandler>
{
    id _observer; // +0x8
    id /* block */ _orientationRetrieved; // +0x10
}
+ (void)registerWithRegistrar:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)pause;
- (void)resume;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (id)observer;
- (void)setObserver:(id)arg1;
- (id /* block */)orientationRetrieved;
- (void)setOrientationRetrieved:(id /* block */)arg1;
- (void).cxx_destruct;
@end

