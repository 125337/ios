@interface LiveAddressInfo : NSObject
{
    NSString * _name; // +0x8
    NSString * _phoneNumber; // +0x10
    NSString * _postCode; // +0x18
    NSString * _country; // +0x20
    NSString * _province; // +0x28
    NSString * _city; // +0x30
    NSString * _district; // +0x38
    NSString * _street; // +0x40
    NSString * _detail; // +0x48
    NSString * _addressId; // +0x50
}
+ (id)makeWithName:(id)arg1 phoneNumber:(id)arg2 postCode:(id)arg3 country:(id)arg4 province:(id)arg5 city:(id)arg6 district:(id)arg7 street:(id)arg8 detail:(id)arg9 addressId:(id)arg10;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)name;
- (void)setName:(id)arg1;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (id)postCode;
- (void)setPostCode:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)district;
- (void)setDistrict:(id)arg1;
- (id)street;
- (void)setStreet:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)addressId;
- (void)setAddressId:(id)arg1;
- (void).cxx_destruct;
@end
