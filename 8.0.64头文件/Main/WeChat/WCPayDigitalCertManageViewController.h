@interface WCPayDigitalCertManageViewController : WCPayBaseViewController <WCActionSheetDelegate, WCPayDigitalCertInstallViewControllerDelegate, WCPayDeleteDigitalCertCgiDelegate>
{
    unsigned int _entryScene; // +0x98
    UIImageView * _m_iconView; // +0xa0
    UILabel * _m_iconDescLabel; // +0xa8
    UILabel * _m_contentLabel; // +0xb0
    UILabel * _m_contentLabelDesc1; // +0xb8
    UILabel * _m_contentLabelDesc2; // +0xc0
    UIButton * _m_manageButton; // +0xc8
    WCBizLoadingView * _m_bizLoadingView; // +0xd0
    WCPayDigitalCertPayManageResp * _m_manageInfo; // +0xd8
    WCPayUserInfo * _m_userInfo; // +0xe0
    WCPayDeleteDigitalCertCgi * _m_deleteCgi; // +0xe8
    TenpayCertificate * _m_certControl; // +0xf0
    NSString * _m_currentDeviceCertNo; // +0xf8
    id <WCPayDigitalCertManageViewControllerDelegate> _m_delegate; // +0x100
}
- (id)initWithManageInfo:(id)arg1 userInfo:(id)arg2 delegate:(id)arg3;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateBizLoadingView;
- (void)startBizLoadingBlocked;
- (void)stopBizLoading;
- (void)didReceiveMemoryWarning;
- (void)reloadTableView;
- (void)updateCertCell;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)updateHeaderView;
- (void)updateIconViewWithSuperView:(id)arg1;
- (void)updateIconDescLabelWithSuperView:(id)arg1;
- (void)updateContentLabelWithSuperView:(id)arg1;
- (void)updateContentLabelDesc1WithSuperView:(id)arg1;
- (void)updateContentLabelDesc2WithSuperView:(id)arg1;
- (id)genSectionHeaderView;
- (void)onClickInstallButton;
- (void)onClickDeleteButton;
- (void)updateManageButtonWithSuperView:(id)arg1;
- (void)sendDeleteCgiWithCrtNo:(id)arg1;
- (void)reloadData;
- (void)callDelegate;
- (void)updateWithData:(id)arg1;
- (BOOL)hasOtherDeviceCertCount;
- (void)onWCPayDeleteDigitalCertCgiWithResp:(id)arg1;
- (void)onWCPayDigitalCertInstallViewControllerOk;
- (void)deleteOtherDeviceCertClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned int)entryScene;
- (void)setEntryScene:(unsigned int)arg1;
- (id)m_iconView;
- (void)setM_iconView:(id)arg1;
- (id)m_iconDescLabel;
- (void)setM_iconDescLabel:(id)arg1;
- (id)m_contentLabel;
- (void)setM_contentLabel:(id)arg1;
- (id)m_contentLabelDesc1;
- (void)setM_contentLabelDesc1:(id)arg1;
- (id)m_contentLabelDesc2;
- (void)setM_contentLabelDesc2:(id)arg1;
- (id)m_manageButton;
- (void)setM_manageButton:(id)arg1;
- (id)m_bizLoadingView;
- (void)setM_bizLoadingView:(id)arg1;
- (id)m_manageInfo;
- (void)setM_manageInfo:(id)arg1;
- (id)m_userInfo;
- (void)setM_userInfo:(id)arg1;
- (id)m_deleteCgi;
- (void)setM_deleteCgi:(id)arg1;
- (id)m_certControl;
- (void)setM_certControl:(id)arg1;
- (id)m_currentDeviceCertNo;
- (void)setM_currentDeviceCertNo:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
