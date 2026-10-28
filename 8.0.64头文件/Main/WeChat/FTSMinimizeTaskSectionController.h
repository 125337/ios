@interface FTSMinimizeTaskSectionController : FTSBaseSectionController <IFTSMinimizeTaskLocalSearchExt>
{
    NSArray * _arrTasks; // +0x8
}
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
- (void)search:(id)arg1;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)selectSearchItem:(id)arg1 index:(unsigned int)arg2;
- (void)onFTSMinimizeTaskSearchResultChangedForDetail;
- (id)arrTasks;
- (void)setArrTasks:(id)arg1;
- (void).cxx_destruct;
@end
