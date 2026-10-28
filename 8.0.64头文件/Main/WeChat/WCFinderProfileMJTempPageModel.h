@interface WCFinderProfileMJTempPageModel : WCFinderStreamProfilePageModel
{
    BOOL _hasMore; // +0x8
    BOOL _hasError; // +0x9
    BOOL _isLoading; // +0xa
    unsigned long long _refreshTime; // +0x10
    id <WCFinderProfileMJTempPageModelDelegate> _delegate; // +0x18
    NSString * _username; // +0x20
    NSMutableArray * _mutContentVMS; // +0x28
    NSData * _lastBuff; // +0x30
}
+ (BOOL)shouldDisplay:(id)arg1;
+ (BOOL)allowLimitMode;
+ (id)overviewSectionTypes;
+ (int)tabId;
- (void)_updateOverviewSection:(long long)arg1 templates:(id)arg2;
- (void)requestPageData;
- (id)init;
- (id)contentVMS;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)requestFirstPage;
- (void)requestNextPage;
- (void)_requestData:(BOOL)arg1;
- (id)reportParamsBlock;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (BOOL)hasError;
- (void)setHasError:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)mutContentVMS;
- (void)setMutContentVMS:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (void).cxx_destruct;
@end
