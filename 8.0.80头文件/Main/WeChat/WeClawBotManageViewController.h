@interface WeClawBotManageViewController : MMAcceptAgreementBaseViewController <IBotContactMgrExt, WeClawBotStatusLogicDelegate>
{
    UIView * m_termsOfUseFooterView; // +0x70
    BOOL m_isFetchingFunctionInfo; // +0x78
    BOOL _requestStatusOnLoad; // +0x79
    BOOL _hasTermsOfUseContentInset; // +0x7a
    long long _versionAlertType; // +0x80
    NSString * _versionAlertTitle; // +0x88
    NSString * _statusUsername; // +0x90
    WeClawBotStatusInfo * _initialStatusInfo; // +0x98
    WeClawBotStatusLogic * _statusLogic; // +0xa0
    double _contentInsetBottomBeforeTermsOfUse; // +0xa8
}
- (id)initWithUsername:(id)arg1 initialStatusInfo:(id)arg2 requestStatus:(BOOL)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)updateStatusInfoFromCgi:(id)arg1;
- (void)startStatusLogic;
- (void)clawBotStatusLogicDidUpdate:(id)arg1 fromNotify:(BOOL)arg2;
- (BOOL)updateVersionAlertFromStatusLogic;
- (void)reloadTableData;
- (id)genHeaderView;
- (BOOL)shouldShowVersionAlert;
- (id)genVersionAlertView;
- (id)genVersionAlertLabelWithText:(id)arg1 font:(id)arg2 width:(double)arg3;
- (id)genVersionAlertButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (void)copyUpgradeCommand;
- (void)forwardUpgradeCommand;
- (id)genClawBotEntryTitleLabel:(id)arg1 cellWidth:(double)arg2;
- (void)makeClawBotEntryCell:(id)arg1 CellInfo:(id)arg2;
- (id)genConnectNewOpenClawFooterView;
- (void)reloadTermsOfUseFooterView;
- (id)genTermsOfUseButton;
- (void)openClawBotEntry;
- (void)connectNewOpenClaw;
- (void)showTermsOfUse:(id)arg1;
- (void)tryFetchClawBotFunctionInfo;
- (void)onGetFunctionInfoSuccess:(id)arg1;
- (void)onGetFunctionInfoFail:(int)arg1;
- (long long)versionAlertType;
- (void)setVersionAlertType:(long long)arg1;
- (id)versionAlertTitle;
- (void)setVersionAlertTitle:(id)arg1;
- (id)statusUsername;
- (void)setStatusUsername:(id)arg1;
- (id)initialStatusInfo;
- (void)setInitialStatusInfo:(id)arg1;
- (BOOL)requestStatusOnLoad;
- (void)setRequestStatusOnLoad:(BOOL)arg1;
- (id)statusLogic;
- (void)setStatusLogic:(id)arg1;
- (BOOL)hasTermsOfUseContentInset;
- (void)setHasTermsOfUseContentInset:(BOOL)arg1;
- (double)contentInsetBottomBeforeTermsOfUse;
- (void)setContentInsetBottomBeforeTermsOfUse:(double)arg1;
- (void).cxx_destruct;
@end
