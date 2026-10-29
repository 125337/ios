@interface WCFinderHelpPromotionUserCell : UICollectionViewCell <WCFinderHeadImageViewDelegate, WCFinderThanksButtonDelegate>
{
    id <WCFinderHelpPromotionUserCellDelegate> _delegate; // +0x8
    FinderHelpPromotionUserInfo * _userInfo; // +0x10
    WCFinderHeadImageView * _avatarView; // +0x18
    UILabel * _nicknameLabel; // +0x20
    UIImageView * _finderLogoView; // +0x28
    WCFinderInteractionLabelGroupView * _interactionLabelsView; // +0x30
    WCFinderThanksButton * _thanksButton; // +0x38
    UIView * _separatorLine; // +0x40
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithUserInfo:(id)arg1 thanksEnabled:(BOOL)arg2;
- (void)updateThanksEnabled:(BOOL)arg1;
- (void)layoutSubviews;
- (CGRect)thanksIconFrame;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onThanksButtonClickedWithThanksState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (void)onThanksButtonSizeChanged;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)finderLogoView;
- (void)setFinderLogoView:(id)arg1;
- (id)interactionLabelsView;
- (void)setInteractionLabelsView:(id)arg1;
- (id)thanksButton;
- (void)setThanksButton:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
