@interface WANativeAppMsgInfo : MMObject
{
    unsigned int _type; // +0x8
    NSString * _appNameMultiLanguageKey; // +0x10
    NSString * _sourceName; // +0x18
    NSString * _sourceIconUrl; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isNearbyNativeAppMsg;
- (BOOL)isValid;
- (id)appDisplayName;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)appNameMultiLanguageKey;
- (void)setAppNameMultiLanguageKey:(id)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)sourceIconUrl;
- (void)setSourceIconUrl:(id)arg1;
- (void).cxx_destruct;
@end

