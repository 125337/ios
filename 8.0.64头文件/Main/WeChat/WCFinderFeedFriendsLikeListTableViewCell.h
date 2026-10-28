@interface WCFinderFeedFriendsLikeListTableViewCell : MMTableViewCell <WCFinderThanksButtonDelegate, WCFinderThanksExt>
{
    BOOL _showFinderIdentifier; // +0x8
    int _curScene; // +0xc
    id <WCFinderFeedFriendsLikeListTableViewCellDelegate> _delegate; // +0x10
    unsigned long long _row; // +0x18
    WCFinderLikeInfo * _likeInfo; // +0x20
    MMHeadImageView * _avatarImageView; // +0x28
    UILabel * _nickNameLabel; // +0x30
    WCFinderThanksButton * _thanksButton; // +0x38
    MMUIButton * _moreBtn; // +0x40
    UIView * _separatorLine; // +0x48
    UIView * _highLightBGView; // +0x50
    UILabel * _firstLikeLabel; // +0x58
    UIImageView * _logoIconView; // +0x60
    UIButton * _doubleLikeLabel; // +0x68
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setupSubViews;
- (CGRect)thanksIconFrame;
- (void)setupLikeInfo:(id)arg1 needsSeparatorLine:(BOOL)arg2 showFirstLikeLabel:(BOOL)arg3 canShowMore:(BOOL)arg4;
- (BOOL)checkThanksButtonNeedShow;
- (void)updateThanksButtonUI;
- (void)layoutAllSubviews;
- (void)updateNotSee:(BOOL)arg1;
- (void)showHighlightAnimationWithCompletion:(id /* block */)arg1;
- (void)willDisplayFriendsLikeListCell;
- (id)getReportDic;
- (void)onClickMoreBtn;
- (void)onThanksButtonClickedWithThanksState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (void)onThanksButtonSizeChanged;
- (void)onThankStateChanged:(BOOL)arg1 tid:(id)arg2 username:(id)arg3 interactionType:(int)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)row;
- (void)setRow:(unsigned long long)arg1;
- (id)likeInfo;
- (void)setLikeInfo:(id)arg1;
- (BOOL)showFinderIdentifier;
- (void)setShowFinderIdentifier:(BOOL)arg1;
- (int)curScene;
- (void)setCurScene:(int)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)thanksButton;
- (void)setThanksButton:(id)arg1;
- (id)moreBtn;
- (void)setMoreBtn:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)highLightBGView;
- (void)setHighLightBGView:(id)arg1;
- (id)firstLikeLabel;
- (void)setFirstLikeLabel:(id)arg1;
- (id)logoIconView;
- (void)setLogoIconView:(id)arg1;
- (id)doubleLikeLabel;
- (void)setDoubleLikeLabel:(id)arg1;
- (void).cxx_destruct;
@end
