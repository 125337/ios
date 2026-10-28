@interface GameVideoAlbumDataFetcher : MMObject
{
    BOOL _isReachEnding; // +0x8
    BOOL _isRequesting; // +0x9
    unsigned int _totalCount; // +0xc
    unsigned int _newCount; // +0x10
    id <GameVideoAlbumDataFetcherDelegate> _delegate; // +0x18
    unsigned long long _startTag; // +0x20
}
- (void)resetIndex;
- (void)fetchRecommendVideoList;
- (void)loadRecommendVideoListCache;
- (id)parseAlbumVideoItem:(id)arg1;
- (void)fetchMoreVideoList;
- (id)parseRecommendTags:(id)arg1;
- (id)parseTags:(id)arg1;
- (unsigned int)pageSize;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)totalCount;
- (void)setTotalCount:(unsigned int)arg1;
- (BOOL)isReachEnding;
- (void)setIsReachEnding:(BOOL)arg1;
- (unsigned long long)startTag;
- (void)setStartTag:(unsigned long long)arg1;
- (unsigned int)newCount;
- (void)setNewCount:(unsigned int)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (void).cxx_destruct;
@end
