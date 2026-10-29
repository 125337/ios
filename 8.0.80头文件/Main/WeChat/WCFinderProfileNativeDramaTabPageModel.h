@interface WCFinderProfileNativeDramaTabPageModel : WCFinderStreamProfilePageModel
{
    BOOL _continueFlag; // +0x8
    BOOL _isFetching; // +0x9
    id <WCFinderProfileNativeDramaTabPageModelDelegate> _delegate; // +0x10
    NSDiffableDataSourceSnapshot * _snapshot; // +0x18
    NSMutableArray * _dramaList; // +0x20
    NSData * _lastBuffer; // +0x28
}
+ (int)tabId;
- (id)init;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)_updateSection;
- (id)itemAtIndex:(long long)arg1;
- (void)requestPageData;
- (void)requestNextPage;
- (void)_fetchData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)dramaList;
- (void)setDramaList:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
