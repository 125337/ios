@interface WxaLiteAppWidgetFlutterPluginApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
}
- (id)initWithBinaryMessenger:(id)arg1;
- (void)navigateBackMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePopGestureEnableMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)setForbidRightGestureEnableMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)tapEventMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)closeWindowMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)onBodySizeChangeMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)onLocalStoreDispatchMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (void).cxx_destruct;
@end
