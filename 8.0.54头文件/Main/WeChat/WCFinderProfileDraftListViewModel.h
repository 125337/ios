@interface WCFinderProfileDraftListViewModel : WCFinderStreamProfilePageModel <WCFinderFeedDraftExt>
{
    BOOL _continueFlag; // +0x8
    BOOL _forbidenModifyMVDraft; // +0x9
    id <WCFinderProfileDraftListViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _mutableContentVMS; // +0x18
    NSData * _lastBuff; // +0x20
    WCFinderBaseCgi * _loadingCGI; // +0x28
    NSMutableArray * _savingDraftList; // +0x30
}
+ (BOOL)shouldDisplay:(id)arg1;
+ (int)tabId;
- (id)init;
- (void)doLoadCache;
- (void)requestPageData;
- (void)dealloc;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)reportClickTab:(int)arg1;
- (void)reportExposeTab:(int)arg1;
- (id)contentVMS;
- (BOOL)loading;
- (void)_loadCacheData:(id)arg1;
- (void)requestNextPageData;
- (void)_requestNextPageData:(BOOL)arg1;
- (void)appendSavingDraftList:(id)arg1;
- (id)mapDataItems:(id)arg1;
- (id)mapDraftItems:(id)arg1;
- (id)createDraftVM:(id)arg1;
- (void)deleteItem:(id)arg1 callback:(id /* block */)arg2;
- (void)retryItem:(id)arg1;
- (void)onFinderFeedDraftDeleted:(id)arg1;
- (void)onFinderFeedDraftAdded:(id)arg1;
- (void)onFinderFeedDraftCreated:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)mutableContentVMS;
- (void)setMutableContentVMS:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)loadingCGI;
- (void)setLoadingCGI:(id)arg1;
- (id)savingDraftList;
- (void)setSavingDraftList:(id)arg1;
- (BOOL)forbidenModifyMVDraft;
- (void)setForbidenModifyMVDraft:(BOOL)arg1;
- (void).cxx_destruct;
@end

