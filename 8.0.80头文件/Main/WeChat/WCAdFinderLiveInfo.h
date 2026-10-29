@interface WCAdFinderLiveInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _finderUsername; // +0x8
    NSString * _finderLiveId; // +0x10
    NSString * _finderLiveFeedExportId; // +0x18
    NSString * _finderLiveFeedNonceId; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderLiveId;
- (void)setFinderLiveId:(id)arg1;
- (id)finderLiveFeedExportId;
- (void)setFinderLiveFeedExportId:(id)arg1;
- (id)finderLiveFeedNonceId;
- (void)setFinderLiveFeedNonceId:(id)arg1;
- (void).cxx_destruct;
@end
