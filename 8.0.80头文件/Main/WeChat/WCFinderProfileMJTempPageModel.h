@interface WCFinderProfileMJTempPageModel : WCFinderStreamProfilePageModel <WCFinderCreatorTemplateExt>
{
    BOOL _hasMore; // +0x8
    BOOL _hasError; // +0x9
    BOOL _isLoading; // +0xa
    unsigned long long _refreshTime; // +0x10
    CreateMobileTemplateButtonInfo * _createMobileTemplateButtonInfo; // +0x18
    id <WCFinderProfileMJTempPageModelDelegate> _delegate; // +0x20
    NSString * _username; // +0x28
    NSMutableArray * _mutContentVMS; // +0x30
    NSData * _lastBuff; // +0x38
}
+ (BOOL)shouldDisplay:(id)arg1;
+ (BOOL)allowLimitMode;
+ (id)overviewSectionTypes;
+ (int)tabId;
- (void)_updateOverviewSection:(long long)arg1 templates:(id)arg2;
- (void)requestPageData;
- (id)init;
- (void)dealloc;
- (void)onCreatorTemplateDidUnpublish:(id)arg1;
- (id)contentVMS;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (BOOL)hasContentForProfileTabReport;
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
- (id)createMobileTemplateButtonInfo;
- (void)setCreateMobileTemplateButtonInfo:(id)arg1;
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
