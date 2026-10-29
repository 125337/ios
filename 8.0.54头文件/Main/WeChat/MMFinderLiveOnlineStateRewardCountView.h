@interface MMFinderLiveOnlineStateRewardCountView : UICollectionReusableView
{
    MMUILabel * _label; // +0x8
    UIView * _headerView; // +0x10
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateRewardAmount:(long long)arg1;
- (void)updateHeaderView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void).cxx_destruct;
@end

