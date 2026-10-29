@interface FaceRecog3rdVerifyConfirmViewController : MMUIViewController
{
    BOOL _agreementSelected; // +0x68
    BOOL _overseaAgreementSelected; // +0x69
    id <FaceRecog3rdVerifyConfirmViewControllerDelegate> _delegate; // +0x70
    UIScrollView * _scrollContentView; // +0x78
    UIView * _detailView; // +0x80
    CAGradientLayer * _gradientLayer; // +0x88
    WCAgreementCheckBox * _overseaAgreementCheckView; // +0x90
    WCAgreementCheckBox * _agreementCheckView; // +0x98
    UIButton * _feedbackButton; // +0xa0
    MMWebImageView * _iconView; // +0xa8
    MMUILabel * _nameLabel; // +0xb0
    MMUILabel * _sloganLabel; // +0xb8
    MMUILabel * _descLabel; // +0xc0
    UIButton * _confirmInvokeBtn; // +0xc8
    FaceRecogResultView * _failResultView; // +0xd0
    FaceRecog3rdVerifyConfirmLogic * _confirmLogic; // +0xd8
    NSString * _appId; // +0xe0
}
- (id)initWithAppId:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (id)genAgreementCheckBox;
- (void)initLayout;
- (void)viewDidLayoutSubviews;
- (id)faceRecogVerifyGetFeedbackUrl;
- (void)onFeedback;
- (void)onStartFaceReco;
- (void)onCancel;
- (void)onConfirmFail;
- (void)updateView:(id)arg1;
- (void)updateViewWithFailReason:(id)arg1 desc:(id)arg2 confirmLogic:(id)arg3;
- (void)updateConfirmButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollContentView;
- (void)setScrollContentView:(id)arg1;
- (id)detailView;
- (void)setDetailView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)overseaAgreementCheckView;
- (void)setOverseaAgreementCheckView:(id)arg1;
- (id)agreementCheckView;
- (void)setAgreementCheckView:(id)arg1;
- (id)feedbackButton;
- (void)setFeedbackButton:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)sloganLabel;
- (void)setSloganLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)confirmInvokeBtn;
- (void)setConfirmInvokeBtn:(id)arg1;
- (id)failResultView;
- (void)setFailResultView:(id)arg1;
- (id)confirmLogic;
- (void)setConfirmLogic:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (BOOL)agreementSelected;
- (void)setAgreementSelected:(BOOL)arg1;
- (BOOL)overseaAgreementSelected;
- (void)setOverseaAgreementSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

