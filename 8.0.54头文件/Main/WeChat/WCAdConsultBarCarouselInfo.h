@interface WCAdConsultBarCarouselInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    unsigned long long _firstAnimInterval; // +0x8
    NSArray * _barInfoList; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (unsigned long long)firstAnimInterval;
- (void)setFirstAnimInterval:(unsigned long long)arg1;
- (id)barInfoList;
- (void)setBarInfoList:(id)arg1;
- (void).cxx_destruct;
@end

