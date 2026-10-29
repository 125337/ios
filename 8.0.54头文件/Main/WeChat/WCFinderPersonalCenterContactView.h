@interface WCFinderPersonalCenterContactView : UIView
{
    WCFinderHeadImageView * _avatarView; // +0x8
    UILabel * _nicknameLabel; // +0x10
    WCFinderAuthInfoIconView * _authIconView; // +0x18
    UILabel * _fansLabel; // +0x20
    UILabel * _reviewLabel; // +0x28
    UILabel * _logoutTips; // +0x30
    UIImageView * _arrowView; // +0x38
    UILabel * _settingRedTextView; // +0x40
    UIView * _settingRedDotView; // +0x48
    WCFinderReuseQueue * _previewViewReuseQueue; // +0x50
    NSMutableArray * _previewViews; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)_setupAvatar;
- (void)_setupNickname;
- (void)_setupAuthIcon;
- (void)_setupReviewLabel;
- (void)_setupFansLabel;
- (void)_setupSettingViews;
- (void)_setupLogoutTip;
- (void)_setupArrow;
- (void)_setupLayout;
- (void)_applyLayout;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateContact:(id)arg1 prepare:(id)arg2 settingRedDot:(id)arg3 newPreviewStyle:(BOOL)arg4 previewData:(id)arg5;
- (void)_setupPreviewViews:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabelForContact:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)fansLabel;
- (void)setFansLabel:(id)arg1;
- (id)reviewLabel;
- (void)setReviewLabel:(id)arg1;
- (id)logoutTips;
- (void)setLogoutTips:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)settingRedTextView;
- (void)setSettingRedTextView:(id)arg1;
- (id)settingRedDotView;
- (void)setSettingRedDotView:(id)arg1;
- (id)previewViewReuseQueue;
- (void)setPreviewViewReuseQueue:(id)arg1;
- (id)previewViews;
- (void)setPreviewViews:(id)arg1;
- (void).cxx_destruct;
@end

