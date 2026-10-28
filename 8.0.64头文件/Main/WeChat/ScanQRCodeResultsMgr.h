@interface ScanQRCodeResultsMgr : MMUserService <INetworkStatusMgrExt, BaseScanLogicDelegate, MMServiceProtocol>
{
    NSMutableArray * _offlineResults; // +0x8
    ScanQRCodeLogicController * _scanLogicController; // +0x10
    MMUIViewController * _sourceViewController; // +0x18
}
+ (id)msgScanHistoryItemFromScanResultInfo:(id)arg1;
+ (id)scanResultRepotInfoFromMsgHistoryItem:(id)arg1;
- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)sendMessageForScanResult:(id)arg1;
- (void)retryRequetScanResult:(id)arg1 viewController:(id)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)appendOfflineScanResultInfo:(id)arg1;
- (void)appendReportScanResultInfo:(id)arg1;
- (id)scanCodeOfflineResultDir;
- (void)loadScanCodeOfflineResult;
- (BOOL)saveScanCodeOfflineResult;
- (void)onPushViewContoller:(id)arg1 animated:(BOOL)arg2;
- (void)onStartLoading;
- (void)onStopLoading;
- (void)onShowAlertWording;
- (void)onScanInUnreachableNetworkStatus;
- (void)onScanRequestTimeout;
- (void)reportScanResultActionWithResultInfo:(id)arg1 isRetry:(BOOL)arg2;
- (id)offlineResults;
- (void)setOfflineResults:(id)arg1;
- (id)scanLogicController;
- (void)setScanLogicController:(id)arg1;
- (id)sourceViewController;
- (void)setSourceViewController:(id)arg1;
- (void).cxx_destruct;
@end
