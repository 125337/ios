@interface WCFinderProfilePaidCollectionBaseSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl
+ (long long)defaultDisplayRowCount;
+ (void)setupRegister:(id)arg1;
- (long long)moreBtnType;
- (long long)displayRowCount;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (long long)seperatorStyleForSection:(id)arg1;
- (UIEdgeInsets)edgeInsetForSeperator:(id)arg1 position:(long long)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
@end

