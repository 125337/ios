@interface GameCenterStatObject : NSObject
{
    unsigned int _actionStatus; // +0x8
    int _sourceScene; // +0xc
    int _msgType; // +0x10
    unsigned int _networkType; // +0x14
    long long _scene; // +0x18
    long long _uiPositionNew; // +0x20
    long long _uiArea; // +0x28
    long long _action; // +0x30
    NSString * _appId; // +0x38
    NSString * _msgId; // +0x40
    NSString * _noticeId; // +0x48
    NSDictionary * _externInfo; // +0x50
    NSString * _Commid; // +0x58
    NSString * _ClientIPV6; // +0x60
    long long _StartTime; // +0x68
    long long _EndTime; // +0x70
    long long _CostTime; // +0x78
}
- (id)initFor12909;
- (id)initFor13384;
- (void)initStatField;
- (int)getReportNetWorkType;
- (id)to12909;
- (id)to13384;
- (int)uiPosition;
- (void)setUiPosition:(int)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)uiPositionNew;
- (void)setUiPositionNew:(long long)arg1;
- (long long)uiArea;
- (void)setUiArea:(long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (unsigned int)actionStatus;
- (void)setActionStatus:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (int)sourceScene;
- (void)setSourceScene:(int)arg1;
- (int)msgType;
- (void)setMsgType:(int)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (unsigned int)networkType;
- (void)setNetworkType:(unsigned int)arg1;
- (id)externInfo;
- (void)setExternInfo:(id)arg1;
- (id)Commid;
- (void)setCommid:(id)arg1;
- (id)ClientIPV6;
- (void)setClientIPV6:(id)arg1;
- (long long)StartTime;
- (void)setStartTime:(long long)arg1;
- (long long)EndTime;
- (void)setEndTime:(long long)arg1;
- (long long)CostTime;
- (void)setCostTime:(long long)arg1;
- (void).cxx_destruct;
@end
