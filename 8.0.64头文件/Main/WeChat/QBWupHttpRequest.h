@interface QBWupHttpRequest : NSObject
{
    NSMutableURLRequest * _request; // +0x8
    NSMutableData * _data; // +0x10
    long long _retryTimes; // +0x18
    NSHTTPURLResponse * _rsp; // +0x20
    NSData * _rspData; // +0x28
    id /* block */ _CompletionBlock; // +0x30
    id /* block */ _FailedBlock; // +0x38
}
- (id)initWithURL:(id)arg1;
- (void)startAsynchronous;
- (id)responseData;
- (id)responseHeaders;
- (long long)responseStatusCode;
- (void)setRequestMethod:(id)arg1;
- (void)addRequestHeader:(id)arg1 value:(id)arg2;
- (void)appendPostData:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)requestFinished;
- (void).cxx_destruct;
- (id /* block */)CompletionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)FailedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
@end
