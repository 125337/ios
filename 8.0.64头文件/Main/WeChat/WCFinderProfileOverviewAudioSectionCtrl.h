@interface WCFinderProfileOverviewAudioSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
- (id)customBottomMoreBtnWording;
- (id)sections;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (long long)seperatorStyleForSection:(id)arg1;
- (UIEdgeInsets)edgeInsetForSeperator:(id)arg1 position:(long long)arg2;
@end
