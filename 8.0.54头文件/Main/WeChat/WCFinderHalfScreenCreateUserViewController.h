@interface WCFinderHalfScreenCreateUserViewController : MMUIHalfScreenViewController <ILinkEventExt>
{
    NSString * _reccommendCreateAcctNickName; // +0x68
    NSString * _confirmBtnTitle; // +0x70
    NSString * _customCreateTip; // +0x78
    UILabel * _tipsView; // +0x80
    WCFinderHalfScreenCreateUserVCAcctView * _acctView; // +0x88
    MMUIButton * _aggreCheckBox; // +0x90
    RichTextView * _aggrementView; // +0x98
    UIButton * _confirmButton; // +0xa0
    UIButton * _cancelButton; // +0xa8
    WCFinderGetWechatHDHeadFetcher * _wechatHDHeadFetcher; // +0xb0
}
+ (double)getHeightWithWidth:(double)arg1;
- (void)viewDidLoad;
- (void)setupData;
- (void)setupHalfScreenView;
- (void)setupSubViews;
- (id)getReportDict;
- (void)setViewDataReport:(id)arg1 drid:(id)arg2;
- (void)setupLayout;
- (BOOL)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (id)getNickName;
- (void)shakeAggreetView;
- (void)onClickAgreementCheckBox:(id)arg1;
- (void)onClickEditBtn;
- (void)onClickConfirmBtn:(id)arg1;
- (void)onClickCancelBtn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)wechatHDHeadFetcher;
- (id)reccommendCreateAcctNickName;
- (void)setReccommendCreateAcctNickName:(id)arg1;
- (id)confirmBtnTitle;
- (void)setConfirmBtnTitle:(id)arg1;
- (id)customCreateTip;
- (void)setCustomCreateTip:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)acctView;
- (void)setAcctView:(id)arg1;
- (id)aggreCheckBox;
- (void)setAggreCheckBox:(id)arg1;
- (id)aggrementView;
- (void)setAggrementView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void)setWechatHDHeadFetcher:(id)arg1;
- (void).cxx_destruct;
@end

