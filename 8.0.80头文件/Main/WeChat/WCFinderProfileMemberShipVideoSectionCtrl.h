@interface WCFinderProfileMemberShipVideoSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl <WCFinderProfileMemberShipVideoSecDataExt>
{
    NSMutableDictionary * _cellHeightMap; // +0x8
}
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
- (id)data;
- (void)onSectionDataChanged:(id)arg1;
- (void)setContactViewModel:(id)arg1;
- (id)sections;
- (id)itemModelForSection:(id)arg1 index:(long long)arg2;
- (id)itemIdentifierForModel:(id)arg1 section:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (long long)displayMaxRow;
- (id)memberShipCell:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)videoCell:(id)arg1 identifier:(id)arg2;
- (CGSize)cellHeightForItem:(long long)arg1 collectionView:(id)arg2;
- (double)cellDescHeightForContentVM:(id)arg1 width:(double)arg2;
- (void)onPageSizeChanged;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (void)onClickHeaderRightBtn:(id)arg1;
- (void)onClickAll:(id)arg1;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onItemUnExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)reportItemClick:(id)arg1;
- (void)onFeedArrayChanged;
- (void)onMemberShipSecDataExtChange;
- (id)cellHeightMap;
- (void)setCellHeightMap:(id)arg1;
- (void).cxx_destruct;
@end
