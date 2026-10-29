@interface ChatRoomHistoryMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    NSRecursiveLock * _lock; // +0x8
    CMessageWrap * _currMsgWrap; // +0x10
    ChatRoomHistoryDB * _historyDB; // +0x18
    NSMutableArray * _arrProcessingMsg; // +0x20
}
- (void)onServiceInit;
- (unsigned long long)getHistoryIDWithMsgWrap:(id)arg1;
- (void)makeProcessTagForHistory:(id)arg1 chatName:(id)arg2;
- (BOOL)isHistoryHaveProcessTag:(id)arg1;
- (BOOL)isHistoryMsgIsProcessing:(id)arg1;
- (BOOL)canAddTipsNodeWithMsg:(id)arg1;
- (void)revokeAllMsgWithHistoryID:(unsigned long long)arg1 chatName:(id)arg2;
- (unsigned int)getRealMsgCreateTime:(id)arg1;
- (BOOL)tryProcessInviteMsg:(id)arg1;
- (void)checkQueue;
- (void)downloadAddMsgData;
- (void)onDownloadSuccessWithFilePath:(id)arg1;
- (void)parseHistoryMsgList:(id)arg1 toArrMsg:(id)arg2 toArrHistoryMsg:(id)arg3 historyInfo:(id)arg4;
- (void)onDownloadFail;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)currMsgWrap;
- (void)setCurrMsgWrap:(id)arg1;
- (id)historyDB;
- (void)setHistoryDB:(id)arg1;
- (id)arrProcessingMsg;
- (void)setArrProcessingMsg:(id)arg1;
- (void).cxx_destruct;
@end

