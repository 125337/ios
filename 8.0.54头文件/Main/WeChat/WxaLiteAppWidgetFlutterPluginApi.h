@interface WxaLiteAppWidgetFlutterPluginApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)navigateBackMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePopGestureEnableMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)setForbidRightGestureEnableMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)tapEventMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)closeWindowMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end

