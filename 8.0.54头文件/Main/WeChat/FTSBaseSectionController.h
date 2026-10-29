@interface FTSBaseSectionController : MMTListSectionController <FTSExternalRouterEntry>
{
    id <FTSResultPage> _resultPage; // +0x8
    FTSVoiceSearchBarController * _ftsPresenter; // +0x10
    unsigned long long _mode; // +0x18
    FTSExternalRouter * _router; // +0x20
    _TtC6WeChat14FTSSectionData * _model; // +0x28
}
- (void)didUpdateToObject:(id)arg1;
- (void)didUpdateWithModel:(id)arg1;
- (id)sectionTitle;
- (id)cellForTitleInSection:(long long)arg1;
- (id)cellForBlank;
- (id)cellForMoreAtIndex:(long long)arg1;
- (id)cellForFoldButtonAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (void)didSelectRowAtIndex:(long long)arg1;
- (id)extraReportParams;
- (void)recordClickFlow:(long long)arg1;
- (long long)numberOfItems;
- (BOOL)hasFoldButton;
- (BOOL)isFoldButtonCellForIndex:(long long)arg1;
- (long long)numberOfItemsExceptTopTitile;
- (double)heightForRowAtIndex:(long long)arg1;
- (double)heightForFooter;
- (id)viewForFooter;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)curSearchText;
- (id)ftsTaskKey;
- (id)countLimitConifg;
- (long long)numberOfSearchItems;
- (unsigned long long)maxDisplayItemsCount;
- (id)titleForMoreCell;
- (BOOL)isDetailSearch;
- (BOOL)isGlobalSearch;
- (unsigned long long)sectionType;
- (id)noResultTipSuffix;
- (id)searchBarPlaceHolder;
- (long long)topNotSearchItemCount;
- (id)objectForIndexPath:(id)arg1;
- (void)onExposeItem:(id)arg1 indexPath:(id)arg2;
- (void)showBubbleTips:(id)arg1 view:(id)arg2 confirmBlock:(id /* block */)arg3;
- (void)search:(id)arg1;
- (BOOL)isSearching;
- (BOOL)hasMoreData;
- (BOOL)hasSearchDone;
- (BOOL)hasSearchResult;
- (void)cancelSearch;
- (void)onLoadMore;
- (id)lastQueryText;
- (void)fillCommonClickReportStat:(id)arg1 matchTip:(id)arg2;
- (id)getViewController;
- (id)getFTSContext;
- (id)model;
- (id)router;
- (id)description;
- (void)reportDataUpdate;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (unsigned int)getSubClickTypeForClickType:(unsigned int)arg1 index:(unsigned int)arg2;
- (id)resultPage;
- (void)setResultPage:(id)arg1;
- (id)ftsPresenter;
- (void)setFtsPresenter:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (void)setRouter:(id)arg1;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end

