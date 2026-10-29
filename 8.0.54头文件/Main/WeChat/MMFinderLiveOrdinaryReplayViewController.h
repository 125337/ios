@interface MMFinderLiveOrdinaryReplayViewController : MMFinderLiveReplayViewController <MMFinderLiveOrdinaryReplayOperationViewDelegate, MMScrollActionSheetDelegate, MMFinderLivePayMgrExt, MMFinderLiveContentVMExt, INetworkStatusMgrExt, WCLiveActionSheetDelegate, RecentForwardScrollViewDelegate>
{
    BOOL _isSeeking; // +0x68
    BOOL _hasReportStartWatching; // +0x69
    WCFinderLiveReplayActionSheet * _settingScrollActionSheet; // +0x70
    WCLiveCountdownToastView * _tryViewCountDownToastView; // +0x78
    id /* block */ _waitingPortraitBlock; // +0x80
    WCFinderLiveReplayReporter * _reporter; // +0x88
    long long _lastOrientation; // +0x90
    unsigned long long _networkType; // +0x98
    NSString * _actionSheetCustomTitle; // +0xa0
    unsigned long long _stopgapStartUnixEpochTime; // +0xa8
    unsigned long long _seekBeginTsInMS; // +0xb0
}
- (id)initWithTaskId:(id)arg1;
- (void)viewDidLoad;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)layoutUI;
- (void)createReplayOperationView;
- (void)updateReplayOperationViewFrame;
- (void)enterLive;
- (void)close;
- (void)onClickScrollActionSheetDelete;
- (void)handleGetLiveInfoDone;
- (void)onPauseReplay;
- (id)ordinaryReplayOperationView;
- (id)navigationController;
- (id)actionSheetCustomTitle;
- (void)reFetchLiveInfoAfterPayForReplay;
- (void)didChangeScreenCapture:(id)arg1;
- (void)mmliveOrdinaryReplayOperationView:(id)arg1 complainMsg:(unsigned long long)arg2 frameId:(id)arg3;
- (void)onMMLiveActionButtonClicked;
- (void)onMMLiveOperationClose;
- (void)onMMLiveOperationMinimize;
- (void)onWillMinimizeByInteractivePan;
- (void)onMMLiveOperationUserHeadImageClicked:(id)arg1 userInfo:(id)arg2;
- (void)onMMLivePaymentTrialCountDown:(unsigned int)arg1;
- (void)onMMLiveOrientationButtonClicked;
- (void)onMMLiveOperationChangeAppSceneButtonClicked;
- (void)onReplayInvalidated;
- (void)onSliderSeekBegin;
- (void)onSliderSeekToTime:(double)arg1 isAtGreateTime:(BOOL)arg2;
- (CGRect)currentMainVideoFrame;
- (void)createTryViewCountDownToastView;
- (void)onMMLiveOperationPayButtonClicked;
- (void)onPurchaseChargeableLiveWithError:(id)arg1 taskId:(id)arg2;
- (void)onBugCoinWithError:(id)arg1 taskId:(id)arg2 referenceId:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)navigateToComplainPage;
- (void)performBlockAfterOrientationPortrait:(id /* block */)arg1;
- (void)checkAndHandleUIOrientationChange;
- (void)performBlockAfterPortrait;
- (void)clearCurrentBlock;
- (unsigned int)initialPlayTime;
- (void)onBecomeActive;
- (void)checkScreenCaptureState;
- (void)changeToOtherAppScene;
- (void)didFinderLiveMoveToNewScene:(id)arg1;
- (void)reportEnterReplay;
- (BOOL)canShowRecentForward;
- (void)openLiveFrameSettingPanel;
- (void)onDoneForwardForForwardViewWithContentVM:(id)arg1 isCertificateType:(BOOL)arg2;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2 isCertificateType:(BOOL)arg3;
- (void)onForwardSharePreConfirmSend:(id)arg1 wxUsernameArray:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)ticketButtonClick;
- (void)onStopgapStateChanged:(unsigned long long)arg1;
- (void)onStopgapLiveInfoPollRequestedWithSuccessBlock:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (id)settingScrollActionSheet;
- (void)setSettingScrollActionSheet:(id)arg1;
- (id)tryViewCountDownToastView;
- (void)setTryViewCountDownToastView:(id)arg1;
- (id /* block */)waitingPortraitBlock;
- (void)setWaitingPortraitBlock:(id /* block */)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (long long)lastOrientation;
- (void)setLastOrientation:(long long)arg1;
- (BOOL)isSeeking;
- (void)setIsSeeking:(BOOL)arg1;
- (unsigned long long)networkType;
- (void)setNetworkType:(unsigned long long)arg1;
- (void)setActionSheetCustomTitle:(id)arg1;
- (unsigned long long)stopgapStartUnixEpochTime;
- (void)setStopgapStartUnixEpochTime:(unsigned long long)arg1;
- (BOOL)hasReportStartWatching;
- (void)setHasReportStartWatching:(BOOL)arg1;
- (unsigned long long)seekBeginTsInMS;
- (void)setSeekBeginTsInMS:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

