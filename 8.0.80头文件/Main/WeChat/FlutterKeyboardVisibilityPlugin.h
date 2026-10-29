@interface FlutterKeyboardVisibilityPlugin : NSObject <FlutterStreamHandler, FlutterPlugin>
{
    BOOL _flutterEventListening; // +0x8
    BOOL _isVisible; // +0x9
    id /* block */ _flutterEventSink; // +0x10
}
+ (void)registerWithRegistrar:(id)arg1;
- (id)init;
- (void)didShow;
- (void)willShow;
- (void)didHide;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (id /* block */)flutterEventSink;
- (void)setFlutterEventSink:(id /* block */)arg1;
- (BOOL)flutterEventListening;
- (void)setFlutterEventListening:(BOOL)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
