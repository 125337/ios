@interface _TtC6WeChat24MagicBrushVConsoleHelper : NSObject <IMBVConsoleDelegate, YYWebViewDelegate>
{
     webview; // +0x8
     button; // +0x10
     visible; // +0x18
     finishLoad; // +0x19
     pendingLogs; // +0x20
     enable; // +0x28
    void * containerView; // +0x30
}
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)init:(id)arg1;
- (void)vConsoleLog:(id)arg1;
- (void)switchVConsole:(BOOL)arg1;
- (void)reset;
- (void)dealloc;
- (void)layout;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end
