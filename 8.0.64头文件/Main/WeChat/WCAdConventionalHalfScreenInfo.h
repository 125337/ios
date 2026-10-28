@interface WCAdConventionalHalfScreenInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    long long _jumpStyle; // +0x8
    double _minHeightPercent; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (double)fetchMinHeightPercent;
- (long long)jumpStyle;
- (void)setJumpStyle:(long long)arg1;
- (double)minHeightPercent;
- (void)setMinHeightPercent:(double)arg1;
@end
