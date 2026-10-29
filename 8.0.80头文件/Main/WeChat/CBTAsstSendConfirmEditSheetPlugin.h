@interface CBTAsstSendConfirmEditSheetPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMethodChannel * _channel; // +0x8
    id /* block */ _resultBlock; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
