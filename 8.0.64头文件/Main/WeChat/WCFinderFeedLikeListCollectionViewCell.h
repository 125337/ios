@interface WCFinderFeedLikeListCollectionViewCell : UICollectionViewCell <WCFinderHeadImageViewDelegate, WCFinderThanksButtonDelegate, WCFinderThanksExt>
{
    id <WCFinderFeedLikeListCellDelegate> _delegate; // +0x8
    WCFinderLikeInfo * _likeInfo; // +0x10
    WCFinderHeadImageView * _avatarImageView; // +0x18
    UIImageView * _finderLogoView; // +0x20
    UILabel * _nickNameLabel; // +0x28
    UIView * _separatorLine; // +0x30
    UIView * _highLightBGView; // +0x38
    WCFinderInteractionLabelGroupView * _nicknameTailLabel; // +0x40
    WCFinderInteractionLabelGroupView * _bottomInteractLabel; // +0x48
    WCFinderThanksButton * _thanksButton; // +0x50
    UIButton * _doubleLikeLabel; // +0x58
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setupEvent;
- (void)prepareForReuse;
- (void)updateWithLikeInfo:(id)arg1 needsSeparatorLine:(BOOL)arg2;
- (void)layoutUI;
- (void)showHighlightAnimation;
- (void)clearHighlight;
- (void)setUpUI;
- (CGRect)thanksIconFrame;
- (void)clickNickNameAction;
- (void)onThanksButtonClickedWithThanksState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (void)onThanksButtonSizeChanged;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onLikeInfo:(id)arg1 thankStateChanged:(BOOL)arg2;
- (void)onThankStateChanged:(BOOL)arg1 tid:(id)arg2 username:(id)arg3 interactionType:(int)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)likeInfo;
- (void)setLikeInfo:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)finderLogoView;
- (void)setFinderLogoView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)highLightBGView;
- (void)setHighLightBGView:(id)arg1;
- (id)nicknameTailLabel;
- (void)setNicknameTailLabel:(id)arg1;
- (id)bottomInteractLabel;
- (void)setBottomInteractLabel:(id)arg1;
- (id)thanksButton;
- (void)setThanksButton:(id)arg1;
- (id)doubleLikeLabel;
- (void)setDoubleLikeLabel:(id)arg1;
- (void).cxx_destruct;
@end
