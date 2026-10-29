@interface QBSpeedItem : NSObject <NSURLConnectionDataDelegate>
{
    NSURLConnection * _connection; // +0x8
    double _startTime; // +0x10
    id /* block */ _completionBlock; // +0x18
    NSString * _hostString; // +0x20
    double _duration; // +0x28
    NSError * _errorInfo; // +0x30
}
- (id)initWithHostString:(id)arg1;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)cancel;
- (void)markFinished;
- (void)notifyFinished;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void).cxx_destruct;
- (id)hostString;
- (void)setHostString:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
@end

