@interface WCFinderProfileStoreOverviewSecCtrl : WCFinderProfileOverviewBaseSectionCtrl
{
    NSMutableDictionary * _vmMap; // +0x8
}
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
- (id)sections;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (void)calcuteCellSize;
- (long long)displayMaxCount;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (id)vmMap;
- (void)setVmMap:(id)arg1;
- (void).cxx_destruct;
@end
