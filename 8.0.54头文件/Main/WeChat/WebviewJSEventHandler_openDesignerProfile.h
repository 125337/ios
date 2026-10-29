@interface WebviewJSEventHandler_openDesignerProfile : WebviewJSEventHandlerBase
{
    JSEvent * m_event; // +0x8
    NSString * m_designerId; // +0x10
    MMUIViewController * m_viewController; // +0x18
    EmoticonStoreReportInfo * m_reportInfo; // +0x20
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)handleWithParams:(id)arg1 AndViewController:(id)arg2;
- (void)endWithOk;
- (void)endWithFail;
- (void).cxx_destruct;
@end

