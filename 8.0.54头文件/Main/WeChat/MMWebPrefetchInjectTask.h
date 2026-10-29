@interface MMWebPrefetchInjectTask : MMObject
{
    BOOL _isCancel; // +0x8
    MMWebPrefetchInjectTaskRequest * _request; // +0x10
    id /* block */ _completion; // +0x18
    unsigned long long _startTime; // +0x20
    NSObject<OS_dispatch_queue> * _workerThread; // +0x28
}
- (id)initWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)start;
- (void)cancel;
- (id)genResNameMapDict:(id)arg1;
- (id)getMapedResNameWithFullSrc:(id)arg1 resNameMapDict:(id)arg2;
- (BOOL)injectPrefetchPkg:(id *)arg1;
- (id)generateValidPkgResInfoWithTagInfo:(id)arg1 basePkgInfo:(id)arg2 mapedResName:(id)arg3;
- (BOOL)injectPrefetchResToHTML:(id *)arg1;
- (id)extractAllExternalScriptTagFromHtmlString:(id)arg1;
- (id)arrAttrForScriptTag:(id)arg1;
- (BOOL)shouldIgnoreScriptWithAttrArr:(id)arg1;
- (BOOL)checkScriptTagContainDefer:(id)arg1;
- (id)extractAllExternalLinkTagFromHtmlString:(id)arg1;
- (id)replaceJsExternalTag:(id)arg1 withNewTagResUrl:(id)arg2 withHtmlString:(id)arg3 success:(BOOL *)arg4;
- (id)replaceJsExternalTag:(id)arg1 withJsContent:(id)arg2 withHtmlString:(id)arg3 withAttrArr:(id)arg4 success:(BOOL *)arg5;
- (id)replaceCssExternalTag:(id)arg1 withNewTagResUrl:(id)arg2 withHtmlString:(id)arg3 success:(BOOL *)arg4;
- (id)replaceCssExternalTag:(id)arg1 withContent:(id)arg2 withHtmlString:(id)arg3 success:(BOOL *)arg4;
- (void)updateHeaderFieldWithDomain:(id)arg1 identifier:(id)arg2 prefetchOption:(unsigned int)arg3 updateDateTime:(unsigned int)arg4;
- (id)completeRelativeUrlIfNeed:(id)arg1 withBaseUrl:(id)arg2;
- (id)fileContentWithUrl:(id)arg1;
- (id)valueForAttribute:(id)arg1 withHtmlTag:(id)arg2;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (id)request;
- (void)setRequest:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (id)workerThread;
- (void)setWorkerThread:(id)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (void).cxx_destruct;
@end

