@interface MMAppMsgUploadMgr : MMUserService <PBMessageObserverDelegate, IMsgExt, IGroupMgrExt, MessageDBExt, MMServiceProtocol>
{
    BOOL _shouldStopClean; // +0x8
    NSMutableDictionary * _msgWrapDict; // +0x10
    NSMutableDictionary * _thumbTasks; // +0x18
    MMAppMsgUploadDataBase * _database; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cleanData;
- (BOOL)appMsgUploadStart:(id)arg1;
- (void)appMsgUploadStartInternal:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSendAppMsgResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)appMsgUploadPause:(id)arg1;
- (void)appMsgUploadComplete:(id)arg1;
- (void)appMsgUploadStop:(id)arg1;
- (unsigned int)getAppMsgUploadUiPercent:(id)arg1;
- (BOOL)checkAppMsgShowRevokeMenu:(id)arg1;
- (BOOL)checkAppMsgUploadExceedTime:(id)arg1;
- (BOOL)checkAppMsgIsAutoDelete:(id)arg1;
- (void)calcMd5ForMessage:(id)arg1;
- (void)checkUploadThumbForMessage:(id)arg1;
- (void)OnQuitGroup:(id)arg1;
- (void)onDeleteAllMsgs:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)msgWrapDict;
- (void)setMsgWrapDict:(id)arg1;
- (id)thumbTasks;
- (void)setThumbTasks:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (BOOL)shouldStopClean;
- (void)setShouldStopClean:(BOOL)arg1;
- (void).cxx_destruct;
@end
