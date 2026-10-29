@interface WCAdClickBarInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _desc; // +0x8
    long long _animShowTime; // +0x10
    long long _animHideTime; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (long long)animShowTime;
- (void)setAnimShowTime:(long long)arg1;
- (long long)animHideTime;
- (void)setAnimHideTime:(long long)arg1;
- (void).cxx_destruct;
@end
