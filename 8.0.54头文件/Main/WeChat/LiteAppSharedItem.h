@interface LiteAppSharedItem : MMObject <NSCopying>
{
    unsigned int _sourceType; // +0x8
    NSString * _appId; // +0x10
    NSString * _path; // +0x18
    NSString * _query; // +0x20
    NSString * _minVersion; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (BOOL)isAsk;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (void).cxx_destruct;
@end

