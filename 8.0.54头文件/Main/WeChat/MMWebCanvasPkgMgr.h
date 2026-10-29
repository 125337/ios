@interface MMWebCanvasPkgMgr : MMUserService <WAPrefetchMgrExt, MMServiceProtocol>
{
    MemoryMappedKV * _mappedKV; // +0x8
    MMWebCanvasBasePkgInfo * _builtInBasePkgInfo; // +0x10
    MMWebCanvasBizPkgInfo * _builtInBizPkgInfo; // +0x18
}
+ (id)basePkgAppId;
+ (id)bizPkgAppId;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)prefetchBaseAndBizPkgWithScene:(unsigned long long)arg1;
- (id)getPkgInfo:(BOOL)arg1;
- (id)getBasePkgInfo;
- (unsigned long long)isBasePkgInfoUsable:(id)arg1 pGetPkgInfoIfUsable:(id *)arg2;
- (void)prefetchBasePkg;
- (id)builtInBasePkgInfo;
- (id)getBizPkgInfo;
- (unsigned long long)isBizPkgInfoUsable:(id)arg1 pGetPkgInfoIfUsable:(id *)arg2;
- (void)prefetchBizPkg;
- (id)builtInBizPkgInfo;
- (void)prefetchGetCodeCmd:(id)arg1 didFinishDownloadWithRet:(BOOL)arg2 infoData:(id)arg3 remainRetryCount:(unsigned long long)arg4;
- (void)handleNewPkgWithInfoData:(id)arg1;
- (id)__basePkgUsername;
- (id)__basePkgAppId;
- (id)__bizPkgUsername;
- (id)__bizPkgAppId;
- (void)resetMappedKv;
- (id)mappedKV;
- (void)reportMonitorIdKey:(unsigned int)arg1;
- (void).cxx_destruct;
@end

