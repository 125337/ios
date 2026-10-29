@interface FinderFeedLaunchRequest : NSObject
{
    long long _feedId; // +0x8
    NSString * _nonceId; // +0x10
}
+ (id)makeWithFeedId:(long long)arg1 nonceId:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)feedId;
- (void)setFeedId:(long long)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (void).cxx_destruct;
@end

