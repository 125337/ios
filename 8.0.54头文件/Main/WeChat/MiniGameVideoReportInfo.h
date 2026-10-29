@interface MiniGameVideoReportInfo : NSObject
{
    int _uiArea; // +0x8
    unsigned int _positionID; // +0xc
    int _actionID; // +0x10
    unsigned int _opType; // +0x14
    unsigned int _appVersion; // +0x18
    unsigned int _appState; // +0x1c
    unsigned int _funcType; // +0x20
    NSString * _appId; // +0x28
    NSString * _actionStatus; // +0x30
    NSString * _externInfo; // +0x38
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (int)uiArea;
- (void)setUiArea:(int)arg1;
- (unsigned int)positionID;
- (void)setPositionID:(unsigned int)arg1;
- (int)actionID;
- (void)setActionID:(int)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (id)actionStatus;
- (void)setActionStatus:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned int)appState;
- (void)setAppState:(unsigned int)arg1;
- (id)externInfo;
- (void)setExternInfo:(id)arg1;
- (unsigned int)funcType;
- (void)setFuncType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

