@interface WCFinderPersonalCenterContactView : UIView
{
    double _verticalPadding; // +0x8
    double _avatarSize; // +0x10
    double _avatarPadding; // +0x18
    WCFinderHeadImageView * _avatarView; // +0x20
    UILabel * _nicknameLabel; // +0x28
    WCFinderAuthInfoIconView * _authIconView; // +0x30
    UILabel * _fansLabel; // +0x38
    UILabel * _reviewLabel; // +0x40
    UILabel * _logoutTips; // +0x48
    UIImageView * _arrowView; // +0x50
    UILabel * _settingRedTextView; // +0x58
    UIView * _settingRedDotView; // +0x60
    WCFinderReuseQueue * _previewViewReuseQueue; // +0x68
    NSMutableArray * _previewViews; // +0x70
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
- (void)setAvatarSize:(double)arg1;
- (void)setAvatarPadding:(double)arg1;
- (void)setVerticalPadding:(double)arg1;
- (void)_setupLayout;
- (void)_applyLayout;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateContact:(id)arg1 prepare:(id)arg2 settingRedDot:(id)arg3 newPreviewStyle:(BOOL)arg4 showLogoutTips:(BOOL)arg5 previewData:(id)arg6;
- (void)_setupPreviewViews:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabelForContact:(id)arg1;
- (void)updateReport:(id)arg1;
- (double)verticalPadding;
- (double)avatarSize;
- (double)avatarPadding;
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
