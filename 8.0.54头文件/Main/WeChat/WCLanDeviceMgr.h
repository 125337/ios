@interface WCLanDeviceMgr : MMUserService <MMServiceProtocol>
{
    long long m_taskId; // +0x8
    NSMutableArray * m_tasks; // +0x10
    NSRecursiveLock * m_lock; // +0x18
    int m_libInitCount; // +0x20
    NSObject<OS_dispatch_queue> * m_myQueue; // +0x28
}
- (id)init;
- (long long)initWCLanDeviceLib;
- (long long)releaseWCLanDeviceLib;
- (long long)startScanWCLanDevice;
- (long long)stopScanWCLanDevice;
- (long long)cancelWCLanDeviceTask:(long long)arg1;
- (long long)connectToWCLanDevice:(id)arg1 DeviceId:(id)arg2 willRetryConnect:(BOOL)arg3;
- (long long)disconnectToWCLanDevice:(id)arg1 DeviceId:(id)arg2;
- (long long)sendDataToWCLanDevice:(id)arg1 DeviceId:(id)arg2 JsonMsg:(id)arg3;
- (long long)sendFileToWCLanDevice:(id)arg1 DeviceId:(id)arg2 JsonMsg:(id)arg3 Paht:(id)arg4;
- (void)c2objc_onReceiveWCLanDeviceDiscPackage:(id)arg1;
- (void)c2objc_onReceiveWCLanDeviceProfile:(id)arg1;
- (void)c2objc_onWCLanDeviceUdpError:(int)arg1;
- (void)c2objc_onWCLanReceiveResponse:(int)arg1 Data:(id)arg2;
- (void)c2objc_onWCLanDeviceConnectStateNotify:(id)arg1 StateCode:(int)arg2;
- (void)c2objc_onWCLanFileTransferUpdate:(int)arg1 Data:(id)arg2;
- (void)c2objc_onWCLanReceiveNotify:(id)arg1 Data:(id)arg2;
- (BOOL)genDeviceInfo:(id)arg1 DeviceId:(id)arg2 AndBuffer:(AutoBuffer *)arg3;
- (BOOL)genSendFileRequestInfo:(id)arg1 FileName:(id)arg2 AndBuffer:(AutoBuffer *)arg3;
- (void)safeAddTask:(id)arg1;
- (id)getTaskForTaskId:(long long)arg1;
- (void)deleteTask:(long long)arg1;
- (id)getTaskForSubTaskId:(int)arg1;
- (id)getDictionaryFromJson:(id)arg1;
- (void)sendAsync:(long long)arg1 DeviceType:(id)arg2 DeviceID:(id)arg3 MSG:(id)arg4;
- (void).cxx_destruct;
@end

