@interface MMFinderLiveCreateLiveLogic : NSObject <MMFinderLiveStartLivePanelDelegate, MMFinderLivePreviewCameraViewControllerDelegate, WCFinderCreateCoordinatorDelegate, MMFinderLiveAgreementViewDelegate, ILinkEventExt>
{
    BOOL _isCreateLivePrepareReturned; // +0x8
    BOOL _enableCustomStart; // +0x9
    BOOL _isUsingCamera; // +0xa
    BOOL _hasFinderAccount; // +0xb
    BOOL _isRealnameVerified; // +0xc
    BOOL _hasReportedEnter; // +0xd
    unsigned int _scene; // +0x10
    UINavigationController * _navigationController; // +0x18
    WCFinderCreateLiveViewModel * _createLiveVM; // +0x20
    WCFinderCreateCoordinator * _createCoordinator; // +0x28
    MMFinderLiveAgreementLogic * _agreementLogic; // +0x30
    NSString * _prepareErrorString; // +0x38
    NSString * _descriptionPromptWording; // +0x40
    MMLiveTaskId * _taskId; // +0x48
    UIView * _activeRenderTargetView; // +0x50
    MMFinderLiveAgreementView * _agreementView; // +0x58
}
- (id)initWithScene:(unsigned int)arg1 navigationController:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)clearAndExit;
- (void)startCreateLiveProcess;
- (void)onUserPrepared;
- (void)startCreateLivePrepare;
- (void)startLoadingProtectionTimer;
- (void)onCreateLiveVMPrepared;
- (void)prepareModelAndStartLive;
- (void)updateEnterLiveModeWithParamsModel:(id)arg1;
- (void)realStartLiveWithParamsModel:(id)arg1;
- (void)openCreateLiveViewWithTaskId:(id)arg1;
- (void)openLiveViewController;
- (void)onStartLivePanelClickBeauty;
- (void)onStartLivePanelClickLeave;
- (void)onStartLivePanelClickStart:(BOOL)arg1;
- (void)onStartLivePanelClickCamera;
- (void)onPreviewCameraVCClickLeave;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)finderCreateAccountConfirmed:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)onLiveAgreementChecked;
- (void)onLiveAgreementDismissed;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(BOOL)arg3;
- (id)liveTask;
- (BOOL)isInLiveHomePageVC;
- (BOOL)shouldSkipCameraAccessCheckOnEnterCreateLivePage;
- (id)activeRenderTargetView;
- (id)agreementLogic;
- (id)agreementView;
- (void)reportSquareCreateLiveAction:(unsigned long long)arg1;
- (void)reportSquareChatElement:(unsigned int)arg1 isExpose:(BOOL)arg2;
- (unsigned long long)pullType;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)createLiveVM;
- (void)setCreateLiveVM:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (void)setAgreementLogic:(id)arg1;
- (id)prepareErrorString;
- (void)setPrepareErrorString:(id)arg1;
- (id)descriptionPromptWording;
- (void)setDescriptionPromptWording:(id)arg1;
- (BOOL)isCreateLivePrepareReturned;
- (void)setIsCreateLivePrepareReturned:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)enableCustomStart;
- (void)setEnableCustomStart:(BOOL)arg1;
- (void)setActiveRenderTargetView:(id)arg1;
- (void)setAgreementView:(id)arg1;
- (BOOL)isUsingCamera;
- (void)setIsUsingCamera:(BOOL)arg1;
- (BOOL)hasFinderAccount;
- (void)setHasFinderAccount:(BOOL)arg1;
- (BOOL)isRealnameVerified;
- (void)setIsRealnameVerified:(BOOL)arg1;
- (BOOL)hasReportedEnter;
- (void)setHasReportedEnter:(BOOL)arg1;
- (void).cxx_destruct;
@end
