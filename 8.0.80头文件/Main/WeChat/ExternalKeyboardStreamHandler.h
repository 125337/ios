@interface ExternalKeyboardStreamHandler : NSObject <FlutterStreamHandler>
{
    BOOL _hasLastValue; // +0x8
    BOOL _lastValue; // +0x9
    id /* block */ _sink; // +0x10
}
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (void)onExternalKeyboardChanged:(id)arg1;
- (void)emitCurrentState;
- (void)dealloc;
- (id /* block */)sink;
- (void)setSink:(id /* block */)arg1;
- (BOOL)hasLastValue;
- (void)setHasLastValue:(BOOL)arg1;
- (BOOL)lastValue;
- (void)setLastValue:(BOOL)arg1;
- (void).cxx_destruct;
@end
