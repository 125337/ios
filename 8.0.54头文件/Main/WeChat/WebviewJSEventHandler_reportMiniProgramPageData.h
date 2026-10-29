@interface WebviewJSEventHandler_reportMiniProgramPageData : WebviewJSEventHandlerBase <IReportMiniProgramDelegate>
{
    JSEvent * _event; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onReportSuccess:(long long)arg1;
- (void)onReportFail:(id)arg1;
- (void).cxx_destruct;
@end

