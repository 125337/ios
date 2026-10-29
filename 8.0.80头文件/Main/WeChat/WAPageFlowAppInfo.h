@interface WAPageFlowAppInfo : MMObject
{
    BOOL _disableVisibilityEvent; // +0x8
    unsigned int _serviceAppType; // +0xc
    unsigned int _preEntranceWebviewID; // +0x10
    NSString * _username; // +0x18
    NSString * _appid; // +0x20
    unsigned long long _appState; // +0x28
    unsigned long long _useState; // +0x30
    WAPageFlowAppInfo * _preAppInfo; // +0x38
    WAPageFlowSessionInfo * _preSessionInfo; // +0x40
    WAPageFlowObject * _preAppPageInfo; // +0x48
}
- (void)updateWithUserName:(id)arg1 appid:(id)arg2 type:(unsigned int)arg3 serviceAppType:(unsigned int)arg4;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned long long)appState;
- (void)setAppState:(unsigned long long)arg1;
- (unsigned long long)useState;
- (void)setUseState:(unsigned long long)arg1;
- (unsigned int)serviceAppType;
- (void)setServiceAppType:(unsigned int)arg1;
- (id)preAppInfo;
- (void)setPreAppInfo:(id)arg1;
- (id)preSessionInfo;
- (void)setPreSessionInfo:(id)arg1;
- (id)preAppPageInfo;
- (void)setPreAppPageInfo:(id)arg1;
- (unsigned int)preEntranceWebviewID;
- (void)setPreEntranceWebviewID:(unsigned int)arg1;
- (BOOL)disableVisibilityEvent;
- (void)setDisableVisibilityEvent:(BOOL)arg1;
- (void).cxx_destruct;
@end
