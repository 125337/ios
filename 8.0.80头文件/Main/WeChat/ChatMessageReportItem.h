@interface ChatMessageReportItem : NSObject
{
    BOOL _hasReported; // +0x8
    long long _msgId; // +0x10
    unsigned long long _localMsgId; // +0x18
    long long _actionType; // +0x20
    unsigned long long _msgReceiveTime; // +0x28
    unsigned long long _actionTime; // +0x30
    NSString * _chatName; // +0x38
    long long _chatType; // +0x40
    long long _groupMemberCount; // +0x48
    long long _muteType; // +0x50
    long long _minimizeType; // +0x58
    long long _msgType; // +0x60
    long long _msgSubType; // +0x68
    long long _multipleDeviceLogging; // +0x70
    long long _redMsgType; // +0x78
    NSArray * _expParams; // +0x80
    long long _exposeTime; // +0x88
}
+ (id)itemWithMessage:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (void)reportAction:(long long)arg1;
- (long long)getRedTipsType:(id)arg1;
- (BOOL)hasReported;
- (void)setHasReported:(BOOL)arg1;
- (long long)msgId;
- (void)setMsgId:(long long)arg1;
- (unsigned long long)localMsgId;
- (void)setLocalMsgId:(unsigned long long)arg1;
- (long long)actionType;
- (void)setActionType:(long long)arg1;
- (unsigned long long)msgReceiveTime;
- (void)setMsgReceiveTime:(unsigned long long)arg1;
- (unsigned long long)actionTime;
- (void)setActionTime:(unsigned long long)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (long long)chatType;
- (void)setChatType:(long long)arg1;
- (long long)groupMemberCount;
- (void)setGroupMemberCount:(long long)arg1;
- (long long)muteType;
- (void)setMuteType:(long long)arg1;
- (long long)minimizeType;
- (void)setMinimizeType:(long long)arg1;
- (long long)msgType;
- (void)setMsgType:(long long)arg1;
- (long long)msgSubType;
- (void)setMsgSubType:(long long)arg1;
- (long long)multipleDeviceLogging;
- (void)setMultipleDeviceLogging:(long long)arg1;
- (long long)redMsgType;
- (void)setRedMsgType:(long long)arg1;
- (id)expParams;
- (void)setExpParams:(id)arg1;
- (long long)exposeTime;
- (void)setExposeTime:(long long)arg1;
- (void).cxx_destruct;
@end
