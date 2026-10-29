@interface Kv31766Reporter : NSObject
{
    unsigned int _AppVersion; // +0x8
    unsigned int _AppState; // +0xc
    unsigned int _SSID; // +0x10
    NSString * _AppId; // +0x18
    unsigned long long _ClassID; // +0x20
    unsigned long long _SceneID; // +0x28
    unsigned long long _UIArea; // +0x30
    unsigned long long _PositionID; // +0x38
    unsigned long long _ActionID; // +0x40
    unsigned long long _FuncType; // +0x48
    NSString * _FuncID; // +0x50
    NSDictionary * _ExternInfo; // +0x58
}
+ (void)reportForGameReview:(id)arg1 appVersion:(unsigned int)arg2 appState:(unsigned int)arg3 positionID:(unsigned long long)arg4 actionID:(unsigned long long)arg5 reportData:(id)arg6;
- (void)report;
- (id)AppId;
- (void)setAppId:(id)arg1;
- (unsigned int)AppVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned int)AppState;
- (void)setAppState:(unsigned int)arg1;
- (unsigned long long)ClassID;
- (void)setClassID:(unsigned long long)arg1;
- (unsigned long long)SceneID;
- (void)setSceneID:(unsigned long long)arg1;
- (unsigned long long)UIArea;
- (void)setUIArea:(unsigned long long)arg1;
- (unsigned long long)PositionID;
- (void)setPositionID:(unsigned long long)arg1;
- (unsigned long long)ActionID;
- (void)setActionID:(unsigned long long)arg1;
- (unsigned long long)FuncType;
- (void)setFuncType:(unsigned long long)arg1;
- (id)FuncID;
- (void)setFuncID:(id)arg1;
- (unsigned int)SSID;
- (void)setSSID:(unsigned int)arg1;
- (id)ExternInfo;
- (void)setExternInfo:(id)arg1;
- (void).cxx_destruct;
@end

