@interface LiteAppSharedItem : MMObject <NSCopying>
{
    BOOL _isTransparent; // +0x8
    BOOL _hideIcon; // +0x9
    BOOL _forbidForward; // +0xa
    unsigned int _sourceType; // +0xc
    NSString * _appId; // +0x10
    NSString * _path; // +0x18
    NSString * _query; // +0x20
    NSString * _minVersion; // +0x28
    ImageConf * _imageConf; // +0x30
    OldImageCDNInfo * _oldImageCDNInfo; // +0x38
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (void)initAndOverrideCDNInfo:(id)arg1 node:(XmlReaderNode_t *)arg2;
- (BOOL)isAsk;
- (BOOL)isAISearch;
- (BOOL)enableNewImageCard;
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
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (BOOL)hideIcon;
- (void)setHideIcon:(BOOL)arg1;
- (BOOL)forbidForward;
- (void)setForbidForward:(BOOL)arg1;
- (id)imageConf;
- (void)setImageConf:(id)arg1;
- (id)oldImageCDNInfo;
- (void)setOldImageCDNInfo:(id)arg1;
- (void).cxx_destruct;
@end
