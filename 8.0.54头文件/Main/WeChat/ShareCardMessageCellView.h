@interface ShareCardMessageCellView : CommonMessageCellView
{
    UILabel * m_nicknameLabel; // +0xa8
    UILabel * m_usernameLabel; // +0xb0
    MMWebImageView * m_iconNamePrefix; // +0xb8
    UIImageView * _certificationImageView; // +0xc0
    MMUILabel * _personalVerifyIdentityLabel; // +0xc8
}
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)initNicknameLabel;
- (void)initUsernameLabel;
- (void)initIconNamePostfix;
- (void)initCertificationImageView;
- (void)setCertificationImageViewFrame;
- (void)initPersonalVerifyIdentityLabel;
- (void)updatePersonalVerifyIdentityLabel;
- (id)operationMenuItems;
- (BOOL)isOpenIMChat;
- (BOOL)isOpenIMKefuChat;
- (void)onForward:(id)arg1;
- (void)onTouchUpInside;
- (id)certificationImageView;
- (void)setCertificationImageView:(id)arg1;
- (id)personalVerifyIdentityLabel;
- (void)setPersonalVerifyIdentityLabel:(id)arg1;
- (void).cxx_destruct;
@end

