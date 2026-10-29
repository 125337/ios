@interface FTSSettingSectionController : FTSBaseSectionController <IFTSSettingSearchMgrExt>
{
    NSArray * _settings; // +0x8
}
- (void)didUpdateWithModel:(id)arg1;
- (id)sectionTitle;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (unsigned long long)sectionType;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)didSelectRowAtIndex:(long long)arg1;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)recordClickFlow:(long long)arg1;
- (id)countLimitConifg;
- (void)search:(id)arg1;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSSettingSearchFinishForDetailPage;
- (id)settings;
- (void)setSettings:(id)arg1;
- (void).cxx_destruct;
@end
