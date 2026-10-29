@interface MMLiveXPlatPollingFetchTaskRequestBuffer : NSObject <LiveURLivePollingTaskRequestBuffer>
{
    BOOL _isValid; // +0x8
    NSData * _requestBuffer; // +0x10
}
- (BOOL)valid;
- (id)buffer;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (id)requestBuffer;
- (void)setRequestBuffer:(id)arg1;
- (void).cxx_destruct;
@end
