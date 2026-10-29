@interface MMFinderLiveWatchMilestoneSheetView : MMPageSheetBaseView
{
    MMFinderLiveWatchMilestoneInfo * _milestoneInfo; // +0x8
    UIView * _milestoneCardView; // +0x10
    UIImageView * _cardBgImageView; // +0x18
    UIView * _selfAvatarContainer; // +0x20
    MMHeadImageView * _selfHeadImageView; // +0x28
    UIView * _anchorAvatarContainer; // +0x30
    MMHeadImageView * _anchorHeadImageView; // +0x38
    UILabel * _prefixWordingLabel; // +0x40
    UILabel * _anchorNicknameLabel; // +0x48
    WCFinderAuthInfoIconView * _anchorAuthIconView; // +0x50
    UILabel * _suffixWordingLabel; // +0x58
    PAGView * _confettiPAGView; // +0x60
}
- (id)initWithMilestoneInfo:(id)arg1;
- (void)setupPageSheetConfig;
- (void)buildCardUI;
- (void)layoutSubviews;
- (double)sheetCardWidth;
- (double)sheetCardHeight;
- (double)sheetAvatarSize;
- (double)sheetAvatarOverlap;
- (double)sheetAvatarHInset;
- (double)sheetAvatarTopMargin;
- (double)sheetAvatarToTextGap;
- (double)sheetAnchorAuthIconSize;
- (void)layoutCardSubviews;
- (void)showAnimated:(BOOL)arg1;
- (void)performAvatarCollisionAnimation;
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (id)milestoneInfo;
- (void)setMilestoneInfo:(id)arg1;
- (id)milestoneCardView;
- (void)setMilestoneCardView:(id)arg1;
- (id)cardBgImageView;
- (void)setCardBgImageView:(id)arg1;
- (id)selfAvatarContainer;
- (void)setSelfAvatarContainer:(id)arg1;
- (id)selfHeadImageView;
- (void)setSelfHeadImageView:(id)arg1;
- (id)anchorAvatarContainer;
- (void)setAnchorAvatarContainer:(id)arg1;
- (id)anchorHeadImageView;
- (void)setAnchorHeadImageView:(id)arg1;
- (id)prefixWordingLabel;
- (void)setPrefixWordingLabel:(id)arg1;
- (id)anchorNicknameLabel;
- (void)setAnchorNicknameLabel:(id)arg1;
- (id)anchorAuthIconView;
- (void)setAnchorAuthIconView:(id)arg1;
- (id)suffixWordingLabel;
- (void)setSuffixWordingLabel:(id)arg1;
- (id)confettiPAGView;
- (void)setConfettiPAGView:(id)arg1;
- (void).cxx_destruct;
@end
