@interface MMFinderLiveTopicEducationNotifyPlaceholderView : UIView
{
    BOOL _skeletonInstalled; // +0x8
    UIView * _frameContainer; // +0x10
    UIView * _screenBackgroundView; // +0x18
    UIView * _bottomFadeView; // +0x20
    CAGradientLayer * _bottomFadeLayer; // +0x28
    UIView * _navbarView; // +0x30
    UILabel * _navbarTitleLabel; // +0x38
    UIView * _cellContainer; // +0x40
    UIView * _avatarView; // +0x48
    UIView * _nicknameBar; // +0x50
    UIImageView * _headerMoreIconView; // +0x58
    UILabel * _cellTitleLabel; // +0x60
    NSArray * _descBars; // +0x68
    UIView * _coverView; // +0x70
    WCFinderLiveNowView * _liveBadgeView; // +0x78
    UIView * _footerSeparator; // +0x80
    UIView * _footerTailBar; // +0x88
    UIImageView * _footerArrowView; // +0x90
}
- (id)initWithFrame:(CGRect)arg1;
- (void)buildSubviews;
- (void)updateBottomFadeColors;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)layoutCellInScreenWithScreenWidth:(double)arg1;
- (id)frameContainer;
- (void)setFrameContainer:(id)arg1;
- (id)screenBackgroundView;
- (void)setScreenBackgroundView:(id)arg1;
- (id)bottomFadeView;
- (void)setBottomFadeView:(id)arg1;
- (id)bottomFadeLayer;
- (void)setBottomFadeLayer:(id)arg1;
- (id)navbarView;
- (void)setNavbarView:(id)arg1;
- (id)navbarTitleLabel;
- (void)setNavbarTitleLabel:(id)arg1;
- (id)cellContainer;
- (void)setCellContainer:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nicknameBar;
- (void)setNicknameBar:(id)arg1;
- (id)headerMoreIconView;
- (void)setHeaderMoreIconView:(id)arg1;
- (id)cellTitleLabel;
- (void)setCellTitleLabel:(id)arg1;
- (id)descBars;
- (void)setDescBars:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)liveBadgeView;
- (void)setLiveBadgeView:(id)arg1;
- (id)footerSeparator;
- (void)setFooterSeparator:(id)arg1;
- (id)footerTailBar;
- (void)setFooterTailBar:(id)arg1;
- (id)footerArrowView;
- (void)setFooterArrowView:(id)arg1;
- (BOOL)skeletonInstalled;
- (void)setSkeletonInstalled:(BOOL)arg1;
- (void).cxx_destruct;
@end
