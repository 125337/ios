@interface WCFinderFeedFavListCollectionViewCell : UICollectionViewCell <WCFinderHeadImageViewDelegate, WCFinderThanksButtonDelegate, WCFinderThanksExt>
{
    id <WCFinderFeedFavListCellDelegate> _delegate; // +0x8
    WCFinderFavInfo * _favInfo; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
    UIView * _separatorLine; // +0x20
    FinderFavListCellContentContainer * _contentContainer; // +0x28
    WCFinderThanksButton * _thanksButton; // +0x30
    CGSize _layoutSize; // +0x38
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setupUI;
- (void)setupEvent;
- (void)prepareForReuse;
- (void)showHighlightAnimation;
- (void)updateWithFavInfo:(id)arg1;
- (BOOL)isSelfFav;
- (CGRect)thanksIconFrame;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (id)avatarImageView;
- (id)separatorLine;
- (void)onThanksButtonClickedWithThanksState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (void)onThankStateChanged:(BOOL)arg1 tid:(id)arg2 username:(id)arg3 interactionType:(long long)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)favInfo;
- (void)setFavInfo:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setSeparatorLine:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)thanksButton;
- (void)setThanksButton:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

