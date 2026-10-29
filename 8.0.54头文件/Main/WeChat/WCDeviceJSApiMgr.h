@interface WCDeviceJSApiMgr : MMUserService <IWCLanDeviceMgrExt, MMServiceProtocol, WCDeviceJSApiBatchSearchLogicHelpDelegate, IWCDeviceAccountMgrExt, IWCDeviceBrandMgrExt>
{
    BOOL m_hasInit; // +0x8
    BOOL m_hasInitLan; // +0x9
    BOOL m_hasStartScan; // +0xa
    BOOL m_hasStartScanLan; // +0xb
    int m_enterScence; // +0xc
    MMUIViewController<WXCustomWebViewControllerProtocol> * m_currWebViewController; // +0x10
    NSString * m_brandUserName; // +0x18
    NSMutableArray * m_deviceSearchedList; // +0x20
    WCDeviceJSApiBatchSearchLogicHelp * m_batchSearchDeviceLogicHelp; // +0x28
    NSMutableArray * m_deviceTicketList; // +0x30
    NSMutableArray * m_deviceConnectStateList; // +0x38
    long long m_sendDataJsTaskId; // +0x40
    JSEvent * m_sendDataJsEvent; // +0x48
    NSMutableDictionary * m_directions; // +0x50
    NSMutableDictionary * m_taskEventPair; // +0x58
}
- (void)onServiceInit;
- (BOOL)isLanType:(id)arg1;
- (void)__resetHdJsSession;
- (void)initWCDeviceLibResource;
- (int)getDeviceState:(long long)arg1;
- (void)notifyWebViewConnectStateChange:(id)arg1 connectState:(int)arg2;
- (void)notifyWebViewBindStateChange:(id)arg1 bindState:(BOOL)arg2;
- (id)exchangeDeviceState2Str:(int)arg1;
- (void)closeWXDeviceLibForBlue;
- (void)closeWXDeviceLibForLan;
- (void)closeWXDeviceLibResource;
- (void)startScanDeviceForLan:(id)arg1;
- (void)startScanDeviceForBlue:(id)arg1;
- (void)stopScanDeviceForLan:(id)arg1;
- (void)stopScanDeviceForBlue:(id)arg1;
- (void)connectDeviceForLan:(id)arg1 CallBack:(id)arg2;
- (void)connectDeviceForBlue:(id)arg1 CallBack:(id)arg2;
- (void)disConnectDeviceForLan:(id)arg1 CallBack:(id)arg2;
- (void)disConnectDeviceForBlue:(id)arg1 CallBack:(id)arg2;
- (void)getDeviceInfosForLan:(id)arg1;
- (void)getDeviceInfosForBlue:(id)arg1;
- (void)sendDataToLan:(id)arg1 ToDevice:(id)arg2 CallBack:(id)arg3;
- (void)sendDataToBlue:(id)arg1 ToDevice:(id)arg2 CallBack:(id)arg3;
- (void)openWXDeviceLib:(id)arg1 CallBack:(id)arg2;
- (void)closeWXDeviceLib:(id)arg1;
- (void)startScanDevice:(id)arg1;
- (void)stopScanDevice:(id)arg1;
- (void)connectDevice:(id)arg1 CallBack:(id)arg2;
- (void)disConnectDevice:(id)arg1 CallBack:(id)arg2;
- (void)getDeviceTicket:(id)arg1 operType:(unsigned int)arg2 CallBack:(id)arg3;
- (void)getDeviceInfos:(id)arg1;
- (void)sendData:(id)arg1 ToDevice:(id)arg2 CallBack:(id)arg3;
- (void)setSendDataDirection:(unsigned int)arg1 ForDevice:(id)arg2;
- (BOOL)isSendDataDirectionSet:(id)arg1;
- (BOOL)isSendDataDirectionToH5:(id)arg1;
- (BOOL)isSendDataDirectionToServer:(id)arg1;
- (id)getExtraInfoUserName:(id)arg1;
- (BOOL)canOpenWXDeviceLib:(id)arg1;
- (BOOL)canHdSendData:(id)arg1;
- (void)addNewSearchDeviceWithDid:(long long)arg1 extData:(id)arg2;
- (void)onWCDeviceJSApiBatchSearchResp:(id)arg1;
- (void)notifyWebViewScanResult:(id)arg1;
- (void)notifyWebViewScanResultForLan:(id)arg1;
- (void)onWCDeviceSendDataEnd:(long long)arg1 ErrType:(int)arg2 ErrCode:(int)arg3 ErrMsg:(const char *)arg4;
- (void)onWCDeviceFoundForJSAPI:(long long)arg1;
- (void)onWCDeviceFoundAddExtData:(long long)arg1 extData:(id)arg2;
- (void)handleWCDeviceConnectStateChanged:(long long)arg1 newConnectState:(int)arg2;
- (void)onWCDeviceLost:(long long)arg1;
- (void)onWCDeviceChannelStateChanged:(long long)arg1 :(int)arg2 :(int)arg3;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(BOOL *)arg3;
- (void)onWCDeviceInitEnd:(int)arg1 DID:(long long)arg2 isHandled:(BOOL *)arg3;
- (void)onWCDeviceBlueToothStateChanged:(int)arg1;
- (void)onSendWCDevicesGetOperTicketResponse:(id)arg1 reqTicketList:(id)arg2 ErrorCode:(int)arg3;
- (void)onWCDeviceSendDataToWebView:(id)arg1 data:(id)arg2;
- (void)onWifiHardDeviceSearch:(id)arg1 respData:(id)arg2 ExtData:(id)arg3;
- (void)onReceiveWCLanDeviceDisc:(id)arg1;
- (void)onTaskPerformed:(long long)arg1 ErrCode:(int)arg2;
- (void)onSendDataToWCLanDevice:(long long)arg1 ErrCode:(int)arg2;
- (void)onWCLanDeviceConnectStateNotify:(id)arg1 DeviceId:(id)arg2 StateCode:(int)arg3;
- (void)onWCLanDeviceReceiveNotify:(id)arg1 DeviceId:(id)arg2 Dictionary:(id)arg3;
- (void)onWCDeviceAccountUnbind:(id)arg1;
- (void)onWCDeviceAccountBound:(id)arg1;
- (id)m_currWebViewController;
- (void)setM_currWebViewController:(id)arg1;
- (id)m_brandUserName;
- (void)setM_brandUserName:(id)arg1;
- (BOOL)m_hasInit;
- (void)setM_hasInit:(BOOL)arg1;
- (BOOL)m_hasInitLan;
- (void)setM_hasInitLan:(BOOL)arg1;
- (BOOL)m_hasStartScan;
- (void)setM_hasStartScan:(BOOL)arg1;
- (BOOL)m_hasStartScanLan;
- (void)setM_hasStartScanLan:(BOOL)arg1;
- (id)m_deviceSearchedList;
- (void)setM_deviceSearchedList:(id)arg1;
- (id)m_batchSearchDeviceLogicHelp;
- (void)setM_batchSearchDeviceLogicHelp:(id)arg1;
- (id)m_deviceTicketList;
- (void)setM_deviceTicketList:(id)arg1;
- (id)m_deviceConnectStateList;
- (void)setM_deviceConnectStateList:(id)arg1;
- (long long)m_sendDataJsTaskId;
- (void)setM_sendDataJsTaskId:(long long)arg1;
- (id)m_sendDataJsEvent;
- (void)setM_sendDataJsEvent:(id)arg1;
- (id)m_directions;
- (void)setM_directions:(id)arg1;
- (int)m_enterScence;
- (void)setM_enterScence:(int)arg1;
- (id)m_taskEventPair;
- (void)setM_taskEventPair:(id)arg1;
- (void).cxx_destruct;
@end

