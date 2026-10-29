@interface MJCdnDownloadTask : NSObject
{
    NSString * _taskKey; // +0x8
    MJCdnDownloadRequest * _request; // +0x10
    long long _state; // +0x18
    MJCdnDownloadResult * _result; // +0x20
    NSError * _error; // +0x28
    id /* block */ _completionHandler; // +0x30
}
- (id)init;
- (id)initWithRequest:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)cancel;
- (C2CDownloadRequest)createCdnReqeust;
- (void)didCompleteWithTaskInfo:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)callCompletionHandler;
- (id)taskKey;
- (id)request;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
