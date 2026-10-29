@interface MMWebPrefecherJsEngine : MMObject
{
    JSVirtualMachine * _jsVM; // +0x8
    MMPrefetcherMainJSContext * _mainContext; // +0x10
    MMWebJsBasePkgInfo * _basePkgInfo; // +0x18
    NSMutableDictionary * _dicModuleKeyJSContexts; // +0x20
    NSDictionary * _configInfo; // +0x28
    NSMutableDictionary * _dictClientJsContext; // +0x30
}
- (id)initWithBasePkgInfo:(id)arg1;
- (void)initMainContext;
- (BOOL)shouldPrefetch:(id)arg1 config:(id)arg2 extInfo:(id)arg3 bizPkgInfo:(id)arg4;
- (unsigned int)getFetchPkgType:(id)arg1 config:(id)arg2 extInfo:(id)arg3;
- (BOOL)shouldFetchContent:(id)arg1 config:(id)arg2 extInfo:(id)arg3;
- (BOOL)shouldWaitPrefetchNotify:(id)arg1 config:(id)arg2 extInfo:(id)arg3;
- (id)identiferForUrl:(id)arg1 config:(id)arg2 bizPkgInfo:(id)arg3;
- (id)prefetchResArrForUrl:(id)arg1 config:(id)arg2 bizPkgInfo:(id)arg3;
- (void)tryAddManifestClientJsClientContext:(id)arg1 bizPkgInfo:(id)arg2;
- (void)tryAddPrefetcherClientJsClientContext:(id)arg1 bizPkgInfo:(id)arg2;
- (void)setupContext:(id)arg1 metaInfo:(id)arg2 moduleName:(id)arg3 pkgInfo:(id)arg4;
- (id)getClientContextIdWithType:(id)arg1 domian:(id)arg2 path:(id)arg3 appId:(id)arg4;
- (id)invokeWithConfig:(id)arg1 contextType:(id)arg2 func:(id)arg3 params:(id)arg4;
- (void)dispatchEventToAdContext:(id)arg1 extraData:(id)arg2;
- (void)dispatchEventWithConfig:(id)arg1 contextType:(id)arg2 event:(id)arg3 extraData:(id)arg4;
- (void)tryAddClientContext:(id)arg1 config:(id)arg2 bizPkgInfo:(id)arg3;
- (void)dealloc;
- (id)jsVM;
- (void)setJsVM:(id)arg1;
- (id)mainContext;
- (void)setMainContext:(id)arg1;
- (id)basePkgInfo;
- (void)setBasePkgInfo:(id)arg1;
- (id)dicModuleKeyJSContexts;
- (void)setDicModuleKeyJSContexts:(id)arg1;
- (id)configInfo;
- (void)setConfigInfo:(id)arg1;
- (id)dictClientJsContext;
- (void)setDictClientJsContext:(id)arg1;
- (void).cxx_destruct;
@end

