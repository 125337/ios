@interface WeDropLocalNetworkManager : MMUserService <MMServiceProtocol>
{
    BOOL _isLocalNetworkAvailable; // +0x8
    NSMutableArray * _taskList; // +0x10
    NSObject<OS_dispatch_queue> * _localNetworkIOQueue; // +0x18
    NSObject<OS_dispatch_queue> * _localNetworkInitQueue; // +0x20
    NSObject<OS_dispatch_queue> * _localNetworkUninitQueue; // +0x28
    NSObject<OS_dispatch_queue> * _localNetworkReportQueue; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)startLocalNetwork:(id)arg1 userInfo:(id)arg2 deviceInfo:(id)arg3;
- (void)uninitLocalNetwork;
- (void)getTransportMaxSpeed:(id /* block */)arg1;
- (void)getTransportAvgSpeed:(id /* block */)arg1;
- (void)updateQrIdToLocalNetwork:(id)arg1;
- (id)sendData:(id)arg1;
- (void)receiveData;
- (void)realReceiveData;
- (void)realSendData;
- (void)onTaskFinished;
- (void)onTaskFail;
- (void)checkStartNextTask;
- (id)getLocalNetworkIOQueue;
- (id)getLocalNetworkInitQueue;
- (id)getLocalNetworkUnInitQueue;
- (id)getLocalNetworkReportQueue;
- (BOOL)isLocalNetworkAvailable;
- (void)setIsLocalNetworkAvailable:(BOOL)arg1;
- (id)taskList;
- (void)setTaskList:(id)arg1;
- (id)localNetworkIOQueue;
- (void)setLocalNetworkIOQueue:(id)arg1;
- (id)localNetworkInitQueue;
- (void)setLocalNetworkInitQueue:(id)arg1;
- (id)localNetworkUninitQueue;
- (void)setLocalNetworkUninitQueue:(id)arg1;
- (id)localNetworkReportQueue;
- (void)setLocalNetworkReportQueue:(id)arg1;
- (void).cxx_destruct;
@end
