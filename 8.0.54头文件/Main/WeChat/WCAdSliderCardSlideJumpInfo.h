@interface WCAdSliderCardSlideJumpInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _title; // +0x8
    NSString * _jumpTitle; // +0x10
    WCAdCardBtnInfo * _jumpActionInfo; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)jumpTitle;
- (void)setJumpTitle:(id)arg1;
- (id)jumpActionInfo;
- (void)setJumpActionInfo:(id)arg1;
- (void).cxx_destruct;
@end

