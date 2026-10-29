@interface LiveFollowCacheInfo : NSObject <PBCoding>
{
    BOOL _isFinderBizLive; // +0x8
    unsigned int _liveStartTime; // +0xc
    unsigned long long _liveTaskId; // +0x10
}
+ (void)PBArrayAdd_liveTaskId;
+ (void)PBArrayAdd_liveStartTime;
+ (void)PBArrayAdd_isFinderBizLive;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)liveTaskId;
- (void)setLiveTaskId:(unsigned long long)arg1;
- (unsigned int)liveStartTime;
- (void)setLiveStartTime:(unsigned int)arg1;
- (BOOL)isFinderBizLive;
- (void)setIsFinderBizLive:(BOOL)arg1;
@end
