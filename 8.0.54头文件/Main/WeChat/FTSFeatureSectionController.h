@interface FTSFeatureSectionController : FTSBaseSectionController <IFTSMemorySearchMgrExt>
{
    NSArray * _features; // +0x8
}
- (void)didUpdateWithModel:(id)arg1;
- (id)sectionTitle;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (unsigned long long)sectionType;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)countLimitConifg;
- (void)search:(id)arg1;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSMemorySearchResultChangedForFeatureDetailPage;
- (id)features;
- (void)setFeatures:(id)arg1;
- (void).cxx_destruct;
@end

