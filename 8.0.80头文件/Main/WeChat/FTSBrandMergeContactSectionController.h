@interface FTSBrandMergeContactSectionController : FTSBrandContactSectionController <IFTSContactMgrExt>
- (id)sectionTitle;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (unsigned long long)sectionType;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)countLimitConifg;
- (void)search:(id)arg1;
- (void)onFTSContactSearchFinish:(id)arg1;
@end
