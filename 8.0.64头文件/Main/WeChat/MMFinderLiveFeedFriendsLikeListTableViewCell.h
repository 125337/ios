@interface MMFinderLiveFeedFriendsLikeListTableViewCell : MMTableViewCell
{
    BOOL _showFinderIdentifier; // +0x8
    id <MMFinderLiveFeedFriendsLikeListTableViewCellDelegate> _delegate; // +0x10
    unsigned long long _row; // +0x18
    WCFinderLikeInfo * _likeInfo; // +0x20
    MMHeadImageView * _avatarImageView; // +0x28
    UILabel * _nickNameLabel; // +0x30
    MMUIButton * _moreBtn; // +0x38
    UIView * _separatorLine; // +0x40
    UIView * _highLightBGView; // +0x48
    UILabel * _firstLikeLabel; // +0x50
    UIImageView * _logoIconView; // +0x58
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setupSubViews;
- (void)setupLikeInfo:(id)arg1 needsSeparatorLine:(BOOL)arg2 showFirstLikeLabel:(BOOL)arg3 canShowMore:(BOOL)arg4;
- (void)layoutAllSubviews;
- (void)updateNotSee:(BOOL)arg1;
- (void)showHighlightAnimationWithCompletion:(id /* block */)arg1;
- (void)onClickMoreBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)row;
- (void)setRow:(unsigned long long)arg1;
- (id)likeInfo;
- (void)setLikeInfo:(id)arg1;
- (BOOL)showFinderIdentifier;
- (void)setShowFinderIdentifier:(BOOL)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
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
- (void).cxx_destruct;
@end
