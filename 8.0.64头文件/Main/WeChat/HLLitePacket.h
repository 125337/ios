@interface HLLitePacket : NSObject
{
    BOOL _banReport; // +0x8
    BOOL _finish; // +0x9
    BOOL _inCall; // +0xa
    long long _appID; // +0x10
    unsigned long long _seq; // +0x18
    double _timeout; // +0x20
    NSObject<OS_dispatch_queue> * _callbackQueue; // +0x28
    NSString * _httpURL; // +0x30
    NSString * _httpMethod; // +0x38
    NSDictionary * _httpReqHeaders; // +0x40
    NSData * _httpBody; // +0x48
    id /* block */ _callback; // +0x50
    HLCarriorInfo * _carrior; // +0x58
    NSDate * _firstInitDate; // +0x60
    NSDate * _startDate; // +0x68
    NSError * _reportError; // +0x70
    long long _retryTimes; // +0x78
    NSString * _serverIP; // +0x80
    long long _recvlength; // +0x88
    NSURLSessionDataTask * _task; // +0x90
}
- (id)init;
- (long long)appID;
- (void)setAppID:(long long)arg1;
- (unsigned long long)seq;
- (BOOL)banReport;
- (void)setBanReport:(BOOL)arg1;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id)callbackQueue;
- (void)setCallbackQueue:(id)arg1;
- (id)httpURL;
- (void)setHttpURL:(id)arg1;
- (id)httpMethod;
- (void)setHttpMethod:(id)arg1;
- (id)httpReqHeaders;
- (void)setHttpReqHeaders:(id)arg1;
- (id)httpBody;
- (void)setHttpBody:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id)carrior;
- (void)setCarrior:(id)arg1;
- (id)firstInitDate;
- (void)setFirstInitDate:(id)arg1;
- (id)startDate;
- (void)setStartDate:(id)arg1;
- (id)reportError;
- (void)setReportError:(id)arg1;
- (BOOL)finish;
- (void)setFinish:(BOOL)arg1;
- (BOOL)inCall;
- (void)setInCall:(BOOL)arg1;
- (long long)retryTimes;
- (void)setRetryTimes:(long long)arg1;
- (id)serverIP;
- (void)setServerIP:(id)arg1;
- (long long)recvlength;
- (void)setRecvlength:(long long)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (void).cxx_destruct;
@end
