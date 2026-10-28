@interface MMBGMSearchViewModel : NSObject
{
    BOOL _hasMore; // +0x8
    unsigned int _currentPageOffset; // +0xc
    MMBGMSelectedConfig * _config; // +0x10
    id <MMBGMSearchViewModelDelegate> _delegate; // +0x18
    NSString * _currentSearchKey; // +0x20
    MMBGMPanelPublishContext * _publishContext; // +0x28
    MMBGMUniqueMutableArray * _searchResults; // +0x30
    unsigned long long _currentSearchId; // +0x38
    NSData * _sessionBuffer; // +0x40
}
- (id)init;
- (BOOL)searchMusicWithKey:(id)arg1;
- (void)loadMoreData;
- (void)reset;
- (void)_doStoryBGMSearchCGIWithKey:(id)arg1 isFirstPage:(BOOL)arg2;
- (unsigned long long)getMaterialDuration;
- (BOOL)hasMoreData;
- (unsigned long long)dataCount;
- (id)dataAtIndex:(unsigned long long)arg1;
- (id)searchResults;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentSearchKey;
- (void)setCurrentSearchKey:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (unsigned long long)currentSearchId;
- (void)setCurrentSearchId:(unsigned long long)arg1;
- (unsigned int)currentPageOffset;
- (void)setCurrentPageOffset:(unsigned int)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end
