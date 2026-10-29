@interface TPDataTransportCdnUrlUpdateEventInfo : TPPlayerEventInfo
{
    NSString * _cdnIp; // +0x20
    NSString * _userIp; // +0x28
}
- (id)init;
- (id)cdnIp;
- (void)setCdnIp:(id)arg1;
- (id)userIp;
- (void)setUserIp:(id)arg1;
- (void).cxx_destruct;
@end

