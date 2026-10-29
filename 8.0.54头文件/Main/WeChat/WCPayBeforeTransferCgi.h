@interface WCPayBeforeTransferCgi : WCPayBaseCgi
{
    NSString * _username; // +0x8
    NSString * _groupUsername; // +0x10
}
- (id)init;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)groupUsername;
- (void)setGroupUsername:(id)arg1;
- (void).cxx_destruct;
@end

