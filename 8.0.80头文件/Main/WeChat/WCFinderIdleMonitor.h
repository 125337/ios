@interface WCFinderIdleMonitor : MMUserService <CNetworkStatusExt, VoipUIManagerExt, WCFinderVideoTaskInfoExt, MMLiveTaskMgrExt, MMServiceProtocol>
{
    unsigned long long _openCellularDownloadTimestamp; // +0x8
    WCFinderPriorityQueue * _priorityQueue; // +0x10
    WCFinderPriorityTask * _currentTask; // +0x18
    MMTimer * _checkIdleTimer; // +0x20
    id /* block */ _defaultMediaWrapCreateBlock; // +0x28
    id /* block */ _firstFrameMediaWrapCreateBlock; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onEnterBackground:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (id /* block */)defaultMediaWrapCreateBlock;
- (id /* block */)firstFrameMediaWrapCreateBlock;
- (void)addTaskInfoWithTidArray:(id)arg1 commentScene:(int)arg2 priority:(unsigned long long)arg3 groupID:(id)arg4 preserveOldTask:(BOOL)arg5 taskInfoType:(unsigned long long)arg6;
- (void)addTaskInfoWithTidArray:(id)arg1 commentScene:(int)arg2 priority:(unsigned long long)arg3 groupID:(id)arg4 preserveOldTask:(BOOL)arg5 customMediaWrap:(id /* block */)arg6;
- (void)_addTaskInfoWithTidArray:(id)arg1 commentScene:(int)arg2 priority:(unsigned long long)arg3 groupID:(id)arg4 preserveOldTask:(BOOL)arg5 customMediaWrap:(id /* block */)arg6;
- (void)cancelGroupIDTask:(id)arg1;
- (void)checkIdleAndExecuteTask;
- (void)excuteTask:(id)arg1;
- (void)startCheckIdleTimer;
- (void)stopCheckIdleTimer;
- (void)pauseCurrentTask;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onSimCardNetTypeChange;
- (void)handleNetworkChange;
- (BOOL)_canDownloadByCurrentNetWork;
- (void)UIManagerWillOpenWindowWithContact:(id)arg1 isCaller:(BOOL)arg2 monoMsg:(id)arg3 startInApp:(BOOL)arg4 isEarMode:(BOOL)arg5 isAudioMode:(BOOL)arg6 from:(unsigned long long)arg7 isIlink:(BOOL)arg8;
- (void)UIManagerDidCloseCompletely;
- (void)onLiveTaskEnterLive:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)videoTaskInfoStatusChange:(unsigned long long)arg1 mediaWrap:(id)arg2;
- (void)downloadTaskDidFinishWithMediaWrap:(id)arg1;
- (void)reportIdleMonitorInterruptedAction:(unsigned long long)arg1 isInterrupted:(BOOL)arg2;
- (void)reportIdleMonitorWithTid:(id)arg1 commentScene:(unsigned long long)arg2 priority:(unsigned long long)arg3 actionType:(unsigned long long)arg4;
- (void)reportIdleMonitorWithTid:(id)arg1 commentScene:(unsigned long long)arg2 priority:(unsigned long long)arg3 actionType:(unsigned long long)arg4 interruptedType:(unsigned long long)arg5;
- (unsigned long long)openCellularDownloadTimestamp;
- (void)setOpenCellularDownloadTimestamp:(unsigned long long)arg1;
- (id)priorityQueue;
- (void)setPriorityQueue:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)checkIdleTimer;
- (void)setCheckIdleTimer:(id)arg1;
- (void)setDefaultMediaWrapCreateBlock:(id /* block */)arg1;
- (void)setFirstFrameMediaWrapCreateBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
