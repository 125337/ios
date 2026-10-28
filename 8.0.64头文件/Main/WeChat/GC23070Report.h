@interface GC23070Report : NSObject
{
    BOOL _isExposureReported; // +0x8
    unsigned long long _SceneID; // +0x10
    unsigned long long _UIArea; // +0x18
    unsigned long long _PositionID; // +0x20
    unsigned long long _ActionID; // +0x28
    unsigned long long _ActionStatus; // +0x30
    unsigned long long _Ssid; // +0x38
    unsigned long long _SourceID; // +0x40
    NSString * _GameID; // +0x48
    NSString * _ChatroomID; // +0x50
    unsigned long long _MessageID; // +0x58
    NSString * _GameLeval; // +0x60
    NSString * _GameTitle; // +0x68
    unsigned long long _UserState; // +0x70
    NSString * _Username; // +0x78
    unsigned long long _StayTime; // +0x80
    NSMutableDictionary * _externInfoDict; // +0x88
    NSString * _NoticeID; // +0x90
    long long _TalkTab; // +0x98
    NSString * _vcKey; // +0xa0
    NSString * _subKey; // +0xa8
    id <GC23070ReportDelegate> _reportDelegate; // +0xb0
}
+ (id)reportModelForVc:(id)arg1 subKey:(id)arg2;
+ (id)dataForChatTabScene;
+ (id)dataForFindMoreScene;
+ (id)dataForChatRoomScene;
+ (void)reportExplosureWithVc:(id)arg1 subKey:(id)arg2 reportBlock:(id /* block */)arg3;
- (id)init;
- (void)report;
- (void)reportWithActionId:(unsigned long long)arg1;
- (void)reportExplosure;
- (void)reportWithPosId:(unsigned long long)arg1 actionid:(unsigned long long)arg2;
- (void)reportWithPosId:(unsigned long long)arg1 actionid:(unsigned long long)arg2 actionStatus:(unsigned long long)arg3;
- (void)reportWithPosId:(unsigned long long)arg1 actionid:(unsigned long long)arg2 actionStatus:(unsigned long long)arg3 addtionDict:(id)arg4;
- (id)toString;
- (void)configureGetDataReportBlock:(id /* block */)arg1;
- (unsigned long long)SceneID;
- (void)setSceneID:(unsigned long long)arg1;
- (unsigned long long)UIArea;
- (void)setUIArea:(unsigned long long)arg1;
- (unsigned long long)PositionID;
- (void)setPositionID:(unsigned long long)arg1;
- (unsigned long long)ActionID;
- (void)setActionID:(unsigned long long)arg1;
- (unsigned long long)ActionStatus;
- (void)setActionStatus:(unsigned long long)arg1;
- (unsigned long long)Ssid;
- (void)setSsid:(unsigned long long)arg1;
- (unsigned long long)SourceID;
- (void)setSourceID:(unsigned long long)arg1;
- (id)GameID;
- (void)setGameID:(id)arg1;
- (id)ChatroomID;
- (void)setChatroomID:(id)arg1;
- (unsigned long long)MessageID;
- (void)setMessageID:(unsigned long long)arg1;
- (id)GameLeval;
- (void)setGameLeval:(id)arg1;
- (id)GameTitle;
- (void)setGameTitle:(id)arg1;
- (unsigned long long)UserState;
- (void)setUserState:(unsigned long long)arg1;
- (id)Username;
- (void)setUsername:(id)arg1;
- (unsigned long long)StayTime;
- (void)setStayTime:(unsigned long long)arg1;
- (id)externInfoDict;
- (void)setExternInfoDict:(id)arg1;
- (id)NoticeID;
- (void)setNoticeID:(id)arg1;
- (long long)TalkTab;
- (void)setTalkTab:(long long)arg1;
- (id)vcKey;
- (void)setVcKey:(id)arg1;
- (id)subKey;
- (void)setSubKey:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (BOOL)isExposureReported;
- (void)setIsExposureReported:(BOOL)arg1;
- (void).cxx_destruct;
@end
