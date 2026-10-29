@interface MMFinderLiveRecentRewardGiftsView : UIView
{
    id <MMFinderLiveRecentRewardGiftsViewDelegate> _delegate; // +0x8
    unsigned long long _layoutMode; // +0x10
    double _maxLength; // +0x18
    NSMutableArray * _reservedItemViews; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onClickListOneItemView;
- (void)refreshContentWithUserItem:(id)arg1;
- (id)addAndItemViewToSubViewWithFrame:(CGRect)arg1 giftItem:(id)arg2;
- (void)cleanUnresersedGiftItemViews;
- (void)resetReservedItemViewsState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)layoutMode;
- (void)setLayoutMode:(unsigned long long)arg1;
- (double)maxLength;
- (void)setMaxLength:(double)arg1;
- (id)reservedItemViews;
- (void)setReservedItemViews:(id)arg1;
- (void).cxx_destruct;
@end

