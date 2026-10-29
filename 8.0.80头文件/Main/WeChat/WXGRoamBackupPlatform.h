@interface WXGRoamBackupPlatform : NSObject <AffRoamPlatformBase, IRoamBackupPackageServiceExt>
{
    BOOL _inPage; // +0x8
    BOOL _pcUsbEnabled; // +0x9
    AffRoamPlatformCallback * _roamPlatformCb; // +0x10
    NSObject<OS_dispatch_semaphore> * _chatLogSemaphore; // +0x18
    NSObject<OS_dispatch_queue> * _bridgeQueue; // +0x20
    NSString * _curBindId; // +0x28
    unsigned long long _bindTaskId; // +0x30
    NSString * _pcWifiName; // +0x38
}
+ (id)sharedInstance;
- (id)init;
- (void)setCallback:(id)arg1;
- (void)getAllConversationsAsync:(unsigned long long)arg1;
- (void)getAllLabelsAsync:(unsigned long long)arg1;
- (id)getLabelNameOfId:(int)arg1;
- (id)getUserDisplayName:(id)arg1;
- (id)getUsersFromLabel:(int)arg1;
- (id)getValidDeviceIdFromOnlineInfo:(id)arg1;
- (void)getAllDevicesAsync:(unsigned long long)arg1;
- (void)getIotBoundDevicesAsync:(unsigned long long)arg1;
- (void)getOnlineDevicesAsync:(unsigned long long)arg1;
- (id)getSdkInitializeData;
- (void)bindDeviceAsync:(unsigned long long)arg1 deviceId:(id)arg2;
- (BOOL)checkPermissionSAF:(id)arg1;
- (BOOL)isUdiskOnline:(id)arg1;
- (void)getBatteryCapacityAsync:(unsigned long long)arg1;
- (id)getCacheDiskPathById:(id)arg1;
- (BOOL)isAnyUdiskOnline;
- (void)removeCacheDiskPathById:(id)arg1;
- (void)notifyStatusChanged:(unsigned long long)arg1 taskType:(int)arg2 taskState:(int)arg3 summary:(id)arg4;
- (void)notifyProgressChanged:(unsigned long long)arg1 transferStatus:(id)arg2 progress:(int)arg3;
- (void)updateBackupPackageModel:(unsigned long long)arg1 progress:(int)arg2;
- (void)removeStateByPkgId:(unsigned long long)arg1;
- (void)openLocation:(id)arg1;
- (void)startForegroundService;
- (void)stopForegroundService;
- (void)getNetNameAsync:(unsigned long long)arg1;
- (void)globalForceNotify:(id)arg1 state:(int)arg2 taskType:(int)arg3 title:(id)arg4;
- (void)globalForceNotifyDelete:(unsigned long long)arg1 deleteType:(int)arg2 title:(id)arg3 errorCode:(int)arg4;
- (void)resetMediaTime:(unsigned long long)arg1;
- (void)listenPCNetwork:(int)arg1 deviceId:(id)arg2;
- (id)getPCWifiName:(id)arg1;
- (BOOL)getPCUsbEnabled:(id)arg1;
- (void)allowLocalNetwork;
- (void)generalNotifyPc:(id)arg1 args:(id)arg2;
- (BOOL)canBackup;
- (void)keepScreenOn:(BOOL)arg1;
- (void)endRecover;
- (void)releaseThreadPool:(BOOL)arg1;
- (void)sendStrongNotify:(id)arg1 title:(id)arg2 packageId:(unsigned long long)arg3;
- (void)removeTaskStatusFromFlutter:(unsigned long long)arg1;
- (unsigned long long)getPreciseNotifyCodeWithTaskType:(int)arg1 taskState:(int)arg2;
- (void)onPCNetworkChangedWithWifi:(id)arg1 usbEnabled:(BOOL)arg2;
- (BOOL)inPage;
- (void)setInPage:(BOOL)arg1;
- (id)roamPlatformCb;
- (void)setRoamPlatformCb:(id)arg1;
- (id)chatLogSemaphore;
- (void)setChatLogSemaphore:(id)arg1;
- (id)bridgeQueue;
- (void)setBridgeQueue:(id)arg1;
- (id)curBindId;
- (void)setCurBindId:(id)arg1;
- (unsigned long long)bindTaskId;
- (void)setBindTaskId:(unsigned long long)arg1;
- (id)pcWifiName;
- (void)setPcWifiName:(id)arg1;
- (BOOL)pcUsbEnabled;
- (void)setPcUsbEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
