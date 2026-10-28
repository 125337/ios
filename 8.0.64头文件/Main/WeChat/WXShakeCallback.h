@interface WXShakeCallback : MMVoidCallback
{
    LiteAppDynamicModuleCallback * _jsCallback; // +0x8
}
- (void)call;
- (id)jsCallback;
- (void)setJsCallback:(id)arg1;
- (void).cxx_destruct;
@end
