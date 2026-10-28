@interface MMWebOptimizationA8keyLiteTask : MMObject <PBMessageObserverDelegate>
{
    BOOL _isCancel; // +0x8
    MMWebOptimizationA8keyLiteTaskRequest * _request; // +0x10
    id /* block */ _completionHandler; // +0x18
    NSMutableSet * _setA8keyLiteRequestingUrlString; // +0x20
}
+ (unsigned int)generateSendSequence;
+ (id)netTypeString;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)start;
- (void)cancel;
- (BOOL)isInRequestingWithUrlString:(id)arg1;
- (void)mainThread_callBackFailWithResult:(id)arg1;
- (void)mainThread_callBackSuccessWithResult:(id)arg1;
- (void)processGetA8KeyLiteResponseFailWithRequestId2Params:(id)arg1;
- (void)processGetA8KeyLiteResponse:(id)arg1 requestId2Params:(id)arg2;
- (id)parseDomainControlDataFromResponse:(id)arg1;
- (id)parseUrlControlDataFromResponse:(id)arg1 requestId2Params:(id)arg2;
- (id)parsePrefetchDomainInfoFromResponse:(id)arg1 requestId2Params:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponseGetA8KeyLite:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)setA8keyLiteRequestingUrlString;
- (void)setSetA8keyLiteRequestingUrlString:(id)arg1;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg1;
- (void).cxx_destruct;
@end
