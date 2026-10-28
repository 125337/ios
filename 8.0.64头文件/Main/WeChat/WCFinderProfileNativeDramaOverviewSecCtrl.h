@interface WCFinderProfileNativeDramaOverviewSecCtrl : WCFinderProfileOverviewBaseSectionCtrl
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
- (id)sections;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
@end
