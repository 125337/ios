@interface WCFinderProfileFeedOverfiewMoreFeedSecCtrl : WCFinderProfileOverviewBaseSectionCtrl <WCFinderProfileTagFeedViewModelDelegate>
{
    WCFinderProfileOverviewFeedSectionCtrl * _feedSecCtrl; // +0x8
    WCFinderFeedArray * _displayFeedArray; // +0x10
    WCFinderProfileTagFeedViewModel<WCFinderProfilePullableFeedViewModel> * _feedModel; // +0x18
}
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
- (void)onSectionDataChanged:(id)arg1;
- (id)sections;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (BOOL)showJustWatchWithContentVM:(id)arg1;
- (void)willDisplayItemIdentifier:(id)arg1;
- (void)onFeedArrayChange;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onItemUnExpose:(id)arg1 exposeObj:(id *)arg2;
- (id)genFeedReportDictWithIndexPath:(id)arg1 dataItem:(id)arg2;
- (id)genSession3ReportDict;
- (id)feedSecCtrl;
- (void)setFeedSecCtrl:(id)arg1;
- (id)displayFeedArray;
- (void)setDisplayFeedArray:(id)arg1;
- (id)feedModel;
- (void)setFeedModel:(id)arg1;
- (void).cxx_destruct;
@end
