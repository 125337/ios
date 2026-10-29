@interface MMLiveMentionContactListTableViewCell : UITableViewCell
{
    MMCPLabel * _titleLabel; // +0x8
    MMUIImageView * _finderRoleIconView; // +0x10
    MMUIImageView * _genderIconImageView; // +0x18
    MMUIImageView * _banCommentIconImageView; // +0x20
    MMUILabel * _signLabel; // +0x28
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x30
    MMFinderLiveMemberSignView * _memberSignView; // +0x38
    MMFinderLiveNormalTextSignView * _shopMemberSignView; // +0x40
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x48
    MMFinderLiveLiveRoleSignView * _roleSignView; // +0x50
    MMFinderLiveLiveRoleSignView * _mysteriousSignView; // +0x58
    MMFinderLiveNormalTextSignView * _buySignView; // +0x60
    MMFinderLiveNormalTextSignView * _frequentWatchSignView; // +0x68
    MMFinderLiveNormalTextSignView * _followerSignView; // +0x70
    UIView * _separatorLine; // +0x78
}
+ (id)reuseIdentifier;
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initNameLabel;
- (void)initRoleIconImageView;
- (void)initGenderIconImageView;
- (void)initBanCommentIconImageView;
- (void)initSignLabel;
- (void)initGlobalRankSignView;
- (void)initMemberSignView;
- (void)initShopMemberSignView;
- (void)initFansGroupSignView;
- (void)initRoleSignView;
- (void)initMysteriousSignView;
- (void)initBuySignView;
- (void)initFrequentWatchSignView;
- (void)initFollowerSignView;
- (void)initSeparatorLine;
- (void)bindWithItem:(id)arg1 isLastInGroup:(BOOL)arg2;
- (void)layoutSubviews;
- (void)updateBanCommentIconWithContact:(id)arg1;
- (id)liveTask;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)finderRoleIconView;
- (void)setFinderRoleIconView:(id)arg1;
- (id)genderIconImageView;
- (void)setGenderIconImageView:(id)arg1;
- (id)banCommentIconImageView;
- (void)setBanCommentIconImageView:(id)arg1;
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
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
