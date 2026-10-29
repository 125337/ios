@interface WCStoryPostLimitObj : NSObject <PBCoding>
{
    unsigned int _hadPostedCount; // +0x8
    unsigned int _nextPostPeriod; // +0xc
    unsigned int _lastPostSuccTime; // +0x10
}
+ (void)PBArrayAdd_hadPostedCount;
+ (void)PBArrayAdd_nextPostPeriod;
+ (void)PBArrayAdd_lastPostSuccTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned int)hadPostedCount;
- (void)setHadPostedCount:(unsigned int)arg1;
- (unsigned int)nextPostPeriod;
- (void)setNextPostPeriod:(unsigned int)arg1;
- (unsigned int)lastPostSuccTime;
- (void)setLastPostSuccTime:(unsigned int)arg1;
@end

