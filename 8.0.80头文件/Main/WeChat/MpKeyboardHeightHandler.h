@interface MpKeyboardHeightHandler : NSObject <FlutterStreamHandler>
{
    id /* block */ _eventSink; // +0x8
    double _lastHeight; // +0x10
    MpKeyboardEventHandler * _eventHandler; // +0x18
}
- (void)startObserving;
- (void)stopObserving;
- (void)onKeyboardWillChangeFrame:(id)arg1;
- (void)onKeyboardDidChangeFrame:(id)arg1;
- (void)handleFrameChange:(id)arg1 state:(int)arg2;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (void)dealloc;
- (id /* block */)eventSink;
- (void)setEventSink:(id /* block */)arg1;
- (double)lastHeight;
- (void)setLastHeight:(double)arg1;
- (id)eventHandler;
- (void)setEventHandler:(id)arg1;
- (void).cxx_destruct;
@end
