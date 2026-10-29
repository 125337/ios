@interface WCFinderLifeHomeViewModel : NSObject <WCFinderPostDataItemExt, WCFinderDataItemExt>
{
    BOOL _showSearchBar; // +0x8
    int _commentScene; // +0xc
    id <WCFinderLifeHomeViewModelDelegate> _delegate; // +0x10
    NSArray * _rootTags; // +0x18
    unsigned long long _locationStatus; // +0x20
    long long _defaultSelectedIdx; // +0x28
    NSMutableArray * _mutDisplayPages; // +0x30
    WCFinderCachedLocation * _cachedLocation; // +0x38
    AnyPromise * _fetchLocationPromise; // +0x40
    MMTimer * _locationFetchTimer; // +0x48
    NSMutableArray * _postedDataItems; // +0x50
    WCFinderGetLocationToken * _locToken; // +0x58
}
- (id)init;
- (void)dealloc;
- (id)displayPages;
- (void)tryRefetchLocationAuth;
- (void)cancelFetchLocation;
- (id)requestLocationAuth;
- (void)requestFirstPage;
- (void)refetchDatasAfterAuthedLocation;
- (id)fetchFirstPages:(BOOL)arg1;
- (void)_setupFirstPages:(id)arg1;
- (id)displayPageForRootTag:(id)arg1;
- (void)changeFilter:(id)arg1 forRootTag:(id)arg2;
- (void)setupTimelyLocationFetch;
- (void)invalidateLocationFetchTimer;
- (void)triggerTimelyLocationFetch;
- (void)updateCachedLocationWithLocation:(id)arg1;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (id)findRootTabPageVM:(long long *)arg1 forceCreate:(BOOL)arg2;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rootTags;
- (void)setRootTags:(id)arg1;
- (unsigned long long)locationStatus;
- (void)setLocationStatus:(unsigned long long)arg1;
- (long long)defaultSelectedIdx;
- (void)setDefaultSelectedIdx:(long long)arg1;
- (BOOL)showSearchBar;
- (void)setShowSearchBar:(BOOL)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)mutDisplayPages;
- (void)setMutDisplayPages:(id)arg1;
- (id)cachedLocation;
- (void)setCachedLocation:(id)arg1;
- (id)fetchLocationPromise;
- (void)setFetchLocationPromise:(id)arg1;
- (id)locationFetchTimer;
- (void)setLocationFetchTimer:(id)arg1;
- (id)postedDataItems;
- (void)setPostedDataItems:(id)arg1;
- (id)locToken;
- (void)setLocToken:(id)arg1;
- (void).cxx_destruct;
@end

