@interface MultiTalkMemberInfo : NSObject
{
    unsigned int _remoteWxVer; // +0x8
    NSString * _remoteSourceDevice; // +0x10
}
- (unsigned int)remoteWxVer;
- (void)setRemoteWxVer:(unsigned int)arg1;
- (id)remoteSourceDevice;
- (void)setRemoteSourceDevice:(id)arg1;
- (void).cxx_destruct;
@end
