@interface MMFinderNavLiveStreamPreRecommendRequestInfo : NSObject <PBCoding>
{
    unsigned long long _requestTimeMs; // +0x8
    unsigned long long _objectId; // +0x10
    NSString * _reddotTipsUUid; // +0x18
}
+ (void)PBArrayAdd_requestTimeMs;
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_reddotTipsUUid;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)requestTimeMs;
- (void)setRequestTimeMs:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)reddotTipsUUid;
- (void)setReddotTipsUUid:(id)arg1;
- (void).cxx_destruct;
@end
