@interface CBTAsstOpenChatListPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMethodChannel * _channel; // +0x8
    id /* block */ _selectChatBlock; // +0x10
}
- (void)setSelectChatBlock:(id /* block */)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id /* block */)selectChatBlock;
- (void).cxx_destruct;
@end
