@interface QMCReportManager : NSObject
{
    NSString * _globalUin; // +0x8
    NSString * _globalPageFrom; // +0x10
    NSString * _globalFontSize; // +0x18
    long long _globalEnvironment; // +0x20
    NSURLSession * _session; // +0x28
    NSObject<OS_dispatch_queue> * _workQueue; // +0x30
}
+ (id)sharedInstance;
+ (void)setGlobalUin:(id)arg1 pageFrom:(id)arg2 fontSize:(id)arg3;
+ (void)setEnvironment:(long long)arg1;
- (id)initInternal;
- (void)reportEvent:(id)arg1;
- (void)reportEvent:(id)arg1 logBlock:(id /* block */)arg2;
- (void)_doReportWithEventName:(id)arg1 eventContent:(id)arg2 eventTime:(long long)arg3 overrideURL:(id)arg4 environment:(long long)arg5 logBlock:(id /* block */)arg6;
- (id)_genRequestID;
- (id)_jsonStringFromDictionary:(id)arg1;
- (id)_md5Lower:(id)arg1;
- (id)globalUin;
- (void)setGlobalUin:(id)arg1;
- (id)globalPageFrom;
- (void)setGlobalPageFrom:(id)arg1;
- (id)globalFontSize;
- (void)setGlobalFontSize:(id)arg1;
- (long long)globalEnvironment;
- (void)setGlobalEnvironment:(long long)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (void).cxx_destruct;
@end
