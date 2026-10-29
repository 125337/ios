@interface MMFinderLiveGiftStarHistoryGroupHeader : UICollectionReusableView
{
    UIView * _badgeView; // +0x8
    MMUILabel * _titleLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithLevel:(unsigned long long)arg1 maxLevel:(unsigned long long)arg2 theme:(id)arg3;
- (void)layoutSubviews;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
