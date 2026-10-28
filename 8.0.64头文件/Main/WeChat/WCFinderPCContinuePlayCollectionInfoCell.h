@interface WCFinderPCContinuePlayCollectionInfoCell : UICollectionViewCell <WCFinderCyclePagerViewDelegate, WCFinderCyclePagerViewDataSource, WCFinderContinueCollectionPagerCellDelegate>
{
    BOOL _hadLightShock; // +0x8
    id <WCFinderPCContinuePlayCollectionInfoCellDelegate> _delegate; // +0x10
    WCFinderCyclePagerView * _cyclePagerView; // +0x18
    NSArray * _continueCollectionModelArr; // +0x20
    unsigned long long _explicitCount; // +0x28
    WCFinderCyclePagerFooterView * _footerView; // +0x30
}
+ (id)cellID;
- (void)updateWatchingCollectionModels:(id)arg1 explicitCount:(unsigned long long)arg2;
- (void)updateFooterType;
- (void)jumpToMore;
- (void)longPressCollectionInfoView:(id)arg1;
- (long long)numberOfItemsInPagerView:(id)arg1;
- (id)identifiersOfItemsInPagerView:(id)arg1;
- (id)pagerView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (id)layoutForPagerView:(id)arg1;
- (CGSize)getSingleItemSize;
- (id)getCurFooterView;
- (unsigned long long)getCurPagerFooterViewType;
- (void)pagerView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)pagerView:(id)arg1 updateReusableView:(id)arg2;
- (void)pagerViewDidScroll:(id)arg1;
- (void)pagerViewWillBeginDecelerating:(id)arg1;
- (BOOL)beyondBufferArea:(id)arg1;
- (id)cyclePagerView;
- (id)footerView;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCyclePagerView:(id)arg1;
- (id)continueCollectionModelArr;
- (void)setContinueCollectionModelArr:(id)arg1;
- (unsigned long long)explicitCount;
- (void)setExplicitCount:(unsigned long long)arg1;
- (void)setFooterView:(id)arg1;
- (BOOL)hadLightShock;
- (void)setHadLightShock:(BOOL)arg1;
- (void).cxx_destruct;
@end
