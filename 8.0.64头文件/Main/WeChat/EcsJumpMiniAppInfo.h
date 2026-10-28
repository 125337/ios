@interface EcsJumpMiniAppInfo : MMObject <NSCopying>
{
    unsigned int _scene; // +0x8
    unsigned int _versionType; // +0xc
    NSString * _appId; // +0x10
    NSString * _appUsername; // +0x18
    NSString * _path; // +0x20
    NSString * _sceneNote; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appUsername;
- (void)setAppUsername:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (unsigned int)versionType;
- (void)setVersionType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
