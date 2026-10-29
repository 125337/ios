@interface WCPayPayResultShowInfoValueAttr : NSObject
{
    unsigned long long _link_type; // +0x8
    NSString * _link_weapp; // +0x10
    NSString * _link_addr; // +0x18
    NSString * _link_url; // +0x20
    unsigned long long _text_attr; // +0x28
}
+ (id)GenFromDictionary:(id)arg1;
+ (id)genFromXml:(XmlReaderNode_t *)arg1;
- (id)initWithDic:(id)arg1;
- (id)readChildText:(const char *)arg1 inNode:(XmlReaderNode_t *)arg2;
- (unsigned long long)link_type;
- (void)setLink_type:(unsigned long long)arg1;
- (id)link_weapp;
- (void)setLink_weapp:(id)arg1;
- (id)link_addr;
- (void)setLink_addr:(id)arg1;
- (id)link_url;
- (void)setLink_url:(id)arg1;
- (unsigned long long)text_attr;
- (void)setText_attr:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

