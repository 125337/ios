@interface WCFinderProfileOverviewFeedSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl
{
    NSMutableSet * _deleteFeedIds; // +0x8
}
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
+ (id)feedInfosInDataItem:(id)arg1 layout:(id)arg2 atIndexPath:(id)arg3;
- (void)onSectionDataChanged:(id)arg1;
- (id)displayTids;
- (id)sectionTitle;
- (id)sections;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (long long)displayMaxItemCount;
- (void)willDisplayItemIdentifier:(id)arg1;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onItemUnExpose:(id)arg1 exposeObj:(id *)arg2;
- (id)genFeedReportDictWithIndexPath:(id)arg1 dataItem:(id)arg2;
- (id)genSession3ReportDict;
- (CGRect)liveMorphDismissRectWithCustomKey:(id)arg1;
- (BOOL)showJustWatchWithContentVM:(id)arg1;
- (void)onFeedArrayChanged:(id)arg1;
- (id)deleteFeedIds;
- (void)setDeleteFeedIds:(id)arg1;
- (void).cxx_destruct;
@end

