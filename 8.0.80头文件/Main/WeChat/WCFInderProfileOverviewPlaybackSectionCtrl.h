@interface WCFInderProfileOverviewPlaybackSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl <WCFinderZoomAnimatorBehavior>
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
+ (id)feedInfosInDataItem:(id)arg1 layout:(id)arg2 atIndexPath:(id)arg3;
- (id)sections;
- (id)itemModelForSection:(id)arg1 index:(long long)arg2;
- (id)itemIdentifierForModel:(id)arg1 section:(id)arg2;
- (long long)displayRowCount;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (void)willDisplayItemIdentifier:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onItemUnExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)reportFeedStreamClickSelectedIndexPath:(id)arg1;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
@end
