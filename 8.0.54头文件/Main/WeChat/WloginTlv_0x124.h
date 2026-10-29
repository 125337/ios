@interface WloginTlv_0x124 : WloginTlv
{
    NSString * sOs; // +0x10
    NSString * sOsVer; // +0x18
    unsigned short wNetInfo; // +0x20
    NSString * sNetDetail; // +0x28
    NSString * sAddr; // +0x30
}
- (int)encode:(id)arg1;
- (void)dealloc;
- (id)sOs;
- (void)setSOs:(id)arg1;
- (id)sOsVer;
- (void)setSOsVer:(id)arg1;
- (unsigned short)wNetInfo;
- (void)setWNetInfo:(unsigned short)arg1;
- (id)sNetDetail;
- (void)setSNetDetail:(id)arg1;
- (id)sAddr;
- (void)setSAddr:(id)arg1;
@end

