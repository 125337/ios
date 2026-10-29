@interface ChatbotChatPickerPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMethodChannel * _channel; // +0x8
    CBTAsstChatPickerPageSheet * _pickerSheet; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)handleChooseChat:(id)arg1 result:(id /* block */)arg2;
- (void)handleIsChooseChatEnabled:(id)arg1 result:(id /* block */)arg2;
- (void)handleOpenChatDetail:(id)arg1 result:(id /* block */)arg2;
- (void)handleQueryContacts:(id)arg1 result:(id /* block */)arg2;
- (id)_topViewController;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)pickerSheet;
- (void)setPickerSheet:(id)arg1;
- (void).cxx_destruct;
@end
