@interface OpenIMStorageMakeSureHalfScreenViewController : MMUIHalfScreenViewController
{
    UIButton * m_makeSureButton; // +0x70
    UIButton * m_makeRejectButton; // +0x78
    MMUIButton * m_backgroundButton; // +0x80
    MMUIView * m_contentView; // +0x88
    MMUILabel * m_titleView; // +0x90
    MMUILabel * m_headView; // +0x98
    MMUILabel * m_descContentView; // +0xa0
    MMUIScrollView * m_contentScrollView; // +0xa8
    MMUIImageView * m_iconImageView; // +0xb0
    MMUIButton * m_protectButton; // +0xb8
    double m_contentViewTop; // +0xc0
    MMOpenIMStorageMakeSureMaskViewView * m_maskView; // +0xc8
    OpenIMArchivePopUpInfo * m_archivePopUpInfo; // +0xd0
    double m_descContentViewHeight; // +0xd8
    CContact * m_contact; // +0xe0
    NSString * m_privacyAgreementUrl; // +0xe8
}
- (void)viewDidLoad;
- (void)initData;
- (void)layoutHalfScreenView;
- (void)layoutView;
- (void)updateMaskViewGradientLayer;
- (void)layoutContentView;
- (void)layoutContentScrollView;
- (void)layoutTitleView;
- (void)layoutheadView;
- (void)layoutDescContentView;
- (void)layoutMakeMaskView;
- (void)layoutMakeRejectButton;
- (void)layoutMakeSureButton;
- (void)layoutProtectButton;
- (void)OnMakeRejectButtionClick;
- (void)OnMakeSureButtionClick;
- (void)OnProtectButtionClick;
- (void)onGetOpenIMArchivePopUpInfo:(id)arg1 archivePopUpInfo:(id)arg2 success:(BOOL)arg3 errMsg:(id)arg4;
- (void)onUpdateOpenIMStorageArchivePopUp:(id)arg1 privacyAgreementUrl:(id)arg2 success:(BOOL)arg3 errMsg:(id)arg4;
- (id)navigationBarBackgroundColor;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_privacyAgreementUrl;
- (void)setM_privacyAgreementUrl:(id)arg1;
- (void).cxx_destruct;
@end
