@interface EcsJumpLiteAppInfo : MMObject <NSCopying>
{
    NSString * _appId; // +0x8
    NSString * _path; // +0x10
    NSString * _query; // +0x18
    NSString * _defaultUrl; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)defaultUrl;
- (void)setDefaultUrl:(id)arg1;
- (void).cxx_destruct;
@end

