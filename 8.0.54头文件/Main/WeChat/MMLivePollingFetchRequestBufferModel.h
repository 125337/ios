@interface MMLivePollingFetchRequestBufferModel : NSObject
{
    long long _cmdId; // +0x8
    id _reqBuffer; // +0x10
}
- (id)initWithCmdId:(long long)arg1;
- (long long)cmdId;
- (void)setCmdId:(long long)arg1;
- (id)reqBuffer;
- (void)setReqBuffer:(id)arg1;
- (void).cxx_destruct;
@end

