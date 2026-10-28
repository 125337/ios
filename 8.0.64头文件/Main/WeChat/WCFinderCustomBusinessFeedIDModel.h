@interface WCFinderCustomBusinessFeedIDModel : NSObject
{
    BOOL _lastFeed; // +0x8
    BOOL _fetchYet; // +0x9
    BOOL _isUpContent; // +0xa
    NSString * _businessId; // +0x10
    NSString * _feedId; // +0x18
}
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (BOOL)lastFeed;
- (void)setLastFeed:(BOOL)arg1;
- (BOOL)fetchYet;
- (void)setFetchYet:(BOOL)arg1;
- (BOOL)isUpContent;
- (void)setIsUpContent:(BOOL)arg1;
- (void).cxx_destruct;
@end
