@interface ShareCardMessageViewModel : AppStandardAccountContentMessageViewModel
{
    CCardContact * m_sharedContact; // +0x70
    NSString * m_sharedUsername; // +0x78
    NSString * m_sharedNickname; // +0x80
    BizNameCardProtectedInfo * _protectedInfo; // +0x88
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)reloadData;
- (id)cellViewClassName;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)accountName;
- (id)accountDesc;
- (id)descColor;
- (id)descIcon;
- (id)accountSuffix;
- (id)descIconUrl;
- (id)sharedContact;
- (id)sharedUsername;
- (BOOL)isChatBot;
- (BOOL)isShowUsername;
- (BOOL)shouldShowCertificationFlag;
- (BOOL)shouldShowPersonalVerifyIdentity;
- (id)certificationImage;
- (id)personalVerifyIdentity;
- (void)onMessageForceUpdateLayout;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)protectedInfo;
- (void)setProtectedInfo:(id)arg1;
- (void).cxx_destruct;
@end
