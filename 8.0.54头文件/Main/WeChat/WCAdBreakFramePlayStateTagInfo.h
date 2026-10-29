@interface WCAdBreakFramePlayStateTagInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _tagIcon; // +0x8
    NSString * _tagText; // +0x10
    double _animationDuration; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)tagIcon;
- (void)setTagIcon:(id)arg1;
- (id)tagText;
- (void)setTagText:(id)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (void).cxx_destruct;
@end

