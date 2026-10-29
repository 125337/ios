@interface MJShootComposingTemplateSinglePageViewModel : MJShootComposingTemplateTabViewModel
{
    BOOL _hasEverFilteredOutTemplates; // +0x8
    BOOL _isFetching; // +0x9
    NSMutableArray * _templateItems; // +0x10
    id <MJShootComposingTemplateSinglePageViewModelDelegate> _delegate; // +0x18
    id <MJShootComposingTemplateSinglePageViewModelTabDataSource> _tabDataSource; // +0x20
    UBArraySignal * _defaultTabDidUpdateTemplateSignal; // +0x28
    NSData * _lastPageBuf; // +0x30
    long long _lastContinueFlag; // +0x38
}
- (id)initWithCamEffectBizScene:(unsigned long long)arg1;
- (void)fetchTemplateItems;
- (void)fetchRecTemplateItems;
- (void)fetchFavTemplateItems;
- (void)loadMoreTemplateIfNeeded;
- (BOOL)shouldFetchMoreTemplate;
- (BOOL)containsTemplateWithID:(id)arg1;
- (id)templateItems;
- (void)setTemplateItems:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabDataSource;
- (void)setTabDataSource:(id)arg1;
- (id)defaultTabDidUpdateTemplateSignal;
- (BOOL)hasEverFilteredOutTemplates;
- (void)setHasEverFilteredOutTemplates:(BOOL)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id)lastPageBuf;
- (void)setLastPageBuf:(id)arg1;
- (long long)lastContinueFlag;
- (void)setLastContinueFlag:(long long)arg1;
- (void).cxx_destruct;
@end
