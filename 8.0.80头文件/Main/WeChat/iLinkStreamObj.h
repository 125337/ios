@interface iLinkStreamObj : NSObject <iLinkStreamChannelObserver>
{
    int _instanceId; // +0x8
    unsigned int _seq; // +0xc
    int _businessType; // +0x10
    unsigned int _businessScene; // +0x14
    NSString * _streamId; // +0x18
    NSData * _pollingData; // +0x20
    NSString * _streamTicket; // +0x28
    iLinkStreamChannelObj * _channel; // +0x30
    id /* block */ _errorBlock; // +0x38
    id /* block */ _resultBlock; // +0x40
    id /* block */ _completeBlock; // +0x48
}
- (id)initWithBizType:(int)arg1 businessScene:(unsigned int)arg2 pollingData:(id)arg3 streamTicket:(id)arg4;
- (void)dealloc;
- (void)createStream;
- (void)createDownStream;
- (void)releaseResource;
- (void)onStreamStateChanged:(int)arg1 data:(id)arg2;
- (void)receiveDownStreamFragment:(id)arg1;
- (int)instanceId;
- (void)setInstanceId:(int)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (int)businessType;
- (void)setBusinessType:(int)arg1;
- (unsigned int)businessScene;
- (void)setBusinessScene:(unsigned int)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)pollingData;
- (void)setPollingData:(id)arg1;
- (id)streamTicket;
- (void)setStreamTicket:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id /* block */)errorBlock;
- (void)setErrorBlock:(id /* block */)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
