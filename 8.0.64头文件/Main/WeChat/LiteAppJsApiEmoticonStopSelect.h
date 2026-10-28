@interface LiteAppJsApiEmoticonStopSelect : LiteAppJsApi
{
    LiteAppJsApiCallback * _callBack; // +0x20
    UIViewController * _controller; // +0x28
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (id)getEmoticonPanel;
- (void)removeEmoticonPanel;
- (void).cxx_destruct;
@end
