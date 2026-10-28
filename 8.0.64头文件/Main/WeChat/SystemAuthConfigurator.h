@interface SystemAuthConfigurator : NSObject
{
    SystemAuthConfig * _defaultConfig; // +0x8
    SystemAuthConfig * _updatedConfig; // +0x10
}
- (id)init;
- (void)updateResource;
- (id)updatedResourcePath;
- (id)updatedResourceFilePath;
- (id)tempResourceFilePath;
- (id)appDefaultResoucePath;
- (id)defaultConfig;
- (id)updatedConfig;
- (id)curConfig;
- (id)webSceneMap;
- (void)setDefaultConfig:(id)arg1;
- (void)setUpdatedConfig:(id)arg1;
- (void).cxx_destruct;
@end
