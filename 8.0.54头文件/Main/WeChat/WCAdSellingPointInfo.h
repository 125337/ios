@interface WCAdSellingPointInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
    NSString * _iconUrl; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (void).cxx_destruct;
@end

