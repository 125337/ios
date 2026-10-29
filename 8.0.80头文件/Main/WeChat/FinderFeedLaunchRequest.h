@interface FinderFeedLaunchRequest : NSObject
{
    long long _feedId; // +0x8
    NSString * _nonceId; // +0x10
    long long _scene; // +0x18
    long long _cardType; // +0x20
}
+ (id)makeWithFeedId:(long long)arg1 nonceId:(id)arg2 scene:(long long)arg3 cardType:(long long)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)feedId;
- (void)setFeedId:(long long)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)cardType;
- (void)setCardType:(long long)arg1;
- (void).cxx_destruct;
@end
