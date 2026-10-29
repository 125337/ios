@interface WeDropReceiverViewController : MMUIViewController <WeDropReceiveConnectingViewDelegate, WeDropReceiveConnectedViewDelegate, WeDropReceiveChooseDestinationViewDelegate, WeDropReceiveFailedViewDelegate, WeDropReceiveReceivingViewDelegate, WeDropReceiveReceivedViewDelegate, WeDropReceiveRetryViewDelegate, WeDropReceiveFullscreenViewProvider>
{
    MigrateMsgUserInfo * _userInfo; // +0x70
    NSString * _hotspotSSID; // +0x78
    UIImage * _thumbnail; // +0x80
    NSMutableArray * _receivingFileInfo; // +0x88
    NSArray * _contentInfo; // +0x90
    UIImage * _thumbImg; // +0x98
    NSString * _filePath; // +0xa0
    WeDropReceiveConnectingView * _connectingView; // +0xa8
    WeDropReceiveConnectedView * _connectedView; // +0xb0
    WeDropReceiveChooseDestinationView * _chooseDestinationView; // +0xb8
    WeDropReceiveFailedView * _failedView; // +0xc0
    WeDropReceiveReceivingView * _receivingView; // +0xc8
    WeDropReceiveReceivedView * _receivedView; // +0xd0
    WeDropReceiveRetryView * _retryView; // +0xd8
    id <WeDropReceiveConnectCallback> _connectCallback; // +0xe0
    id <WeDropReceiveFileDestinationHelper> _fileHelper; // +0xe8
    MMTipsViewController * _showingAlert; // +0xf0
    WeDropReportObj * _reportObj; // +0xf8
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (id)visibleStateView;
- (id)getMainScrollView;
- (void)updateLayouts;
- (void)onStartConnectToAWDL:(id)arg1;
- (void)onStartConnectToHotsport:(id)arg1 hotspotSSID:(id)arg2;
- (void)onConnectionFailed:(unsigned long long)arg1 callback:(id)arg2;
- (void)onConnectedAndWaitReceive:(id)arg1;
- (void)onPreapreReceiveWithThumbnail:(id)arg1 andSendInfos:(id)arg2;
- (void)onNeedChoostFileDestination:(id)arg1;
- (void)onChoostFileDestinationFailed;
- (void)onReceiveWithProgress:(double)arg1;
- (void)onAllFilesReceived:(id)arg1;
- (void)onReceiveEndedWithStatus:(unsigned long long)arg1;
- (void)onStopConnecting;
- (void)onExitWhileConnected;
- (void)onExitWhileChooseDestination;
- (void)onChooseDestination;
- (void)onConfirmEnd;
- (void)onStopReceiving;
- (void)onFinishReceive;
- (void)onJumpToAlbum;
- (void)onJumpToFileApp;
- (void)onCancelRetryTapped;
- (void)onRetryTapped;
- (void)onRealExit;
- (void)showExitAlertWithTitle:(id)arg1 cancelBtnTitle:(id)arg2;
- (void)setupConnectingView;
- (void)setupConnectedView;
- (void)setupChooseDestinationView;
- (void)setupFailedView:(id)arg1 desc:(id)arg2;
- (void)setupReceivingView;
- (void)setupReceivedView;
- (void)setupRetryView:(id)arg1 desc:(id)arg2;
- (void)resetAllViews;
- (void)showStateView:(id)arg1;
- (void)configureConnectingView;
- (void)configureConnectedView;
- (void)configureChooseDestinationView;
- (void)configureFailedView;
- (void)configureReceivingView;
- (void)configureReceivedView;
- (void)configureRetryView;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)hotspotSSID;
- (void)setHotspotSSID:(id)arg1;
- (id)thumbnail;
- (void)setThumbnail:(id)arg1;
- (id)receivingFileInfo;
- (void)setReceivingFileInfo:(id)arg1;
- (id)contentInfo;
- (void)setContentInfo:(id)arg1;
- (id)thumbImg;
- (void)setThumbImg:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)connectingView;
- (void)setConnectingView:(id)arg1;
- (id)connectedView;
- (void)setConnectedView:(id)arg1;
- (id)chooseDestinationView;
- (void)setChooseDestinationView:(id)arg1;
- (id)failedView;
- (void)setFailedView:(id)arg1;
- (id)receivingView;
- (void)setReceivingView:(id)arg1;
- (id)receivedView;
- (void)setReceivedView:(id)arg1;
- (id)retryView;
- (void)setRetryView:(id)arg1;
- (id)connectCallback;
- (void)setConnectCallback:(id)arg1;
- (id)fileHelper;
- (void)setFileHelper:(id)arg1;
- (id)showingAlert;
- (void)setShowingAlert:(id)arg1;
- (id)reportObj;
- (void)setReportObj:(id)arg1;
- (void).cxx_destruct;
@end
