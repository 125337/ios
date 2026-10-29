@interface MPOverMarsNetworkTask : NSObject
{
    id <WKURLSchemeTask> _schemeTask; // +0x8
    WCURLSessionTask * _sessionTask; // +0x10
    NSMutableData * _dataBuffer; // +0x18
}
- (id)initWithSchemeTask:(id)arg1 sessionTask:(id)arg2;
- (void)onReceiveResponse:(id)arg1;
- (void)onReceiveData:(id)arg1;
- (void)onFinish;
- (id)schemeTask;
- (void)setSchemeTask:(id)arg1;
- (id)sessionTask;
- (void)setSessionTask:(id)arg1;
- (id)dataBuffer;
- (void)setDataBuffer:(id)arg1;
- (void).cxx_destruct;
@end
