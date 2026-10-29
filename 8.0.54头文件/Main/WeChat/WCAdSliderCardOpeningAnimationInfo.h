@interface WCAdSliderCardOpeningAnimationInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    WCAdPagInfo * _animationPag; // +0x8
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)animationPag;
- (void)setAnimationPag:(id)arg1;
- (void).cxx_destruct;
@end

