@interface WCFinderProfileOverviewTemplateSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
- (id)templates;
- (id)sectionTitle;
- (long long)moreBtnType;
- (id)sections;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (long long)displayMaxCount;
@end

