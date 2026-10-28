@interface MMFinderLiveRecentRewardUserItem : MMLiveUserStateItem
{
    BOOL _unfold; // +0x8
    FinderLiveContact * _liveContact; // +0x10
    NSMutableArray * _recentRewardGiftItems; // +0x18
    double _unfoldHeight; // +0x20
}
+ (id)batchConvert:(id)arg1;
- (id)initWithLiveContact:(id)arg1 giftItems:(id)arg2;
- (double)preCalculateHeightAtWidth:(double)arg1;
- (double)preCalculateGiftsFirstLineLengthAtWidth:(double)arg1;
- (id)userName;
- (id)liveContact;
- (void)setLiveContact:(id)arg1;
- (id)recentRewardGiftItems;
- (void)setRecentRewardGiftItems:(id)arg1;
- (BOOL)unfold;
- (void)setUnfold:(BOOL)arg1;
- (double)unfoldHeight;
- (void)setUnfoldHeight:(double)arg1;
- (void).cxx_destruct;
@end
