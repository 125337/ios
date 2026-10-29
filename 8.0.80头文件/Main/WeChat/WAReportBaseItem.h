@interface WAReportBaseItem : MMObject
{
    BOOL _isEntrance; // +0x8
    unsigned int _uiNetworkType; // +0xc
    unsigned int _weakNetType; // +0x10
    unsigned int _uiPublibVersion; // +0x14
    unsigned int _appType; // +0x18
    unsigned int _engineType; // +0x1c
    unsigned int _exptIOSUseByteCode; // +0x20
    unsigned long long _scene; // +0x28
    NSString * _sceneNote; // +0x30
    NSString * _sessionId; // +0x38
    NSString * _instanceId; // +0x40
    NSString * _appid; // +0x48
    NSString * _username; // +0x50
    NSString * _nickname; // +0x58
    unsigned long long _debugMode; // +0x60
    long long _appVersion; // +0x68
    unsigned long long _appstate; // +0x70
    unsigned long long _usedstate; // +0x78
    NSString * _pagePath; // +0x80
    NSString * _query; // +0x88
    NSString * _networkType; // +0x90
    NSString * _strPublibVersion; // +0x98
    unsigned long long _preScene; // +0xa0
    NSString * _preSceneNote; // +0xa8
    NSString * _referPagePath; // +0xb0
    NSMutableArray * _paramArr; // +0xb8
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void)startAppendParam;
- (void)appendString:(id)arg1;
- (void)appendUInt32:(unsigned int)arg1;
- (void)appendUInt64:(unsigned long long)arg1;
- (void)appendInt:(int)arg1;
- (void)appendUInteger:(unsigned long long)arg1;
- (id)getJoinedParamStr;
- (id)param;
- (id)safeContentString:(id)arg1;
- (void)report;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (unsigned long long)debugMode;
- (void)setDebugMode:(unsigned long long)arg1;
- (long long)appVersion;
- (void)setAppVersion:(long long)arg1;
- (unsigned long long)appstate;
- (void)setAppstate:(unsigned long long)arg1;
- (unsigned long long)usedstate;
- (void)setUsedstate:(unsigned long long)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)networkType;
- (void)setNetworkType:(id)arg1;
- (unsigned int)uiNetworkType;
- (void)setUiNetworkType:(unsigned int)arg1;
- (unsigned int)weakNetType;
- (void)setWeakNetType:(unsigned int)arg1;
- (unsigned int)uiPublibVersion;
- (void)setUiPublibVersion:(unsigned int)arg1;
- (id)strPublibVersion;
- (void)setStrPublibVersion:(id)arg1;
- (unsigned long long)preScene;
- (void)setPreScene:(unsigned long long)arg1;
- (id)preSceneNote;
- (void)setPreSceneNote:(id)arg1;
- (id)referPagePath;
- (void)setReferPagePath:(id)arg1;
- (BOOL)isEntrance;
- (void)setIsEntrance:(BOOL)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (unsigned int)engineType;
- (void)setEngineType:(unsigned int)arg1;
- (unsigned int)exptIOSUseByteCode;
- (void)setExptIOSUseByteCode:(unsigned int)arg1;
- (id)paramArr;
- (void)setParamArr:(id)arg1;
- (void).cxx_destruct;
@end
