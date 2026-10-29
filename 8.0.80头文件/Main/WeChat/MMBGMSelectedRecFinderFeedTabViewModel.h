@interface MMBGMSelectedRecFinderFeedTabViewModel : NSObject <MMBGMTabViewModelProtocol>
{
    BOOL _hasMore; // +0x8
    BOOL _loadingData; // +0x9
    id <MMBGMSelectedRecFinderFeedTabViewModelDelegate> _delegate; // +0x10
    MMBGMSelectedConfig * _config; // +0x18
    MMBGMPanelPublishContext * _publishContext; // +0x20
    NSString * _currentSearchText; // +0x28
    WCFinderFeedArray * _contentVMs; // +0x30
    NSData * _sessionBuffer; // +0x38
}
- (id)init;
- (id)tabTitle;
- (unsigned long long)feedCount;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMOfTid:(id)arg1;
- (unsigned long long)indexOfTid:(id)arg1;
- (id)allVmIds;
- (BOOL)searchDataWithText:(id)arg1;
- (void)fetchData;
- (void)fetchMoreData;
- (void)_fetchDataWithText:(id)arg1;
- (void)reset;
- (unsigned long long)getMaterialDuration;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (id)currentSearchText;
- (void)setCurrentSearchText:(id)arg1;
- (id)contentVMs;
- (void)setContentVMs:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (BOOL)isLoadingData;
- (void)setLoadingData:(BOOL)arg1;
- (void).cxx_destruct;
@end
