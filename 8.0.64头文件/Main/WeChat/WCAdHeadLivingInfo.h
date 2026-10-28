@interface WCAdHeadLivingInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    int _liveStatus; // +0x8
    NSString * _finderUsername; // +0x10
    NSString * _finderLiveId; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderLiveId;
- (void)setFinderLiveId:(id)arg1;
- (int)liveStatus;
- (void)setLiveStatus:(int)arg1;
- (void).cxx_destruct;
@end
