@interface MMLivePollingFetchTaskExecuteModel : NSObject
{
    BOOL _force; // +0x8
    long long _cmdID; // +0x10
    id /* block */ _requestBufferFactory; // +0x18
}
- (long long)cmdID;
- (void)setCmdID:(long long)arg1;
- (BOOL)force;
- (void)setForce:(BOOL)arg1;
- (id /* block */)requestBufferFactory;
- (void)setRequestBufferFactory:(id /* block */)arg1;
- (void).cxx_destruct;
@end
