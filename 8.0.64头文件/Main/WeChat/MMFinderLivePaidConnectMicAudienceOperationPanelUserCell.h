@interface MMFinderLivePaidConnectMicAudienceOperationPanelUserCell : UITableViewCell
{
    UILabel * _rankLabel; // +0x8
    UILabel * _nameLabel; // +0x10
    MMFinderLiveGroupedBadgeView * _groupedBadgeView; // +0x18
    UIImageView * _wecoinIconImageView; // +0x20
    UILabel * _priceAmountLabel; // +0x28
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (void)layoutSubviews;
- (void)configWithUser:(id)arg1 rank:(unsigned long long)arg2 showPriceAmount:(BOOL)arg3;
- (id)liveTaskId;
- (id)rankLabel;
- (void)setRankLabel:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)groupedBadgeView;
- (void)setGroupedBadgeView:(id)arg1;
- (id)wecoinIconImageView;
- (void)setWecoinIconImageView:(id)arg1;
- (id)priceAmountLabel;
- (void)setPriceAmountLabel:(id)arg1;
- (void).cxx_destruct;
@end
