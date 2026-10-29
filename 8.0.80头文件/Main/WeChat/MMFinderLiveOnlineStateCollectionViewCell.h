@interface MMFinderLiveOnlineStateCollectionViewCell : UICollectionViewCell
{
    BOOL _bNeedSeparatorLine; // +0x8
    BOOL _forceDarkByBiz; // +0x9
    BOOL _useKTVStyle; // +0xa
    BOOL _isWatchTimeSortMode; // +0xb
    BOOL _showHeadImage; // +0xc
    id <MMFinderLiveOnlineStateCollectionViewCellDelegate> _cellDelegate; // +0x10
    MMFinderLiveUserStateItem * _onlineUserItem; // +0x18
    MMUILabel * _rankLabel; // +0x20
    MMLiveHeadImageView * _avatarView; // +0x28
    MMCPLabel * _displayNameLabel; // +0x30
    MMUILabel * _descLabel; // +0x38
    MMUIImageView * _banCommentIconImageView; // +0x40
    MMUIImageView * _roleIconImageView; // +0x48
    MMUIImageView * _genderIconImageView; // +0x50
    MMUILabel * _signLabel; // +0x58
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x60
    MMFinderLiveMemberSignView * _memberSignView; // +0x68
    MMFinderLiveNormalTextSignView * _shopMemberSignView; // +0x70
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x78
    MMFinderLiveLiveRoleSignView * _roleSignView; // +0x80
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x88
    MMFinderLiveNormalTextSignView * _buySignView; // +0x90
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x98
    MMFinderLiveNormalTextSignView * _followerSignView; // +0xa0
    MMUILabel * _rewardAmountLabel; // +0xa8
    MMLiveHeatAndIconButton * _selectGiftButton; // +0xb0
    UIView * _separatorLine; // +0xb8
    MMUILabel * _scoreAmountLabel; // +0xc0
}
+ (id)ReuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initHeadImageView;
- (void)initNameLabel;
- (void)initDescLabel;
- (void)initSignLabel;
- (void)initBanCommentIconImageView;
- (void)updateBanCommentIconImageView;
- (void)initRoleIconImageView;
- (void)initGlobalRankSignView;
- (void)initMemberSignView;
- (void)initShopMemberSignView;
- (void)initFansGroupSignView;
- (void)initRewardAmountLabel;
- (void)initScoreAmountLabel;
- (void)initSeperatorLine;
- (void)initGenderIconImageView;
- (void)initRoleSignView;
- (void)initMysteriousSignView;
- (void)initBuySignView;
- (void)initFrequentWatchSignView;
- (void)initFollowerSignView;
- (void)layoutRankLabel;
- (void)layoutSelectGiftBtn;
- (void)updateWithOnlineUserItem:(id)arg1 showRewardAmount:(BOOL)arg2 showHeadImage:(BOOL)arg3 showSelectGiftBtn:(BOOL)arg4;
- (void)updateWithOnlineUserItem:(id)arg1 showRewardAmount:(BOOL)arg2 showHeadImage:(BOOL)arg3 isSelf:(BOOL)arg4 showSelectGiftBtn:(BOOL)arg5;
- (void)updateDescLabelText;
- (void)configCommonSignView:(id)arg1 text:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)iconColor;
- (BOOL)forceDark;
- (BOOL)shouldShowMemberSign;
- (void)onSelectGiftButtonClicked;
- (id)liveTask;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (BOOL)bNeedSeparatorLine;
- (void)setBNeedSeparatorLine:(BOOL)arg1;
- (BOOL)forceDarkByBiz;
- (void)setForceDarkByBiz:(BOOL)arg1;
- (BOOL)useKTVStyle;
- (void)setUseKTVStyle:(BOOL)arg1;
- (id)onlineUserItem;
- (void)setOnlineUserItem:(id)arg1;
- (BOOL)isWatchTimeSortMode;
- (void)setIsWatchTimeSortMode:(BOOL)arg1;
- (id)rankLabel;
- (void)setRankLabel:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)banCommentIconImageView;
- (void)setBanCommentIconImageView:(id)arg1;
- (id)roleIconImageView;
- (void)setRoleIconImageView:(id)arg1;
- (id)genderIconImageView;
- (void)setGenderIconImageView:(id)arg1;
- (id)signLabel;
- (void)setSignLabel:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)memberSignView;
- (void)setMemberSignView:(id)arg1;
- (id)shopMemberSignView;
- (void)setShopMemberSignView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)roleSignView;
- (void)setRoleSignView:(id)arg1;
- (id)mysteriousSignView;
- (void)setMysteriousSignView:(id)arg1;
- (id)buySignView;
- (void)setBuySignView:(id)arg1;
- (id)frequentWatchSignView;
- (void)setFrequentWatchSignView:(id)arg1;
- (id)followerSignView;
- (void)setFollowerSignView:(id)arg1;
- (id)rewardAmountLabel;
- (void)setRewardAmountLabel:(id)arg1;
- (id)selectGiftButton;
- (void)setSelectGiftButton:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)scoreAmountLabel;
- (void)setScoreAmountLabel:(id)arg1;
- (BOOL)showHeadImage;
- (void)setShowHeadImage:(BOOL)arg1;
- (void).cxx_destruct;
@end
