@interface WSWebViewPlugin_CommonReporter : WSWebViewPluginBase
{
    WSViewStayTimeReporter * _stayTimeReporter; // +0x8
    _TtC6WeChat23WSSearchProcessReporter * _processReporter; // +0x10
}
- (id)init;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)onStartLoadHtml:(id)arg1;
- (void)onDidFinishLoad;
- (id)processReporter;
- (id)stayTimeReporter;
- (void)setStayTimeReporter:(id)arg1;
- (void)setProcessReporter:(id)arg1;
- (void).cxx_destruct;
@end
