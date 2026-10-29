@interface WXGBackupMMDB : NSObject
{
    BOOL _shouldChangeForDisplay; // +0x8
    BOOL _bIsLastMsgList; // +0x9
    BOOL _bStopGet; // +0xa
    unsigned int _uiCurrentCursor; // +0xc
    unsigned int _lastCreateTime; // +0x10
    unsigned int _msgCount; // +0x14
    unsigned int _oneQueryLimitCnt; // +0x18
    unsigned int _lastLocalID; // +0x1c
    CMMDB * _oMMDB; // +0x20
    NSMutableArray * _arrCurMsgWrapList; // +0x28
}
+ (id)getLocalUsrName:(id)arg1;
+ (void)handleMessage:(id)arg1 ChatName:(id)arg2 Des:(unsigned int)arg3 ShouldChange:(BOOL)arg4;
- (id)init;
- (void)dealloc;
- (id)getMsgUseBatchQuery:(id)arg1 fromRowID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 endAtTime:(unsigned int)arg4 timeAsend:(BOOL)arg5;
- (unsigned long long)getTotalMsgCountOf:(id)arg1 from:(unsigned int)arg2 toEndTime:(unsigned int)arg3;
- (id)getMsgChatName:(id)arg1 fromCreateTime:(unsigned int)arg2 endAtTime:(unsigned int)arg3 lastLocalID:(unsigned int)arg4 limit:(int)arg5 timeAsend:(BOOL)arg6;
- (BOOL)shouldChangeForDisplay;
- (void)setShouldChangeForDisplay:(BOOL)arg1;
- (id)oMMDB;
- (void)setOMMDB:(id)arg1;
- (id)arrCurMsgWrapList;
- (void)setArrCurMsgWrapList:(id)arg1;
- (unsigned int)uiCurrentCursor;
- (void)setUiCurrentCursor:(unsigned int)arg1;
- (BOOL)bIsLastMsgList;
- (void)setBIsLastMsgList:(BOOL)arg1;
- (unsigned int)lastCreateTime;
- (void)setLastCreateTime:(unsigned int)arg1;
- (unsigned int)msgCount;
- (void)setMsgCount:(unsigned int)arg1;
- (BOOL)bStopGet;
- (void)setBStopGet:(BOOL)arg1;
- (unsigned int)oneQueryLimitCnt;
- (void)setOneQueryLimitCnt:(unsigned int)arg1;
- (unsigned int)lastLocalID;
- (void)setLastLocalID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

