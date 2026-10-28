@interface EcsAddressStruct : NSObject
{
    NSString * _userName; // +0x8
    NSString * _postalCode; // +0x10
    NSString * _nationalCode; // +0x18
    NSString * _telNumber; // +0x20
    NSString * _province; // +0x28
    NSString * _city; // +0x30
    NSString * _county; // +0x38
    NSString * _street; // +0x40
    NSString * _detail; // +0x48
    NSString * _houseNum; // +0x50
    NSNumber * _addressId; // +0x58
}
+ (id)makeWithUserName:(id)arg1 postalCode:(id)arg2 nationalCode:(id)arg3 telNumber:(id)arg4 province:(id)arg5 city:(id)arg6 county:(id)arg7 street:(id)arg8 detail:(id)arg9 houseNum:(id)arg10 addressId:(id)arg11;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)postalCode;
- (void)setPostalCode:(id)arg1;
- (id)nationalCode;
- (void)setNationalCode:(id)arg1;
- (id)telNumber;
- (void)setTelNumber:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)county;
- (void)setCounty:(id)arg1;
- (id)street;
- (void)setStreet:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)houseNum;
- (void)setHouseNum:(id)arg1;
- (id)addressId;
- (void)setAddressId:(id)arg1;
- (void).cxx_destruct;
@end
