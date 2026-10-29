@interface HandOffMgr : MMUserService <HandOffCDNUploadMgrDelegate, IOnlineClientMgrExt, MMServiceProtocol>
{
    BOOL _isBackDeviceLogin; // +0x8
    BOOL _manuallyForceSendAllList; // +0x9
    OrderedDictionary * _curHandOffItemLists; // +0x10
    NSMutableDictionary * _floatWindowItemDict; // +0x18
    NSMutableArray * _cgiArray; // +0x20
    NSMutableArray * _handOffListXMLArray; // +0x28
    HandOffMsgFileUploadMgr * _handoffUploadMgr; // +0x30
    HandOffRecordFileUploadMgr * _recordFileUploadMgr; // +0x38
    NSMutableArray * _receiveCommandQueue; // +0x40
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)setCurrentHandOffItem:(id)arg1;
- (void)modCurrentWebViewHandoffItem:(id /* block */)arg1;
- (void)modCurrentMiniProgramHandoffItem:(id /* block */)arg1;
- (void)removeCurrentHandOffItem;
- (void)removeHandOffItem:(id)arg1;
- (void)handleFloatWindow:(id)arg1 withOpCode:(long long)arg2;
- (void)sendAllList;
- (void)receiveMessage:(id)arg1;
- (void)sendOpenCommand:(id)arg1;
- (BOOL)canSendOpenCommand;
- (BOOL)canSendOpenCommandForOnlineInfo:(id)arg1;
- (BOOL)canSendOpenCommandForFinder;
- (BOOL)canSendOpenCommandForFinderLive;
- (void)safeAddHandoffItemToLast:(id)arg1;
- (void)safeRemoveHandoffItemFromList:(id)arg1;
- (void)clearCurrentHandoff;
- (void)recoverCurrentHandoff;
- (void)handoff:(id)arg1 withOp:(long long)arg2;
- (void)modCurrentItem:(id)arg1;
- (void)sendHandOffItemToBackDeviceWith:(id)arg1 WithOpCode:(long long)arg2;
- (void)sendCGIToBackDeviceWith:(id)arg1;
- (void)checkCgiQueue;
- (id)generateHandOffListXMLBy:(id)arg1 WithOpCode:(long long)arg2;
- (void)loadFloatWindowDataByMinimizeTasks;
- (BOOL)handOffEnabled;
- (BOOL)forceSendAllList;
- (BOOL)isInfiniteFloatWindowEnabled;
- (void)pushToHandOffHandleQueue:(id)arg1;
- (void)batchHandleCommand;
- (void)handleWebPageUrlHandOffMsgWith:(id)arg1 opCode:(long long)arg2;
- (void)handleFilePageMsgWith:(id)arg1 opCode:(long long)arg2;
- (void)handleMiniProgramMsgWith:(id)arg1 opCode:(long long)arg2;
- (void)uploadAttach:(id)arg1;
- (void)stopUploadAttach:(id)arg1;
- (void)renewCDNInfoForFileItemSucceed:(id)arg1;
- (void)renewCDNInfoForFileItemFailed:(id)arg1;
- (void)sendUploadProgressForFileItem:(id)arg1;
- (void)onLoginWeb;
- (void)onLogoutWeb;
- (id)handoffUploadMgr;
- (id)recordFileUploadMgr;
- (id)cgiArray;
- (id)handOffListXMLArray;
- (id)receiveCommandQueue;
- (id)getFileHandoffItem:(id)arg1;
- (id)curHandOffItem;
- (id)floatWindowItemDict;
- (id)__minimizedHandoffItemWithBizName:(id)arg1 bizTaskKey:(id)arg2;
- (void)__setMinimizedHandoffItemWithBizName:(id)arg1 handOffItem:(id)arg2;
- (void)__removeMinimizedHandoffItemWithBizName:(id)arg1 bizTaskKey:(id)arg2;
- (unsigned int)sendSeqNum;
- (void)setSendSeqNum:(unsigned int)arg1;
- (id)curHandOffItemLists;
- (void)setCurHandOffItemLists:(id)arg1;
- (void)setFloatWindowItemDict:(id)arg1;
- (void)setCgiArray:(id)arg1;
- (void)setHandOffListXMLArray:(id)arg1;
- (void)setHandoffUploadMgr:(id)arg1;
- (void)setRecordFileUploadMgr:(id)arg1;
- (BOOL)isBackDeviceLogin;
- (void)setIsBackDeviceLogin:(BOOL)arg1;
- (BOOL)manuallyForceSendAllList;
- (void)setManuallyForceSendAllList:(BOOL)arg1;
- (void)setReceiveCommandQueue:(id)arg1;
- (void).cxx_destruct;
@end

