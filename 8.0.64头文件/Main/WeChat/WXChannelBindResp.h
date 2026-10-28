@interface WXChannelBindResp : BaseResp
{
    NSString * _extMsg; // +0x18
    NSData * _authBuffer; // +0x20
}
- (id)extMsg;
- (void)setExtMsg:(id)arg1;
- (id)authBuffer;
- (void)setAuthBuffer:(id)arg1;
- (void).cxx_destruct;
@end
