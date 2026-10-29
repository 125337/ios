@interface ForwardMessageSession : NSObject
{
    int _createType; // +0x8
    int _closeType; // +0xc
    NSString * _sessionID; // +0x10
    unsigned long long _createTime; // +0x18
    long long _msgForwardType; // +0x20
    unsigned long long _forwardType; // +0x28
    unsigned long long _forwardScene; // +0x30
    NSArray * _msgList; // +0x38
    NSArray * _originMsgList; // +0x40
    NSDictionary * _botForwardOriginalMsgReportParams; // +0x48
    NSNumber * _confirmScreenFromForReport; // +0x50
    NSNumber * _confirmScreenFromBeforeClawBotForReport; // +0x58
}
+ (id)getMsgReportParams:(id)arg1;
- (id)init;
- (unsigned long long)existTime;
- (int)getReportForwardType;
- (int)getReportForwardScene;
- (id)getChatName;
- (void)captureBotForwardOriginalMsgReportParams;
- (void)recordConfirmScreenFromForReport:(int)arg1;
- (void)restoreConfirmScreenFromForReport;
- (int)getReportConfirmScreenFrom;
- (id)getCommonReportParams;
- (id)sessionID;
- (unsigned long long)createTime;
- (long long)msgForwardType;
- (void)setMsgForwardType:(long long)arg1;
- (unsigned long long)forwardType;
- (void)setForwardType:(unsigned long long)arg1;
- (unsigned long long)forwardScene;
- (void)setForwardScene:(unsigned long long)arg1;
- (int)createType;
- (void)setCreateType:(int)arg1;
- (int)closeType;
- (void)setCloseType:(int)arg1;
- (id)msgList;
- (void)setMsgList:(id)arg1;
- (id)originMsgList;
- (void)setOriginMsgList:(id)arg1;
- (id)botForwardOriginalMsgReportParams;
- (id)confirmScreenFromForReport;
- (void)setConfirmScreenFromForReport:(id)arg1;
- (id)confirmScreenFromBeforeClawBotForReport;
- (void)setConfirmScreenFromBeforeClawBotForReport:(id)arg1;
- (void).cxx_destruct;
@end
