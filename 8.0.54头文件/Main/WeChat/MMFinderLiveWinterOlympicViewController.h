@interface MMFinderLiveWinterOlympicViewController : MMFinderPivotLiveViewController <MMFinderLiveWinterOlympicLogicDelegate, MMFinderLiveWinterOlympicOperationViewDelegate, ForwardMessageLogicDelegate, RecentForwardScrollViewDelegate>
{
    BOOL _shouldForcePortrait; // +0x68
    MMFinderLiveOlympicsReserveConfirmView * _reserveConfirmView; // +0x70
    FinderLiveNoticeInfo * _liveNoticeInfo; // +0x78
    WCUIAlertView * _currAlertView; // +0x80
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)fetchReserveInfo;
- (BOOL)showReserveConfirmView:(id /* block */)arg1;
- (void)onShowAlertFromAppMsg:(id)arg1;
- (void)onShowToastFromAppMsg:(id)arg1;
- (void)initLiveLogic;
- (id)createOperationViewWithTaskId:(id)arg1;
- (void)close;
- (void)superClose;
- (void)onKickedOut;
- (void)onShowErrorPage:(id)arg1;
- (void)onShowForbidLiveViewWithError:(id)arg1;
- (void)showPrivateJoinBlockView;
- (id)getPollingFetchRequestBufferModelForCmdIDUpdateBulletScreen;
- (id)activityTask;
- (id)activityTaskId;
- (id)winterOlympicsLiveView;
- (id)winterOlympicOperationView;
- (void)onLiveTaskLandScapeEnabledChanged:(id)arg1;
- (void)onLiveWinterOlympicLogicTorchInfoUpdated:(id)arg1;
- (void)onMMFinderLiveWinterOlympicOperationViewCertViewClose:(id)arg1;
- (void)onCertificateShowing;
- (void)onCertificateHidden;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (BOOL)shouldForcePortrait;
- (id)reserveConfirmView;
- (void)setReserveConfirmView:(id)arg1;
- (id)liveNoticeInfo;
- (void)setLiveNoticeInfo:(id)arg1;
- (id)currAlertView;
- (void)setCurrAlertView:(id)arg1;
- (void).cxx_destruct;
@end

