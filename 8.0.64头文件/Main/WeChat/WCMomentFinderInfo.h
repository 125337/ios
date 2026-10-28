@interface WCMomentFinderInfo : NSObject <NSCoding, PBCoding>
{
    NSString * _sourceUrl; // +0x8
    NSMutableDictionary * _sourceUrlQuery; // +0x10
}
+ (void)PBArrayAdd_sourceUrl;
+ (void)initialize;
+ (id)fromXMLParentNode:(XmlReaderNode_t *)arg1;
+ (id)modelPropertyWhitelistForConfigTag:(id)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toXML;
- (id)sourceUrlQuery;
- (BOOL)isFinderPreviewSource;
- (id)displayPreviewButtonTitle;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (void)setSourceUrlQuery:(id)arg1;
- (void).cxx_destruct;
@end
