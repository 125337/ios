@interface WAJSEventHandler_predownloadMiniProgramPackage : WAJSEventHandler_BaseEvent <WAPrefetchMgrExt>
{
    NSString * _requestKey; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)prefetchGetCodeWithResult:(unsigned long long)arg1 preDownloadRequestkey:(id)arg2;
- (void)prefetchGetCodeCmd:(id)arg1 didFinishDownloadWithRet:(BOOL)arg2 infoData:(id)arg3 remainRetryCount:(unsigned long long)arg4;
- (id)requestKey;
- (void)setRequestKey:(id)arg1;
- (void).cxx_destruct;
@end

