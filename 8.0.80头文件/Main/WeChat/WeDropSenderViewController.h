@interface WeDropSenderViewController : MMUIViewController <WeDropNetworkExt, WeDropSendFirstInViewDelegate, WeDropSendConnectingViewDelegate, WeDropSendConnectedViewDelegate, WeDropSendLocalNetworkNoPermissionViewDelegate, WeDropSendWifiNotOnViewDelegate, WeDropSendFailedViewDelegate, WeDropSendSendingViewDelegate, WeDropSendSentViewDelegate, WeDropSendWaitingRemoteDestinationViewDelegate, WeDropSendRetryViewDelegate, WeDropSendViewProvider>
{
    MigrateMsgUserInfo * _peerInfo; // +0x70
    NSString * _hotspotSSID; // +0x78
    NSMutableArray * _lastSendInfos; // +0x80
    UIImage * _thumbnail; // +0x88
    NSMutableArray * _sendingFileInfos; // +0x90
    WeDropSendFirstInView * _firstInView; // +0x98
    WeDropSendWifiNotOnView * _wifiNotOnView; // +0xa0
    WeDropSendLocalNetworkNoPermissionView * _localNetworkErrView; // +0xa8
    WeDropSendRetryView * _retryView; // +0xb0
    WeDropSendConnectingView * _connectingView; // +0xb8
    WeDropSendConnectedView * _connectedView; // +0xc0
    WeDropSendSendingView * _sendingView; // +0xc8
    WeDropSendSentView * _sentView; // +0xd0
    WeDropSendWaitingRemoteDestinationView * _waitingDestView; // +0xd8
    WeDropSendFailedView * _failedView; // +0xe0
    MMTipsViewController * _showingAlert; // +0xe8
    id <WeDropSendFirstInCallback> _firstInCallback; // +0xf0
    id <WeDropSendCheckPermissionCallback> _permissionCheckCallback; // +0xf8
    id <WeDropConnectionCallback> _connectCallback; // +0x100
    id <WeDropSelectFileHelper> _filePicker; // +0x108
    WeDropReportObj * _reportObj; // +0x110
    long long _displayedStatus; // +0x118
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (id)visibleStateView;
- (id)getMainScrollView;
- (void)updateLayouts;
- (void)onFinishAndDismiss:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)showDismissAlertWithTitle:(id)arg1 cancelDesc:(id)arg2;
- (void)setUpFirstInView;
- (void)setupConnectingView;
- (void)setupConnectedView;
- (void)setupLocalNetworkErrorView;
- (void)setupWifiNotOnView;
- (void)setupQRResultFailView:(id)arg1 desc:(id)arg2;
- (void)setupSendFailView:(id)arg1 desc:(id)arg2;
- (void)setupSendingView;
- (void)setupSentView;
- (void)setupWaitDestView;
- (void)setupRetryViewWithTitle:(id)arg1 desc:(id)arg2;
- (void)updateState:(long long)arg1;
- (void)configureUIForState:(long long)arg1;
- (void)resetAllViews;
- (void)configureSenderStateFirstIn;
- (void)configureSenderStateConnecting;
- (void)configurSenderStateConnected;
- (void)configurSenderStateConnectFail;
- (void)configurSenderStateSending;
- (void)configureSenderWaitDestination;
- (void)configurSenderStateSendSuccess;
- (void)configurSenderStateSendFail;
- (void)configureSenderStateInitFail;
- (void)configureWifiNotOn;
- (void)configureLocalNetworkError;
- (void)onConfirmFirstIn;
- (void)onCancelFirstIn;
- (void)onStopConnecting;
- (void)onStopSelectFile;
- (void)selectAlbums;
- (void)selectFiles;
- (void)selectLastSend;
- (void)onCancelWhileWifiNotOn;
- (void)onCancelWhileLocalNetworkNotGranted;
- (void)onConfirmEnd;
- (void)onStopSending;
- (void)onFinishSent;
- (void)onStopWaitingDest;
- (void)onRetryTapped;
- (void)onCancelRetryTapped;
- (void)onEnterFirstIn:(id)arg1;
- (void)onCheckPermisssionFailed:(unsigned long long)arg1 callback:(id)arg2;
- (void)onStartConnectToAWDL:(id)arg1;
- (void)onStartCheckingPermission:(id)arg1;
- (void)onStartConnectToHotsport:(id)arg1 hotspotSSID:(id)arg2;
- (void)onConnectionFailed:(unsigned long long)arg1 callback:(id)arg2;
- (void)onStartSelectFile:(id)arg1 lastSendInfo:(id)arg2;
- (void)onPreapreSendWithThumbnail:(id)arg1 andSendInfos:(id)arg2;
- (void)onWaitingRemoteChooseSavePathWithSendInfos:(id)arg1;
- (void)onSentWithProgress:(double)arg1;
- (void)onAllFilesSent;
- (void)onSendEndedWithStatus:(unsigned long long)arg1;
- (void)onLastSentFilesPartMissing:(id)arg1;
- (void)onLastSentFilesAllMissing;
- (id)peerInfo;
- (void)setPeerInfo:(id)arg1;
- (id)hotspotSSID;
- (void)setHotspotSSID:(id)arg1;
- (id)lastSendInfos;
- (void)setLastSendInfos:(id)arg1;
- (id)thumbnail;
- (void)setThumbnail:(id)arg1;
- (id)sendingFileInfos;
- (void)setSendingFileInfos:(id)arg1;
- (id)firstInView;
- (void)setFirstInView:(id)arg1;
- (id)wifiNotOnView;
- (void)setWifiNotOnView:(id)arg1;
- (id)localNetworkErrView;
- (void)setLocalNetworkErrView:(id)arg1;
- (id)retryView;
- (void)setRetryView:(id)arg1;
- (id)connectingView;
- (void)setConnectingView:(id)arg1;
- (id)connectedView;
- (void)setConnectedView:(id)arg1;
- (id)sendingView;
- (void)setSendingView:(id)arg1;
- (id)sentView;
- (void)setSentView:(id)arg1;
- (id)waitingDestView;
- (void)setWaitingDestView:(id)arg1;
- (id)failedView;
- (void)setFailedView:(id)arg1;
- (id)showingAlert;
- (void)setShowingAlert:(id)arg1;
- (id)firstInCallback;
- (void)setFirstInCallback:(id)arg1;
- (id)permissionCheckCallback;
- (void)setPermissionCheckCallback:(id)arg1;
- (id)connectCallback;
- (void)setConnectCallback:(id)arg1;
- (id)filePicker;
- (void)setFilePicker:(id)arg1;
- (id)reportObj;
- (void)setReportObj:(id)arg1;
- (long long)displayedStatus;
- (void)setDisplayedStatus:(long long)arg1;
- (void).cxx_destruct;
@end
