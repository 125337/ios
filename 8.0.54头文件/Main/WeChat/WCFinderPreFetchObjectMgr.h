@interface WCFinderPreFetchObjectMgr : NSObject
{
    MMLRUCache * _feedPreFetchValidityPeriodCache; // +0x8
    NSMutableDictionary * _feedRequestDict; // +0x10
    MMTimer * _requestTimer; // +0x18
    id <WCFinderPreFetchObjectMgrDelegate> _delegate; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (id)feedRequestDict;
- (void)preFetchDataItemWithTid:(id)arg1 exportId:(id)arg2 nonceID:(id)arg3 scene:(int)arg4;
- (void)addPrefetchObject:(id)arg1 scene:(int)arg2;
- (void)startRequest;
- (void)checkAndStarRequest;
- (id)feedPreFetchValidityPeriodCache;
- (void)updateDataItemPreFetchTime:(id)arg1 validityPeriod:(unsigned long long)arg2;
- (BOOL)dataItemCanPreFetchWithId:(id)arg1;
- (void)setFeedPreFetchValidityPeriodCache:(id)arg1;
- (void)setFeedRequestDict:(id)arg1;
- (id)requestTimer;
- (void)setRequestTimer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

