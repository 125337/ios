@interface MMLimitedModeEntryViewController : MMUIViewController <MMLimitedModeConfigListViewDelegate, MMUseCaseCallback, MMLimitedModeBizCellDelegate, MMLimitedModeExt, ILinkEventExt, MMLimitedModeIndependentVerifyViewControllerDelegate, UIScrollViewDelegate, MMLimitedModeEntryProtocolViewControllerDelegate, MMLimitedModeGuardianEntryViewDelegate>
{
    BOOL _isIndependentVerifyFlag; // +0x70
    BOOL _isNeverUse; // +0x71
    BOOL _forceDisplay; // +0x72
    BOOL _isSelected; // +0x73
    long long _scene; // +0x78
    NSString * _ticket; // +0x80
    NSString * _deadlineWording; // +0x88
    id /* block */ _completionBlock; // +0x90
    UIScrollView * _contentScrollView; // +0x98
    UIView * _containerView; // +0xa0
    MMUILabel * _titleLabel; // +0xa8
    UIImageView * _iconImageView; // +0xb0
    MMUILabel * _descLabel; // +0xb8
    MMUILabel * _openTipLabel; // +0xc0
    UIButton * _openButton; // +0xc8
    UIButton * _openButtonNotYet; // +0xd0
    UIButton * _closeButton; // +0xd8
    MMLimitedModeConfigListView * _listView; // +0xe0
    MMLimitedModeGuardianEntryView * _guardianEntryView; // +0xe8
    WCAgreementCheckBox * _agreementCheckBox; // +0xf0
    NSData * _pay_respData; // +0xf8
    NSString * _pay_status; // +0x100
    MMLimitedModeMaskViewView * _maskView; // +0x108
    UIView * _deadlineTipsView; // +0x110
    UILabel * _deadlineTipsLabel; // +0x118
}
- (id)initWithScene:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)tryPopPreviousEntryViewControllerInNavBar;
- (void)handleLimitedModeEntryScenePreEnterDidQuitBlock;
- (void)initUI;
- (void)initBavigationBar;
- (void)updateListViewGradientLayer;
- (void)reloadContent;
- (void)updateUI;
- (id)navigationBarBackgroundColor;
- (id)getTitleLabelText;
- (BOOL)checkLimitedModeEntryScenePreEnter;
- (void)onSelectedAtBizCell:(long long)arg1;
- (void)call:(id)arg1;
- (void)onIndependentPasswordClearSuccessTicket:(id)arg1;
- (BOOL)onMMLimitedModeBizCellDynamicDescFor:(long long)arg1;
- (id)onMMLimitedModeBizCellDescFor:(long long)arg1;
- (BOOL)onMMLimitedModeBizCellLoadingFor:(long long)arg1;
- (void)onOpenButtonClick;
- (void)onCloseButtonClick;
- (void)onBack;
- (void)onMoreAction;
- (void)doModifyIndependentPwdVerify;
- (void)doClearIndependentPwdVerify;
- (void)doSetIndependent;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLimitedModeChanged;
- (void)deleteAllAndReloadContent;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onChangeLimitedModeFail;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onClickLimitedModeEntryProtocolAgreeButton;
- (long long)preferredStatusBarStyle;
- (id)getViewController;
- (void)onClickSetLimitedModeGuardian;
- (id)dotWithMultilineIntros:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (BOOL)isIndependentVerifyFlag;
- (void)setIsIndependentVerifyFlag:(BOOL)arg1;
- (BOOL)isNeverUse;
- (void)setIsNeverUse:(BOOL)arg1;
- (id)deadlineWording;
- (void)setDeadlineWording:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (BOOL)forceDisplay;
- (void)setForceDisplay:(BOOL)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)openTipLabel;
- (void)setOpenTipLabel:(id)arg1;
- (id)openButton;
- (void)setOpenButton:(id)arg1;
- (id)openButtonNotYet;
- (void)setOpenButtonNotYet:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)listView;
- (void)setListView:(id)arg1;
- (id)guardianEntryView;
- (void)setGuardianEntryView:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)agreementCheckBox;
- (void)setAgreementCheckBox:(id)arg1;
- (id)pay_respData;
- (void)setPay_respData:(id)arg1;
- (id)pay_status;
- (void)setPay_status:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)deadlineTipsView;
- (void)setDeadlineTipsView:(id)arg1;
- (id)deadlineTipsLabel;
- (void)setDeadlineTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
