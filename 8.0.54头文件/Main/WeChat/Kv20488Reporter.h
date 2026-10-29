@interface Kv20488Reporter : NSObject
{
    unsigned int _SceneID; // +0x8
    unsigned int _UIArea; // +0xc
    unsigned int _PositionID; // +0x10
    unsigned int _ActionID; // +0x14
    unsigned int _SourceID; // +0x18
    unsigned int _GiftID; // +0x1c
    unsigned int _GiftType; // +0x20
    unsigned int _FromAccountType; // +0x24
    unsigned int _ToAccountType; // +0x28
    unsigned int _RedDot; // +0x2c
    unsigned int _TotalNum; // +0x30
    unsigned int _Time; // +0x34
    NSString * _GameID; // +0x38
    NSString * _ActionStatus; // +0x40
    NSString * _FromUsername; // +0x48
    NSString * _ToUsername; // +0x50
    NSString * _SessionId; // +0x58
    NSDictionary * _ExternInfo; // +0x60
    long long _GameType; // +0x68
    long long _ssid; // +0x70
}
+ (id)createReporter:(int)arg1 uiArea:(int)arg2 positionId:(unsigned int)arg3 actionId:(int)arg4 sourceId:(unsigned int)arg5;
+ (void)reportConversationItem:(unsigned int)arg1 actionId:(int)arg2 totalNum:(unsigned int)arg3 conversation:(id)arg4 sourceId:(unsigned int)arg5 actionStatus:(id)arg6 extInfoDic:(id)arg7;
+ (id)getChatViewReporter:(int)arg1 uiArea:(int)arg2 pos:(unsigned int)arg3 actionId:(int)arg4 sessionId:(id)arg5 sourceId:(unsigned int)arg6 actionStatus:(id)arg7;
+ (void)reportChattingViewItem:(unsigned int)arg1 actionId:(int)arg2 sessionId:(id)arg3 sourceId:(unsigned int)arg4 actionStatus:(id)arg5;
+ (void)reportChatInfoDetailViewItem:(unsigned int)arg1 actionId:(int)arg2 sessionId:(id)arg3 sourceId:(unsigned int)arg4 actionStatus:(id)arg5;
+ (void)reportChatInfoDetailViewBlackListItem:(unsigned int)arg1 actionId:(int)arg2 sessionId:(id)arg3 sourceId:(unsigned int)arg4 actionStatus:(id)arg5 roleType:(unsigned int)arg6;
+ (void)reportConversationExpose:(id)arg1;
- (void)report;
- (id)toString;
- (unsigned int)SceneID;
- (void)setSceneID:(unsigned int)arg1;
- (unsigned int)UIArea;
- (void)setUIArea:(unsigned int)arg1;
- (unsigned int)PositionID;
- (void)setPositionID:(unsigned int)arg1;
- (unsigned int)ActionID;
- (void)setActionID:(unsigned int)arg1;
- (unsigned int)SourceID;
- (void)setSourceID:(unsigned int)arg1;
- (id)GameID;
- (void)setGameID:(id)arg1;
- (id)ActionStatus;
- (void)setActionStatus:(id)arg1;
- (unsigned int)GiftID;
- (void)setGiftID:(unsigned int)arg1;
- (unsigned int)GiftType;
- (void)setGiftType:(unsigned int)arg1;
- (unsigned int)FromAccountType;
- (void)setFromAccountType:(unsigned int)arg1;
- (id)FromUsername;
- (void)setFromUsername:(id)arg1;
- (unsigned int)ToAccountType;
- (void)setToAccountType:(unsigned int)arg1;
- (id)ToUsername;
- (void)setToUsername:(id)arg1;
- (unsigned int)RedDot;
- (void)setRedDot:(unsigned int)arg1;
- (unsigned int)TotalNum;
- (void)setTotalNum:(unsigned int)arg1;
- (id)SessionId;
- (void)setSessionId:(id)arg1;
- (id)ExternInfo;
- (void)setExternInfo:(id)arg1;
- (unsigned int)Time;
- (void)setTime:(unsigned int)arg1;
- (long long)GameType;
- (void)setGameType:(long long)arg1;
- (long long)ssid;
- (void)setSsid:(long long)arg1;
- (void).cxx_destruct;
@end

