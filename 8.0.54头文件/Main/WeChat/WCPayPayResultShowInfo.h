@interface WCPayPayResultShowInfo : NSObject
{
    NSString * _name; // +0x8
    NSString * _value; // +0x10
    WCPayPayResultShowInfoValueAttr * _value_attr; // +0x18
    NSString * _name_color; // +0x20
    NSString * _value_color; // +0x28
}
+ (id)GenFromDictionary:(id)arg1;
+ (id)genFromXml:(XmlReaderNode_t *)arg1;
+ (id)genFromProto:(id)arg1;
- (id)initWithDic:(id)arg1;
- (id)readChildText:(const char *)arg1 inNode:(XmlReaderNode_t *)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)value_attr;
- (void)setValue_attr:(id)arg1;
- (id)name_color;
- (void)setName_color:(id)arg1;
- (id)value_color;
- (void)setValue_color:(id)arg1;
- (void).cxx_destruct;
@end

