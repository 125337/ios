@interface WCListHeaderView : MMUIView <IContactMgrExt, WCActionSheetDelegate, WCFacadeExt>
{
    CContact * m_contact; // +0x8
    BOOL m_isMyWC; // +0x10
    BOOL m_showSignature; // +0x11
    CGRect m_bkgRect; // +0x18
    MMCPLabel * m_signatureLabel; // +0x38
    MMHeadImageView * m_headImageView; // +0x40
    UILabel * m_totalCountLabel; // +0x48
    MMUIViewController * viewController; // +0x50
    UIImageView * m_bkgMaskView; // +0x58
    UIImageView * m_backgroundImageView; // +0x60
    CGRect oBackgroundImageRect; // +0x68
    double m_fLastY; // +0x88
    id <WCListHeaderViewDelegate> m_delegate; // +0x90
    NSString * m_cpKeyForNickname; // +0x98
    NSString * m_cpKeyForSignature; // +0xa0
    BOOL m_isNicknameUnsafe; // +0xa8
    BOOL m_isSignatureUnsafe; // +0xa9
    BOOL _shouldAddShadowView; // +0xaa
    MMCPLabel * m_infoLabel; // +0xb0
    UITableView * _tableView; // +0xb8
    UILabel * _m_nickLabel; // +0xc0
    long long _homepageType; // +0xc8
    TLProfileNicknameContainerView * _nicknameContainerView; // +0xd0
}
- (void)updateframe;
- (void)initView;
- (void)initNicknameContainerView;
- (id)initWithContact:(id)arg1 bkgRect:(CGRect)arg2;
- (void)setM_showSignature:(BOOL)arg1;
- (void)reloadContactLabels;
- (void)showContactInfo;
- (void)reloadBackGround;
- (void)showChangeBkgOption;
- (void)updateListHeaderView;
- (void)updateListHeaderViewWithContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onWCBackgroundChanged;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)behaviourInfoSession;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScroll:(id)arg1;
- (void)updateCPState;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (CGRect)m_bkgRect;
- (void)setM_bkgRect:(CGRect)arg1;
- (BOOL)m_showSignature;
- (id)m_headImageView;
- (void)setM_headImageView:(id)arg1;
- (id)m_infoLabel;
- (void)setM_infoLabel:(id)arg1;
- (id)m_bkgMaskView;
- (void)setM_bkgMaskView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_backgroundImageView;
- (void)setM_backgroundImageView:(id)arg1;
- (BOOL)shouldAddShadowView;
- (void)setShouldAddShadowView:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)m_nickLabel;
- (void)setM_nickLabel:(id)arg1;
- (long long)homepageType;
- (void)setHomepageType:(long long)arg1;
- (id)nicknameContainerView;
- (void)setNicknameContainerView:(id)arg1;
- (void).cxx_destruct;
@end
