@interface WCAdLiteAppInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _appId; // +0x8
    NSString * _page; // +0x10
    NSString * _query; // +0x18
    NSString * _minVersion; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)description;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (void).cxx_destruct;
@end
