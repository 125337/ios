@interface WCFinderUserPageFillInFetcher : NSObject <WCFinderProfileUserPageFetcher>
{
    id <WCFinderProfileUserPageFetcher> _fetcher; // +0x8
    unsigned long long _count; // +0x10
}
+ (id)fetcherWithInner:(id)arg1 ensureCount:(long long)arg2;
- (id)userpageWithParams:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)startFetch:(id)arg1 data:(id)arg2 retryCount:(long long)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (id)fetcher;
- (void)setFetcher:(id)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
