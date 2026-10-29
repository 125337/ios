@interface WCVideoProducerMusicSearchRequest : NSObject <NSCopying>
{
    NSString * _searchKey; // +0x8
    NSMutableArray * _searchPlayingOperationList; // +0x10
    OrderedDictionary * _showedSearchMusicListMap; // +0x18
    WCVideoProducerMusicPlayingOperation * _currentSearchPlayingOperation; // +0x20
    double _searchRequestBeginTime; // +0x28
    double _searchRequestEndTime; // +0x30
}
- (id)initWithSearchKey:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)_searchResultDidFinish;
- (void)_searchResultDidShowMusic:(id)arg1 atIndex:(long long)arg2;
- (void)_searchResultDidSelectMusic:(id)arg1 atIndex:(long long)arg2;
- (void)_searchResultDidStartPlayingSelectedMusic;
- (void)_searchResultDidStopPlayingSelectedMusic;
- (id)searchKey;
- (void)setSearchKey:(id)arg1;
- (id)searchPlayingOperationList;
- (void)setSearchPlayingOperationList:(id)arg1;
- (id)showedSearchMusicListMap;
- (void)setShowedSearchMusicListMap:(id)arg1;
- (id)currentSearchPlayingOperation;
- (void)setCurrentSearchPlayingOperation:(id)arg1;
- (double)searchRequestBeginTime;
- (void)setSearchRequestBeginTime:(double)arg1;
- (double)searchRequestEndTime;
- (void)setSearchRequestEndTime:(double)arg1;
- (void).cxx_destruct;
@end

