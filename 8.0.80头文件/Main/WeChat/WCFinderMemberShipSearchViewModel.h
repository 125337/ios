@interface WCFinderMemberShipSearchViewModel : NSObject
{
    BOOL _hasMore; // +0x8
    id <WCFinderMemberShipSearchViewModelDelegate> _delegate; // +0x10
    NSArray * _results; // +0x18
    NSString * _queryStr; // +0x20
    NSString * _finderUsername; // +0x28
    NSData * _lastBuff; // +0x30
}
- (id)initWithFinderUserName:(id)arg1;
- (void)requestNextPage;
- (void)search:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)results;
- (void)setResults:(id)arg1;
- (id)queryStr;
- (void)setQueryStr:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (void).cxx_destruct;
@end
