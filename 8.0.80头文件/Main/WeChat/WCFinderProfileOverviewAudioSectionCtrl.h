@interface WCFinderProfileOverviewAudioSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
- (id)customBottomMoreBtnWording;
- (id)sections;
- (id)itemModelForSection:(id)arg1 index:(long long)arg2;
- (id)itemIdentifierForModel:(id)arg1 section:(id)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (long long)seperatorStyleForSection:(id)arg1;
- (UIEdgeInsets)edgeInsetForSeperator:(id)arg1 position:(long long)arg2;
@end
