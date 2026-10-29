@interface WCURLSessionTask : NSObject
{
    unsigned long long _taskIdentifier; // +0x8
    NSURLRequest * _originalRequest; // +0x10
    NSURLRequest * _currentRequest; // +0x18
    NSHTTPURLResponse * _response; // +0x20
    id <WCURLSessionTaskInternalDelegate> _taskDelegate; // +0x28
    NSString * _cronetRequestId; // +0x30
    shared_ptr<WCURLSessionTaskCallBack> _cronetRequestCallBack; // +0x38
}
+ (id)new;
- (CronetTaskParams)buildRequestParamters;
- (void)appendHeaderForRequest:(id)arg1 value:(id)arg2 headers:(void *)arg3;
- (void)_onCornetTaskCompleteWithError:(id)arg1;
- (void)onCornetTaskComplete:(const void *)arg1;
- (void)onCornetTaskProgressUpdate:(long long)arg1 currentBytes:(unsigned long long)arg2 taskId:(id)arg3;
- (int)onCornetTaskReceiveHeader:(id)arg1 statusCode:(int)arg2 taskId:(id)arg3 taskProtocol:(id)arg4;
- (BOOL)onCornetTaskReceiveData:(id)arg1;
- (id)init;
- (id)initWithTaskIdentifier:(unsigned long long)arg1 request:(id)arg2 delegate:(id)arg3;
- (BOOL)resume;
- (void)cancel;
- (void)dealloc;
- (unsigned long long)taskIdentifier;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (id)originalRequest;
- (void)setOriginalRequest:(id)arg1;
- (id)currentRequest;
- (void)setCurrentRequest:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)taskDelegate;
- (void)setTaskDelegate:(id)arg1;
- (id)cronetRequestId;
- (void)setCronetRequestId:(id)arg1;
- (shared_ptr<WCURLSessionTaskCallBack>)cronetRequestCallBack;
- (void)setCronetRequestCallBack:(shared_ptr<WCURLSessionTaskCallBack>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
