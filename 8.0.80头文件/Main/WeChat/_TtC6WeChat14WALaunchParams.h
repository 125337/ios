@interface _TtC6WeChat14WALaunchParams : NSObject
{
    void * username; // +0x8
    void * appid; // +0x18
    void * pagePath; // +0x28
    unsigned int appVersion; // +0x38
    unsigned long long debugMode; // +0x40
    unsigned long long scene; // +0x48
    void * sceneNote; // +0x50
    void * moduleNameList; // +0x60
    void * userScriptReadyCallback; // +0x68
    void * wxConfigReadyCallback; // +0x78
    void * resourcePreparationFailedCallback; // +0x88
}
- (void)registerResourcePreparationMetricsCallbackForObjC:(id /* block */)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned long long)debugMode;
- (void)setDebugMode:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)moduleNameList;
- (void)setModuleNameList:(id)arg1;
- (id /* block */)userScriptReadyCallback;
- (void)setUserScriptReadyCallback:(id /* block */)arg1;
- (id /* block */)wxConfigReadyCallback;
- (void)setWxConfigReadyCallback:(id /* block */)arg1;
- (id /* block */)resourcePreparationFailedCallback;
- (void)setResourcePreparationFailedCallback:(id /* block */)arg1;
- (id)init;
- (void)registerUserScriptReadyCallbackWithCallback:(id /* block */)arg1;
- (void)registerWxConfigReadyCallbackWithCallback:(id /* block */)arg1;
- (void)registerResourcePreparationFailedCallbackWithCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
