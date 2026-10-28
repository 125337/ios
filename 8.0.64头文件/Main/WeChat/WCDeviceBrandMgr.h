@interface WCDeviceBrandMgr : MMUserService <WCHKWorkoutLogicDelegate, WCHKActivitySummaryLogicDelegate, MMServiceProtocol, WCDeviceAuthLogicDelegate, WCDeviceNetworkLogicMgrDelegate, WCDeviceSendDataToManufacturSvrLogicDelegate, WCDeviceWifiStateLogicDelegate, WCDeviceM7LogicDelegate, IMsgExt, BlueAdapterDelegate, IWCDeviceAccountMgrExt, IContactMgrExt, IPreEnterWechatLogicExt>
{
    WCDeviceAuthLogic * _authLogic; // +0x8
    WCDeviceSendDataToManufacturSvrLogic * _sendDataLogic; // +0x10
    WCDeviceNetworkLogicMgr * _networkLogic; // +0x18
    WCDeviceWifiStateLogic * _wifiStateLogic; // +0x20
    unsigned int _scanMode; // +0x28
    unsigned int _lastSyncModeScanTime; // +0x2c
    unsigned int _canTimingSyncTime; // +0x30
    unsigned int _lastUploadStepCount; // +0x34
    unsigned int _lastUploadHKStepCount; // +0x38
    unsigned int _lastUploadM7StepCount; // +0x3c
    unsigned int _uploadingHKStepCount; // +0x40
    unsigned int _uploadingM7StepCount; // +0x44
    NSMutableDictionary * _devMaxSeqDic; // +0x48
    long long _lastReportBTStateTime; // +0x50
    BOOL _m_isScanning; // +0x58
    int _m_appState; // +0x5c
    unsigned int _m_lastGetBoundDevTime; // +0x60
    int _m_uploadStepScene; // +0x64
    BlueManager * m_blueMgr; // +0x68
    NSMutableDictionary * m_devices; // +0x70
    NSMutableArray * m_tasks; // +0x78
    NSMutableArray * m_bindingDevices; // +0x80
    NSObject<OS_dispatch_queue> * _dataQueue; // +0x88
    WCHKWorkoutLogic * _mWorkoutLogic; // +0x90
    WCDeviceM7Logic * _m7Logic; // +0x98
    WCHKActivitySummaryLogic * _mActivitySummaryLogic; // +0xa0
}
- (void)onServiceInit;
- (id)mWorkoutLogic;
- (id)mActivitySummaryLogic;
- (void)delayInit;
- (void)dealloc;
- (void)exchange:(id)arg1;
- (id)getBlueMgr;
- (void)tryReportBlueState;
- (int)scanProfile;
- (int)connectProfile:(long long)arg1 ProfileType:(int)arg2;
- (void)closeProfile:(long long)arg1;
- (int)getProfileType:(long long)arg1;
- (int)getProfileConnectState:(long long)arg1;
- (int)readPedometerProfileCurPedometerInfo:(long long)arg1;
- (int)readPedometerProfileTarget:(long long)arg1;
- (int)writePedometerProfileTarget:(long long)arg1 Step:(int)arg2;
- (int)scan:(id)arg1;
- (BOOL)hasBlueToothDevice;
- (BOOL)hasM7Device;
- (BOOL)needScanBlueToothDevice;
- (BOOL)canScanBlueToothDevice;
- (unsigned int)getTimingSyncCurrentTime;
- (BOOL)canStartTimingSync;
- (void)startTimingSync;
- (void)stopTimingSyncModeScan;
- (BOOL)canStartAutoSync;
- (void)uploadStepOnLaunch;
- (void)startAutoSyncModeScan;
- (void)autoSyncUploadStepOnLaunch;
- (void)stopAutoSyncModeScan;
- (void)stopScan;
- (void)stopSyncModeDevice:(id)arg1;
- (int)startChannel:(long long)arg1;
- (void)stopChannel:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (id)getDeviceMac:(long long)arg1;
- (int)getChannelState:(long long)arg1;
- (int)getBlueToothState;
- (void)enableBluetooth;
- (BOOL)isMyMobileSupportBLE;
- (BOOL)isDeviceAuthed:(long long)arg1;
- (void)switchDeviceMode:(BOOL)arg1 DID:(long long)arg2 EnterOrExitChatView:(BOOL)arg3;
- (int)startTask:(id)arg1;
- (void)stopTask:(long long)arg1;
- (void)sendWCDeviceBindRequest:(id)arg1 Ticket:(id)arg2;
- (void)sendWCDeviceBindRequest:(id)arg1 Ticket:(id)arg2 SubscribeFlag:(unsigned int)arg3;
- (void)sendWCDeviceUnbindRequest:(id)arg1;
- (void)sendWCDeviceUnbindRequestWithDeviceType:(id)arg1 deviceId:(id)arg2;
- (void)sendWCDeviceGetBoundDevicesRequest;
- (void)batchSearchWCDeviceByDevice:(id)arg1 Filter:(id)arg2 Secene:(int)arg3;
- (void)sendWCDevicesGetOperTicketRequest:(id)arg1 Filter:(id)arg2;
- (void)sendUploadBlueProfileStepReq:(id)arg1 stepCount:(unsigned int)arg2;
- (void)sendUpdateMyDeviceAttrReq:(id)arg1 alias:(id)arg2 isMain:(unsigned int)arg3;
- (void)sendSearchWifiHardDeviceReq:(id)arg1;
- (void)sendSearchBLEHardDevice:(id)arg1;
- (void)sendGetSportDeviceListReq;
- (void)subscribeWifiStateUpdateFor:(id)arg1 ReqType:(unsigned int)arg2;
- (int)getWCDeviceWifiState:(id)arg1;
- (id)dataQueue;
- (void)tryUploadStepOnObserver;
- (void)tryUploadStepOnSourceChange;
- (void)tryUploadM7OrHealthKitStepCount:(BOOL)arg1 scene:(int)arg2;
- (void)showAuthIfNeeded:(BOOL)arg1 scene:(int)arg2;
- (void)p_tryUploadM7OrHealthKitStepCount:(BOOL)arg1 scene:(int)arg2;
- (void)uploadM7OrHealthKitStepCount:(BOOL)arg1 scene:(int)arg2;
- (void)handleWCDeviceChannelStateChanged:(long long)arg1 OldState:(int)arg2 NewState:(int)arg3;
- (void)handleWCDeviceCmdEnd:(long long)arg1 ErrType:(int)arg2 ErrCode:(int)arg3 ErrMsg:(const char *)arg4;
- (id)genInitRespTask:(int)arg1 DID:(unsigned long long)arg2 Seq:(unsigned short)arg3 :(_MmBp__InitRequest *)arg4 :(AutoBuffer *)arg5;
- (void)sendSwitchBackgroundPushWithOpToDevice:(int)arg1;
- (void)sendDecodeErrorToDevice:(long long)arg1;
- (BOOL)checkDeviceReqValidity:(long long)arg1 Seq:(unsigned short)arg2;
- (void)handleWCDeviceReq:(long long)arg1 Seq:(unsigned short)arg2 CmdID:(unsigned short)arg3 Req:(const void *)arg4;
- (void)onDeviceFound:(long long)arg1;
- (void)onDeviceFound:(long long)arg1 WithExtData:(id)arg2;
- (void)onDeviceLost:(long long)arg1;
- (void)onSessionConnected:(long long)arg1;
- (void)onSessionConnectError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionError:(long long)arg1 errorCode:(int)arg2;
- (void)onSessionWrote:(long long)arg1;
- (void)onSessionDataAvailable:(long long)arg1;
- (void)onSessionClosed:(long long)arg1;
- (void)onStateChange:(int)arg1;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(id)arg2;
- (void)onBlueProfilePedometerTargetUpdated:(long long)arg1 Step:(int)arg2;
- (void)onBlueProfilePedometerTargetWrote:(long long)arg1;
- (BOOL)c2objc_createBluetoothSessionByDeviceId:(long long)arg1 andChannelId:(long long)arg2;
- (BOOL)c2objc_connectBluetoothSession:(long long)arg1;
- (BOOL)c2objc_closeBluetoothSession:(long long)arg1;
- (BOOL)c2objc_sendData:(const AutoBuffer *)arg1 toBluetooth:(long long)arg2;
- (void)c2objc_onAccessoryCmdEnd:(long long)arg1 :(int)arg2 :(int)arg3 :(const char *)arg4;
- (void)c2objc_onAccessoryChannelConnectStateChanged:(long long)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (void)c2objc_onAccessoryRecvPack:(long long)arg1 :(unsigned short)arg2 :(unsigned short)arg3 :(const AutoBuffer *)arg4 :(int)arg5;
- (BOOL)c2objc_accessoryPushReq2Buf:(long long)arg1 :(AutoBuffer *)arg2;
- (BOOL)c2objc_accessoryResp2Buf:(long long)arg1 :(AutoBuffer *)arg2;
- (void)__onSessionCreated:(long long)arg1 :(long long)arg2 :(long long)arg3;
- (void)__stopChannel:(long long)arg1 :(long long)arg2;
- (void *)__unpackPbData:(unsigned short)arg1 :(const AutoBuffer *)arg2;
- (long long)__findDeviceIdByChannelId:(long long)arg1;
- (long long)__findDisconnectingDeviceIdByChannelId:(long long)arg1;
- (id)__findDeviceByDeviceId:(long long)arg1;
- (id)__findChannelByChannelId:(long long)arg1;
- (int)__channelConnectStateToChannelState:(int)arg1;
- (id)__getTimeString;
- (void)sendPushDataToDevice:(id)arg1;
- (long long)sendPushData:(id)arg1 ToDevice:(id)arg2 andDeviceType:(id)arg3 withType:(int)arg4;
- (long long)getDidByMacString:(id)arg1 AndConnProtoStr:(id)arg2;
- (long long)getEaDidByMacString:(id)arg1 AndConnProtoStr:(id)arg2;
- (long long)getBleDidByMacString:(id)arg1 AndConnProtoStr:(id)arg2;
- (BOOL)isSendToH5:(id)arg1 ForType:(int)arg2;
- (BOOL)isSendTo3rdServer:(id)arg1 ForType:(int)arg2;
- (void)willResignActive;
- (void)willEnterForeground;
- (void)willSuspend;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 RespTask:(id)arg3 SessionKey:(id)arg4;
- (void)onHandleMsgEnd:(id)arg1 ErrCode:(int)arg2;
- (void)onhandleWifiStateUpdateMsgEnd:(id)arg1 Status:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onGotDeviceStepObject:(id)arg1;
- (unsigned int)getLastM7Step;
- (unsigned int)getLastHealthkitStep;
- (void)onUploadDeviceStepReponse:(id)arg1 stepCount:(unsigned int)arg2 HKStepCount:(unsigned int)arg3 M7StepCount:(unsigned int)arg4 sourceWhiteList:(id)arg5 ErrorCode:(int)arg6;
- (void)onUpdateMyDeviceAttrResponse:(id)arg1 Error:(int)arg2;
- (void)onSendWCDeviceBindResponse:(id)arg1 Ticket:(id)arg2 Error:(id)arg3;
- (void)onSendWCDeviceUnbindResponse:(id)arg1 deviceId:(id)arg2 bAllUnbind:(BOOL)arg3 Error:(id)arg4;
- (void)onWCDeviceGetBoundDevicesResponse:(id)arg1;
- (void)onSearchWCDeviceResponse:(id)arg1;
- (void)onSendSearchWifiHardDevice:(id)arg1 extData:(id)arg2;
- (void)onSendSearchBLEHardDevice:(id)arg1 device:(id)arg2;
- (void)onBatchSearchWCDeviceResponse:(id)arg1 Scene:(int)arg2 ErrorCode:(int)arg3;
- (void)onSendWCDevicesGetOperTicketResponse:(id)arg1 reqTicketList:(id)arg2 ErrorCode:(int)arg3;
- (void)onGetSportDeviceListResponse:(id)arg1 dataSourceFaqURL:(id)arg2 watchDataSourceFaqURL:(id)arg3 ErrorCode:(int)arg4;
- (void)onUploadSportRecordReponse:(id)arg1 success:(int)arg2;
- (void)onWCDeviceAccountUnbind:(id)arg1;
- (void)onWCDeviceAccountBound:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)startSync:(id)arg1;
- (BOOL)getHKAuthorizationStatus;
- (BOOL)getHKWorkoutAuthorizationStatus;
- (BOOL)canUploadWatchData;
- (void)onQueryWorkoutActivityWithObjects:(id)arg1;
- (void)onQuerySummaryActivityWithObjects:(id)arg1;
- (id)m_blueMgr;
- (void)setM_blueMgr:(id)arg1;
- (id)m_devices;
- (void)setM_devices:(id)arg1;
- (id)m_tasks;
- (void)setM_tasks:(id)arg1;
- (id)m_bindingDevices;
- (void)setM_bindingDevices:(id)arg1;
- (int)m_appState;
- (void)setM_appState:(int)arg1;
- (BOOL)m_isScanning;
- (void)setM_isScanning:(BOOL)arg1;
- (unsigned int)m_lastGetBoundDevTime;
- (void)setM_lastGetBoundDevTime:(unsigned int)arg1;
- (void)setDataQueue:(id)arg1;
- (int)m_uploadStepScene;
- (void)setM_uploadStepScene:(int)arg1;
- (void)setMWorkoutLogic:(id)arg1;
- (id)m7Logic;
- (void)setM7Logic:(id)arg1;
- (void)setMActivitySummaryLogic:(id)arg1;
- (void).cxx_destruct;
@end
