@interface WAJSEventHandler_operateSnapshotWebView : WAJSEventHandler_BaseEvent <WASnapshotWebViewDelegate>
{
    NSString * _html; // +0x8
    NSString * _script; // +0x10
    WAWebSnapshotParam * _snapshotParam; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)onWebViewLoadHtmlComplete:(id)arg1;
- (void)onWebViewExecScriptComplete:(id)arg1;
- (void)onWebViewSnapshotComplete:(id)arg1 size:(CGSize)arg2 error:(id)arg3;
- (id)html;
- (void)setHtml:(id)arg1;
- (id)script;
- (void)setScript:(id)arg1;
- (id)snapshotParam;
- (void)setSnapshotParam:(id)arg1;
- (void).cxx_destruct;
@end
