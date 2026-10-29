@interface TPRemoteSdpInfo : NSObject
{
    BOOL _success; // +0x8
    NSString * _remoteSdp; // +0x10
}
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)remoteSdp;
- (void)setRemoteSdp:(id)arg1;
- (void).cxx_destruct;
@end
