@interface WCAdBreakFramePlayStateItem : NSObject <NSCoding, WCAdParserProtocol>
{
    NSArray * _tagInfoList; // +0x8
    double _sectionBegin; // +0x10
    double _sectionEnd; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)tagInfoList;
- (void)setTagInfoList:(id)arg1;
- (double)sectionBegin;
- (void)setSectionBegin:(double)arg1;
- (double)sectionEnd;
- (void)setSectionEnd:(double)arg1;
- (void).cxx_destruct;
@end

