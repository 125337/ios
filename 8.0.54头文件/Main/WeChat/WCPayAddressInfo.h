@interface WCPayAddressInfo : NSObject
{
    NSString * _address_name; // +0x8
    NSString * _phone_num; // +0x10
    NSString * _address; // +0x18
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)address_name;
- (void)setAddress_name:(id)arg1;
- (id)phone_num;
- (void)setPhone_num:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (void).cxx_destruct;
@end

