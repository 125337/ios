@interface MMLimitedModeEntryViewController : MMUIViewController <MMLimitedModeConfigListViewDelegate, MMUseCaseCallback, MMLimitedModeBizCellDelegate, MMLimitedModeExt, ILinkEventExt, MMLimitedModeIndependentVerifyViewControllerDelegate, UIScrollViewDelegate, MMLimitedModeEntryProtocolViewControllerDelegate, MMLimitedModeGuardianEntryViewDelegate>
{
    BOOL _isIndependentVerifyFlag; // +0x68
    BOOL _isNeverUse; // +0x69
    BOOL _isSelected; // +0x6a
    long long _scene; // +0x70
    NSString * _ticket; // +0x78
    UIScrollView * _contentScrollView; // +0x80
    UIView * _containerView; // +0x88
    MMUILabel * _titleLabel; // +0x90
    UIImageView * _iconImageView; // +0x98
    MMUILabel * _descLabel; // +0xa0
    MMUILabel * _openTipLabel; // +0xa8
    UIButton * _openButton; // +0xb0
    UIButton * _openButtonNotYet; // +0xb8
    UIButton * _closeButton; // +0xc0
    MMLimitedModeConfigListView * _listView; // +0xc8
    MMLimitedModeGuardianEntryView * _guardianEntryView; // +0xd0
    WCAgreementCheckBox * _agreementCheckBox; // +0xd8
    NSData * _pay_respData; // +0xe0
    NSString * _pay_status; // +0xe8
    MMLimitedModeMaskViewView * _maskView; // +0xf0
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
- (id)getDescText;
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
- (void)onOpenNotYetButtonClick;
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
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (BOOL)isIndependentVerifyFlag;
- (void)setIsIndependentVerifyFlag:(BOOL)arg1;
- (BOOL)isNeverUse;
- (void)setIsNeverUse:(BOOL)arg1;
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
- (void).cxx_destruct;
@end

