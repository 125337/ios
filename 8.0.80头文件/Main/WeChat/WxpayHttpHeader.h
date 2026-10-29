@interface WxpayHttpHeader : NSObject <NSCopying>
{
    NSString * _name; // +0x8
    NSString * _value; // +0x10
}
+ (id)headerWithName:(id)arg1 value:(id)arg2;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)value;
- (void).cxx_destruct;
@end
