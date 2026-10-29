@interface _TtC6WeChat14WALaunchParams : NSObject
{
     username; // +0x8
     appid; // +0x18
     pagePath; // +0x28
     appVersion; // +0x38
     debugMode; // +0x40
     scene; // +0x48
     sceneNote; // +0x50
     userScriptReadyCallback; // +0x60
}
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
- (id /* block */)userScriptReadyCallback;
- (void)setUserScriptReadyCallback:(id /* block */)arg1;
- (id)init;
- (void)registerUserScriptReadyCallbackWithCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

