@interface _TtC6WeChat29WCPayJSAPIRealnameVerifyLogic : WCPayControlLogic
{
     tinyAppEvent; // +0x8
     params; // +0x10
}
- (id)initWithTinyAppEvent:(id)arg1 params:(id)arg2;
- (void)dealloc;
- (void)startLogic;
- (void)stopLogic;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)onRealnameVerifyCancel;
- (void)OnRealnameVerifySuccessWithNotification:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
