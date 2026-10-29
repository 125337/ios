@interface _TtC6WeChat32WSWebViewPlugin_ExceptionHandler : WSWebViewPluginBase
{
     maxReloadTimes; // +0x8
     reloadTimes; // +0x10
     isReloading; // +0x18
     isInFault; // +0x19
     tipView; // +0x20
     curProcessFlow; // +0x28
     lastProcessFlow; // +0x29
}
- (void)showExceptionMockView;
- (void)showReloadTip;
- (void)showFailLoadAndReentryTip;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (BOOL)webviewCannotReuse;
- (void)handleTerminalError;
- (void)handleJSEvaluateErrorWithCode:(long long)arg1 message:(id)arg2;
- (void)handleFailLoadWithCode:(long long)arg1 message:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end

