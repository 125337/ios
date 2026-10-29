@interface FTSFavSectionController : FTSBaseSectionController <IFTSFavMgrExt>
{
    NSArray * _favItems; // +0x8
}
- (id)init;
- (void)didUpdateWithModel:(id)arg1;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (double)heightForRowAtIndex:(long long)arg1;
- (id)sectionTitle;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (void)selectFavSearchItem:(id)arg1 index:(unsigned int)arg2;
- (void)search:(id)arg1;
- (BOOL)hasSearchDone;
- (BOOL)hasMoreData;
- (void)onLoadMore;
- (void)cancelSearch;
- (void)onFTSDetailPageFavResultChanged;
- (id)favItems;
- (void)setFavItems:(id)arg1;
- (void).cxx_destruct;
@end

