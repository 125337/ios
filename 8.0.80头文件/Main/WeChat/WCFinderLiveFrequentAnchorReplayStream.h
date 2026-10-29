@interface WCFinderLiveFrequentAnchorReplayStream : NSObject
{
    BOOL _hasMore; // +0x8
    NSString * _streamId; // +0x10
    NSString * _enterFeedId; // +0x18
    FinderLiveGetFrequentWatchAnchorInfoRequest * _request; // +0x20
    WCFinderFeedArray * _feedArray; // +0x28
    id /* block */ _cancelPendingRequest; // +0x30
}
- (void)dealloc;
- (id)containerBuffer;
- (id)feedContainer:(id)arg1;
- (void)updateRequest:(id)arg1 feedContainer:(id)arg2;
- (void)fetchNextPage:(id)arg1;
- (void)fetchNextPage:(id)arg1 remainingEmptyPages:(unsigned long long)arg2;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)enterFeedId;
- (void)setEnterFeedId:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id /* block */)cancelPendingRequest;
- (void)setCancelPendingRequest:(id /* block */)arg1;
- (void).cxx_destruct;
@end
