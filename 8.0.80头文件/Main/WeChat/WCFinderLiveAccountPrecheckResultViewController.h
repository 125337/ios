@interface WCFinderLiveAccountPrecheckResultViewController : MMAcceptAgreementBaseViewController <MMLiveNameVerifyViewControllerDelegate, MMWebViewDelegate, WCFinderLiveCompleteAgreementResultViewControllerDelegate>
{
    BOOL _shouldShowOneTimeAgreementView; // +0x70
    BOOL _hasExtraVerifyItem; // +0x71
    BOOL _isNameVerifiedSucceed; // +0x72
    BOOL _isDoneButtonClicked; // +0x73
    BOOL _isExitOnPolicyDone; // +0x74
    BOOL _cancelPrecheckProcess; // +0x75
    unsigned int _userFlag; // +0x78
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x80
    MMTableViewInfo * m_tableViewInfo; // +0x88
    MMTableView * m_tableView; // +0x90
    SpamRisk * _spamJumpInfo; // +0x98
    id /* block */ _enableCreateLiveCallback; // +0xa0
    id /* block */ _cancelledCallback; // +0xa8
    id /* block */ _delayEnableCreateLiveCallback; // +0xb0
    MMFinderLiveTaskId * _liveTaskId; // +0xb8
    SecurityInfoAuthrizeLogic * _authLogic; // +0xc0
    NSString * _realnameAuthUrl; // +0xc8
    UIButton * _doneButton; // +0xd0
    NSMutableDictionary * _m_cacheHeightDic; // +0xd8
    double _m_tableContentHeight; // +0xe0
}
- (id)initWithliveTaskId:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)layoutDoneButton;
- (BOOL)showOneTimeAgreementView;
- (void)showForbidLiveViewWithTitle:(id)arg1 withMessage:(id)arg2;
- (id)finderLiveTask;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)reloadTableData;
- (void)reloadFootView;
- (void)layoutHeaderView;
- (void)makePreCheckResultItem:(id)arg1 cellInfo:(id)arg2;
- (void)onPreCheckResultItemForRealNameVerifyClicked;
- (void)onPreCheckResultItemForFinderRealNameVerifyClicked;
- (void)onPreCheckResultItemForFinderRealNameNewVerifyClicked;
- (void)onPreCheckResultItemForWepayVerifyClicked;
- (void)onPreCheckResultItemForAgeVerifyClicked;
- (void)onPreCheckResultItemForOtherVerifyClicked;
- (void)preCheckResultItemForFaceVerifyClicked;
- (BOOL)isLiveNameVerifiedFail;
- (BOOL)isLiveAgeVerifiedFail;
- (void)startFinderRealNameVerify;
- (void)getSecurityInfoAuthTokenWith:(id)arg1;
- (void)uploadFinderRealNameToken:(id)arg1;
- (void)startFinderRealNameNewVerify;
- (void)uploadFinderRealNameNewCode:(id)arg1;
- (void)OnDoneButtonClicked;
- (void)proceedCreateLivePrecess;
- (void)showPolicyWebView;
- (void)onBackButtonClicked:(id)arg1;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)onMMLiveNameVerifyViewControllerNameVerifySucceeded:(long long)arg1;
- (void)onMMLiveNameVerifyViewControllerNameVerifyFailed:(long long)arg1;
- (void)reportExpose;
- (void)reportVerifyExpose:(unsigned long long)arg1;
- (void)updateUIOnVerfiySuccess;
- (void)updateUserFlagOnRealnameDoneIfNeed;
- (void)createLivePrepareWithCompleteBlock:(id /* block */)arg1;
- (void)onUpdateUserFlagFail;
- (void)_internalCancelPrecheck;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)spamJumpInfo;
- (void)setSpamJumpInfo:(id)arg1;
- (id /* block */)enableCreateLiveCallback;
- (void)setEnableCreateLiveCallback:(id /* block */)arg1;
- (id /* block */)cancelledCallback;
- (void)setCancelledCallback:(id /* block */)arg1;
- (id /* block */)delayEnableCreateLiveCallback;
- (void)setDelayEnableCreateLiveCallback:(id /* block */)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)authLogic;
- (void)setAuthLogic:(id)arg1;
- (unsigned int)userFlag;
- (void)setUserFlag:(unsigned int)arg1;
- (id)realnameAuthUrl;
- (void)setRealnameAuthUrl:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)m_cacheHeightDic;
- (void)setM_cacheHeightDic:(id)arg1;
- (double)m_tableContentHeight;
- (void)setM_tableContentHeight:(double)arg1;
- (BOOL)shouldShowOneTimeAgreementView;
- (void)setShouldShowOneTimeAgreementView:(BOOL)arg1;
- (BOOL)hasExtraVerifyItem;
- (void)setHasExtraVerifyItem:(BOOL)arg1;
- (BOOL)isNameVerifiedSucceed;
- (void)setIsNameVerifiedSucceed:(BOOL)arg1;
- (BOOL)isDoneButtonClicked;
- (void)setIsDoneButtonClicked:(BOOL)arg1;
- (BOOL)isExitOnPolicyDone;
- (void)setIsExitOnPolicyDone:(BOOL)arg1;
- (BOOL)cancelPrecheckProcess;
- (void)setCancelPrecheckProcess:(BOOL)arg1;
- (void).cxx_destruct;
@end
