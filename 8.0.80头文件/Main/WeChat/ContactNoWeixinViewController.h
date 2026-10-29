@interface ContactNoWeixinViewController : MMUIViewController <MFMessageComposeViewControllerDelegate, WCActionSheetDelegate, QZoneLoginStatusDelegate>
{
    UIView * m_TipsView; // +0x70
    CBaseContact * m_contact; // +0x78
    UIButton * m_btn; // +0x80
    UIView * m_headerView; // +0x88
    NSArray * m_arrMobiles; // +0x90
    QZoneLoginStatus * m_qzone; // +0x98
    NSString * m_googleImageUrl; // +0xa0
    unsigned long long m_searchScene; // +0xa8
}
- (void)Call;
- (void)OnQQAction:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getInfoDisplayName;
- (id)getInfoDetailText;
- (id)getQQUsrName;
- (id)getInfoUsrName;
- (void)initDetailInfoView;
- (void)showAlert:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (BOOL)isShowInviteBtn;
- (void)initTipsWordView:(id)arg1 withFrame:(CGRect)arg2;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;
- (void)onQZoneUrl:(id)arg1;
- (id)m_arrMobiles;
- (void)setM_arrMobiles:(id)arg1;
- (id)m_googleImageUrl;
- (void)setM_googleImageUrl:(id)arg1;
- (unsigned long long)m_searchScene;
- (void)setM_searchScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
