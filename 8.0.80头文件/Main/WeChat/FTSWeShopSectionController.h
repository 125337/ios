@interface FTSWeShopSectionController : FTSBaseSectionController <IFTSWeShopExt>
{
    NSString * _searchQuery; // +0x8
    BOOL hasFirstWeshopBuffer; // +0x10
    NSArray * _modelContainers; // +0x18
}
- (id)init;
- (void)didUpdateWithModel:(id)arg1;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)didSelectRowAtIndex:(long long)arg1;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)willDisplayCell:(id)arg1 forRowAtIndex:(long long)arg2;
- (id)sectionTitle;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (void)fillCommonClickReportStat:(id)arg1 matchTip:(id)arg2;
- (void)search:(id)arg1;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSWeShopDetailSearchResultChanged:(id)arg1;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (id)modelContainers;
- (void)setModelContainers:(id)arg1;
- (void).cxx_destruct;
@end
