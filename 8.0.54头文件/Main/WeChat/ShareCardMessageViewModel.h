@interface ShareCardMessageViewModel : CommonMessageViewModel
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
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)sharedContact;
- (id)sharedUsername;
- (id)sharedNickname;
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

