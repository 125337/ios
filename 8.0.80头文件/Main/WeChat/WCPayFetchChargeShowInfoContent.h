@interface WCPayFetchChargeShowInfoContent : NSObject
{
    NSString * _name; // +0x8
    NSString * _value; // +0x10
    NSString * _name_color; // +0x18
    NSString * _value_color; // +0x20
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)name_color;
- (void)setName_color:(id)arg1;
- (id)value_color;
- (void)setValue_color:(id)arg1;
- (void).cxx_destruct;
@end
