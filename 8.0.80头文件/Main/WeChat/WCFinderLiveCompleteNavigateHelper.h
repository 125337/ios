@interface WCFinderLiveCompleteNavigateHelper : NSObject <MMFinderLiveCreateNoticeViewControllerDelegate, MMFinderLiveNoticeDetailsViewControllerDelegate, WCFinderLiveCompleteDiagnoseStateStoring>
{
    BOOL _isAudience; // +0x8
    BOOL _isEnterDiagnose; // +0x9
    BOOL _hasNoticeBeforeCreate; // +0xa
    int _prepareRetNotice; // +0xc
    MMUIViewController * _ownerVC; // +0x10
    MMFinderLiveTask * _liveTask; // +0x18
    id <MMLiveCompleteViewControllerDelegate> _liveCompleteDelegate; // +0x20
    FinderJumpInfo * _lastDiagnoseJumpInfo; // +0x28
    double _enterDiagnoseTime; // +0x30
    WCFinderCreateLiveViewModel * _createLiveVM; // +0x38
    NSString * _prepareErrorStringNotice; // +0x40
    WCFinderLiveCompletePageReporter * _pageReporter; // +0x48
    id /* block */ _onNoticeDataChanged; // +0x50
}
- (void)handleNavigate:(id)arg1;
- (void)closePage;
- (void)openStatisticsPoster;
- (void)openStatisticsPosterWithParams:(id)arg1;
- (void)presentStatisticsPosterWithStatistics:(id)arg1;
- (void)openStatisticsDetail:(id)arg1;
- (void)openStatisticsDetailWithStatistics:(id)arg1 jumpInfo:(id)arg2;
- (void)openStatDetailLegacyWithUnit:(id)arg1 sceneKey:(id)arg2;
- (void)openStatDetailLegacyWithUnit:(id)arg1 headWording:(id)arg2 isIncome:(BOOL)arg3 sceneKey:(id)arg4;
- (void)openHelpPage;
- (void)openHelpPageWithReport:(BOOL)arg1;
- (void)openStatDetailLegacy:(id)arg1;
- (id)resolveJumpInfoFromParams:(id)arg1;
- (id)resolveClosePageInfoFromParams:(id)arg1;
- (void)openCreatorCenter;
- (id)p_decodeBase64Url:(id)arg1;
- (void)openCreatorCenterWithParams:(id)arg1;
- (void)openCreatorCenterWithParams:(id)arg1 withReport:(BOOL)arg2;
- (void)openHighlightListWithParams:(id)arg1;
- (void)openLiveAssistantWithParams:(id)arg1;
- (void)openSendPrivateMsgWithParams:(id)arg1;
- (void)openCreateNotice;
- (void)openCreateNoticeWithHasNotice:(BOOL)arg1;
- (void)openDiagnoseFeed:(id)arg1;
- (void)openDiagnoseFeedWithJumpInfo:(id)arg1;
- (void)openNoticeDetails:(id)arg1;
- (void)openNoticeDetailsWithNoticeInfo:(id)arg1;
- (void)openThankJump:(id)arg1;
- (void)openThankJumpWithFinderJumpInfo:(id)arg1;
- (void)openBanner:(id)arg1;
- (void)openBannerWithActionUrl:(id)arg1 bannerId:(id)arg2;
- (void)didFinishCreateNoticeWithInfo:(id)arg1;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewController:(id)arg1 didFinishExtendedCreateLiveNoticeWithInfo:(id)arg2;
- (void)viewController:(id)arg1 didFinishModLiveNoticeWithInfo:(id)arg2;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)onNoticeCreated:(id)arg1;
- (void)onNoticeCreatedPushDetails:(id)arg1;
- (void)onNoticeCreated:(id)arg1 pushDetails:(BOOL)arg2;
- (void)noticeQRCodePreviewViewControllerDidRevokeNotice:(id)arg1;
- (void)noticeQRCodePreviewViewControllerNoticeTopChanged:(id)arg1 noticeInfo:(id)arg2;
- (void)didFinishModLiveNoticeFromViewController:(id)arg1 noticeInfo:(id)arg2;
- (id)ownerVC;
- (void)setOwnerVC:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)liveCompleteDelegate;
- (void)setLiveCompleteDelegate:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (BOOL)isEnterDiagnose;
- (void)setIsEnterDiagnose:(BOOL)arg1;
- (id)lastDiagnoseJumpInfo;
- (void)setLastDiagnoseJumpInfo:(id)arg1;
- (double)enterDiagnoseTime;
- (void)setEnterDiagnoseTime:(double)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (int)prepareRetNotice;
- (void)setPrepareRetNotice:(int)arg1;
- (id)prepareErrorStringNotice;
- (void)setPrepareErrorStringNotice:(id)arg1;
- (BOOL)hasNoticeBeforeCreate;
- (void)setHasNoticeBeforeCreate:(BOOL)arg1;
- (id)pageReporter;
- (void)setPageReporter:(id)arg1;
- (id /* block */)onNoticeDataChanged;
- (void)setOnNoticeDataChanged:(id /* block */)arg1;
- (void).cxx_destruct;
@end
