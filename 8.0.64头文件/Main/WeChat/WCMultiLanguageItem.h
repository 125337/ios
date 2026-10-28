@interface WCMultiLanguageItem : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * zh; // +0x8
    NSString * tw; // +0x10
    NSString * en; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)currentLanguageText;
- (BOOL)isValid;
- (id)zh;
- (void)setZh:(id)arg1;
- (id)tw;
- (void)setTw:(id)arg1;
- (id)en;
- (void)setEn:(id)arg1;
- (void).cxx_destruct;
@end
