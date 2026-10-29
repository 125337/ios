@interface EcsGiftAddress : MMObject <NSCopying>
{
    NSString * _userName; // +0x8
    NSString * _postalCode; // +0x10
    NSString * _provinceName; // +0x18
    NSString * _cityName; // +0x20
    NSString * _countyName; // +0x28
    NSString * _detailInfo; // +0x30
    NSString * _nationalCode; // +0x38
    NSString * _telNumber; // +0x40
    NSString * _houseNumber; // +0x48
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)postalCode;
- (void)setPostalCode:(id)arg1;
- (id)provinceName;
- (void)setProvinceName:(id)arg1;
- (id)cityName;
- (void)setCityName:(id)arg1;
- (id)countyName;
- (void)setCountyName:(id)arg1;
- (id)detailInfo;
- (void)setDetailInfo:(id)arg1;
- (id)nationalCode;
- (void)setNationalCode:(id)arg1;
- (id)telNumber;
- (void)setTelNumber:(id)arg1;
- (id)houseNumber;
- (void)setHouseNumber:(id)arg1;
- (void).cxx_destruct;
@end
