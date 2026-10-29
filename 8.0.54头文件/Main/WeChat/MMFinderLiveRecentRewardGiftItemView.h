@interface MMFinderLiveRecentRewardGiftItemView : UIView
{
    BOOL _isIdle; // +0x8
    UIImageView * _giftImageView; // +0x10
    MMUILabel * _giftCountLabel; // +0x18
    MMFinderLiveRecentRewardGiftItem * _giftItem; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 GiftItem:(id)arg2;
- (id)initLastOneWithFrame:(CGRect)arg1 GiftItem:(id)arg2;
- (void)initMoreLabel;
- (id)giftImageView;
- (id)giftCountLabel;
- (void)setNotIdleWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateGiftImage;
- (void)updateCountLabel;
- (id)getDefaultGiftThumbImage;
- (void)updateItem:(id)arg1;
- (id)liveTask;
- (BOOL)isIdle;
- (void)setIsIdle:(BOOL)arg1;
- (void)setGiftImageView:(id)arg1;
- (void)setGiftCountLabel:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (void).cxx_destruct;
@end

