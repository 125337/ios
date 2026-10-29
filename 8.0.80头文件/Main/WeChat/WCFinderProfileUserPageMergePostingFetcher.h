@interface WCFinderProfileUserPageMergePostingFetcher : NSObject <WCFinderProfileUserPageFetcher>
{
    NSMutableArray * _postedDataItems; // +0x8
    NSString * _username; // +0x10
}
- (id)initWithUsername:(id)arg1;
- (id)userpageWithParams:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (id)postedDataItems;
- (void)setPostedDataItems:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
