@interface WCProductSellerInfo : NSObject
{
    unsigned int flag; // +0x8
    NSString * appID; // +0x10
    NSString * usrName; // +0x18
    NSString * name; // +0x20
    WCProductLocationInfo * locationInfo; // +0x28
    NSString * contactWay; // +0x30
    NSString * logoImg; // +0x38
}
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)usrName;
- (void)setUsrName:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)contactWay;
- (void)setContactWay:(id)arg1;
- (id)logoImg;
- (void)setLogoImg:(id)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

