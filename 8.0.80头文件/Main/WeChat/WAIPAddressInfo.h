@interface WAIPAddressInfo : NSObject
{
    NSString * _ipv4; // +0x8
    NSString * _ipv6; // +0x10
    NSString * _netmaskV4; // +0x18
    NSString * _netmaskV6; // +0x20
}
- (id)init;
- (id)ipv4;
- (void)setIpv4:(id)arg1;
- (id)ipv6;
- (void)setIpv6:(id)arg1;
- (id)netmaskV4;
- (void)setNetmaskV4:(id)arg1;
- (id)netmaskV6;
- (void)setNetmaskV6:(id)arg1;
- (void).cxx_destruct;
@end
