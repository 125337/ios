@interface FlutterHostEvent : NSObject
{
    FlutterBasicMessageChannel * _channel; // +0x8
}
- (id)initWithMessenger:(id)arg1;
- (void)onEngineExitCallback:(id /* block */)arg1;
- (void)onUpdateUIContext;
- (void)onAccountLogout;
- (void).cxx_destruct;
@end

