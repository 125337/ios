@interface WebviewJSEventHandler_predownloadMiniProgramPackage : WebviewJSEventHandlerBase <WAPrefetchMgrExt>
{
    NSString * _requestKey; // +0x8
    JSEvent * _event; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)prefetchGetCodeWithResult:(unsigned long long)arg1 preDownloadRequestkey:(id)arg2;
- (void)prefetchGetCodeCmd:(id)arg1 didFinishDownloadWithRet:(BOOL)arg2 infoData:(id)arg3 remainRetryCount:(unsigned long long)arg4;
- (id)requestKey;
- (void)setRequestKey:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (void).cxx_destruct;
@end
