@interface MMFinderLivePurchasedFeedViewModel : NSObject
{
    BOOL _isFetching; // +0x8
    BOOL _hasMoreData; // +0x9
    unsigned int _purchasedFeedsTotalCount; // +0xc
    id <MMFinderLivePurchasedFeedViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _purchasedFeedsList; // +0x18
    NSData * _lastBuffer; // +0x20
}
- (id)init;
- (void)resetAndFetchPurchasedFeedsList;
- (void)fetchNextPurchasedFeedsList;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)purchasedFeedsList;
- (void)setPurchasedFeedsList:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned int)purchasedFeedsTotalCount;
- (void)setPurchasedFeedsTotalCount:(unsigned int)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)hasMoreData;
- (void)setHasMoreData:(BOOL)arg1;
- (void).cxx_destruct;
@end

