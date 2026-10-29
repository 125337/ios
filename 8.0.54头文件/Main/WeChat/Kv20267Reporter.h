@interface Kv20267Reporter : NSObject
{
    unsigned int _AppVersion; // +0x8
    unsigned int _AppState; // +0xc
    unsigned int _SSID; // +0x10
    unsigned int _ToUin; // +0x14
    unsigned int _SceneID; // +0x18
    unsigned int _UIArea; // +0x1c
    unsigned int _PositionID; // +0x20
    unsigned int _ActionID; // +0x24
    unsigned int _OpType; // +0x28
    unsigned int _SourceID; // +0x2c
    unsigned int _ExpID; // +0x30
    unsigned int _LogType; // +0x34
    unsigned int _Time; // +0x38
    unsigned int _FuncType; // +0x3c
    unsigned int _ContentType; // +0x40
    unsigned int _ContentID; // +0x44
    unsigned int _ReasonID; // +0x48
    unsigned int _ClassID; // +0x4c
    NSString * _AppId; // +0x50
    NSString * _NetworkType; // +0x58
    NSString * _ActionStatus; // +0x60
    NSString * _Object; // +0x68
    NSString * _Status; // +0x70
    NSString * _Allpath; // +0x78
    NSString * _ErrType; // +0x80
    NSString * _FuncID; // +0x88
    NSString * _ExternInfo; // +0x90
}
+ (id)createReportWithScenceID:(int)arg1 uiArea:(int)arg2 positionId:(unsigned int)arg3 actionId:(int)arg4 externInfo:(id)arg5 appId:(id)arg6;
- (id)toString;
- (void)report;
- (id)AppId;
- (void)setAppId:(id)arg1;
- (unsigned int)AppVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned int)AppState;
- (void)setAppState:(unsigned int)arg1;
- (id)NetworkType;
- (void)setNetworkType:(id)arg1;
- (unsigned int)SSID;
- (void)setSSID:(unsigned int)arg1;
- (unsigned int)ToUin;
- (void)setToUin:(unsigned int)arg1;
- (unsigned int)SceneID;
- (void)setSceneID:(unsigned int)arg1;
- (unsigned int)UIArea;
- (void)setUIArea:(unsigned int)arg1;
- (unsigned int)PositionID;
- (void)setPositionID:(unsigned int)arg1;
- (unsigned int)ActionID;
- (void)setActionID:(unsigned int)arg1;
- (id)ActionStatus;
- (void)setActionStatus:(id)arg1;
- (unsigned int)OpType;
- (void)setOpType:(unsigned int)arg1;
- (id)Object;
- (void)setObject:(id)arg1;
- (id)Status;
- (void)setStatus:(id)arg1;
- (unsigned int)SourceID;
- (void)setSourceID:(unsigned int)arg1;
- (id)Allpath;
- (void)setAllpath:(id)arg1;
- (unsigned int)ExpID;
- (void)setExpID:(unsigned int)arg1;
- (unsigned int)LogType;
- (void)setLogType:(unsigned int)arg1;
- (id)ErrType;
- (void)setErrType:(id)arg1;
- (unsigned int)Time;
- (void)setTime:(unsigned int)arg1;
- (unsigned int)FuncType;
- (void)setFuncType:(unsigned int)arg1;
- (id)FuncID;
- (void)setFuncID:(id)arg1;
- (unsigned int)ContentType;
- (void)setContentType:(unsigned int)arg1;
- (unsigned int)ContentID;
- (void)setContentID:(unsigned int)arg1;
- (unsigned int)ReasonID;
- (void)setReasonID:(unsigned int)arg1;
- (id)ExternInfo;
- (void)setExternInfo:(id)arg1;
- (unsigned int)ClassID;
- (void)setClassID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

