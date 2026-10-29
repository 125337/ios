@interface WCFinderProfileOverviewMusicSectionCtrl : WCFinderProfileOverviewBaseSectionCtrl
+ (id)sectionDefines;
+ (void)setupRegister:(id)arg1;
- (id)data;
- (id)sectionTitle;
- (long long)moreBtnType;
- (id)sections;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (id)layoutForSectionIdentifier:(id)arg1;
- (int)layoutTypeForSection:(id)arg1;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (long long)seperatorStyleForSection:(id)arg1;
- (UIEdgeInsets)edgeInsetForSeperator:(id)arg1 position:(long long)arg2;
- (long long)columnCountForLayoutType:(int)arg1;
- (BOOL)showMediaCount;
- (BOOL)showBottomJumpTabButton;
- (BOOL)onlyMusicSection;
- (void)onClickHeaderRightBtn:(id)arg1;
- (void)openPlaylist;
@end

