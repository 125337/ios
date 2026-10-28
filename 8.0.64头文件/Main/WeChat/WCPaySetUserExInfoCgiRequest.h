@interface WCPaySetUserExInfoCgiRequest : NSObject
{
    NSString * _country; // +0x8
    NSString * _province; // +0x10
    NSString * _city; // +0x18
    WCPayProfession * _profession; // +0x20
    NSString * _nationality; // +0x28
}
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)profession;
- (void)setProfession:(id)arg1;
- (id)nationality;
- (void)setNationality:(id)arg1;
- (void).cxx_destruct;
@end
