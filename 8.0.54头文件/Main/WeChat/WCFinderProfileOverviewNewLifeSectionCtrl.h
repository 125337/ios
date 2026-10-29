@interface WCFinderProfileOverviewNewLifeSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl <WCFinderDataItemExt>
{
    NSArray * _dataList; // +0x8
}
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
- (id)init;
- (void)onSectionDataChanged:(id)arg1;
- (id)sectionTitle;
- (long long)moreBtnType;
- (id)sections;
- (long long)displayMaxCount;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (void)onNewLifePostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)dataList;
- (void)setDataList:(id)arg1;
- (void).cxx_destruct;
@end

