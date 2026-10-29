@interface WXGChatSyncDataPacker : NSObject
{
    BOOL _bNeedMedia; // +0x8
    BOOL _bUseMsgLimitArray; // +0x9
    BOOL _bUseTimeInterval; // +0xa
    BOOL _bGetExtenInfo; // +0xb
    BOOL _bSpecificChat; // +0xc
    BOOL _bStartPacking; // +0xd
    id <WXGChatSyncDataPackerDelegate> _delegate; // +0x10
    unsigned long long _totalPackSessionCount; // +0x18
    unsigned long long _totalPackMsgCount; // +0x20
    NSArray * _needMediaArray; // +0x28
    unsigned long long _sessionInfoCount; // +0x30
    unsigned long long _sessionListCount; // +0x38
    unsigned long long _msgCountLimit; // +0x40
    NSArray * _msgIntervalArray; // +0x48
    NSArray * _msgLimitArray; // +0x50
    unsigned long long _timeLimit; // +0x58
    unsigned long long _startTime; // +0x60
    unsigned long long _endTime; // +0x68
    NSString * _specificChatName; // +0x70
    NSMutableArray * _sessionInfoArray; // +0x78
    NSMutableArray * _dataSessionInfoArray; // +0x80
    WXGBackupDataMgr * _dataMgr; // +0x88
}
- (id)init;
- (void)dealloc;
- (void)startPackData;
- (void)stopPackData;
- (unsigned int)getNewFriendUnreadCount;
- (void)loadSessionInfo;
- (BOOL)isContactDisableToSyncSessionAndData:(id)arg1;
- (BOOL)isLocalizedContactThatCannotSync:(id)arg1;
- (void)p_writePackDataWithBackupOut:(id)arg1;
- (BOOL)p_writeMsgListDataPush:(id)arg1 toPath:(id)arg2;
- (BOOL)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)totalPackSessionCount;
- (void)setTotalPackSessionCount:(unsigned long long)arg1;
- (unsigned long long)totalPackMsgCount;
- (void)setTotalPackMsgCount:(unsigned long long)arg1;
- (BOOL)bNeedMedia;
- (void)setBNeedMedia:(BOOL)arg1;
- (id)needMediaArray;
- (void)setNeedMediaArray:(id)arg1;
- (unsigned long long)sessionInfoCount;
- (void)setSessionInfoCount:(unsigned long long)arg1;
- (unsigned long long)sessionListCount;
- (void)setSessionListCount:(unsigned long long)arg1;
- (unsigned long long)msgCountLimit;
- (void)setMsgCountLimit:(unsigned long long)arg1;
- (BOOL)bUseMsgLimitArray;
- (void)setBUseMsgLimitArray:(BOOL)arg1;
- (id)msgIntervalArray;
- (void)setMsgIntervalArray:(id)arg1;
- (id)msgLimitArray;
- (void)setMsgLimitArray:(id)arg1;
- (unsigned long long)timeLimit;
- (void)setTimeLimit:(unsigned long long)arg1;
- (BOOL)bUseTimeInterval;
- (void)setBUseTimeInterval:(BOOL)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (BOOL)bGetExtenInfo;
- (void)setBGetExtenInfo:(BOOL)arg1;
- (BOOL)bSpecificChat;
- (void)setBSpecificChat:(BOOL)arg1;
- (id)specificChatName;
- (void)setSpecificChatName:(id)arg1;
- (id)sessionInfoArray;
- (void)setSessionInfoArray:(id)arg1;
- (id)dataSessionInfoArray;
- (void)setDataSessionInfoArray:(id)arg1;
- (BOOL)bStartPacking;
- (void)setBStartPacking:(BOOL)arg1;
- (id)dataMgr;
- (void)setDataMgr:(id)arg1;
- (void).cxx_destruct;
@end

