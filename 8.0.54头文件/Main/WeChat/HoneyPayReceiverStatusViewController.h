@interface HoneyPayReceiverStatusViewController : HoneyPayBaseViewController <ILinkEventExt>
{
    id <HoneyPayReceiverStatusViewControllerDelegate> _delegate; // +0x90
    QryHoneyUserDetailResp * _detail; // +0x98
    UIView * _introInfosView; // +0xa0
    WCPayAgreementView * _agreementView; // +0xa8
    WCPayNoticeItemView * _noticeItemView; // +0xb0
}
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)refreshViewWithData:(id)arg1;
- (void)setupNavigationBar;
- (void)reloadTableView;
- (id)createdHeaderView;
- (id)inuseHeaderView;
- (id)expiredHeaderView;
- (id)unbindHeaderView;
- (id)statusViewHeader:(double)arg1 icon:(id)arg2 status:(id)arg3 attention:(id)arg4;
- (id)detailCellContentWithInfos:(id)arg1 width:(double)arg2;
- (id)agreementView;
- (id)agreementWording;
- (void)done;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (id)introInfosView;
- (void)setIntroInfosView:(id)arg1;
- (void)setAgreementView:(id)arg1;
- (id)noticeItemView;
- (void)setNoticeItemView:(id)arg1;
- (void).cxx_destruct;
@end

