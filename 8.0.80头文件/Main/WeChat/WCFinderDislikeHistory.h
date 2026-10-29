@interface WCFinderDislikeHistory : NSObject <PBCoding>
{
    unsigned int _feedVideoUsedCount; // +0x8
    unsigned int _feedLiveUsedCount; // +0xc
    unsigned long long _feedEduTipsLastShow; // +0x10
    unsigned long long _liveEduTipsLastShow; // +0x18
}
+ (void)PBArrayAdd_feedVideoUsedCount;
+ (void)PBArrayAdd_feedLiveUsedCount;
+ (void)PBArrayAdd_feedEduTipsLastShow;
+ (void)PBArrayAdd_liveEduTipsLastShow;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)feedVideoUsedCount;
- (void)setFeedVideoUsedCount:(unsigned int)arg1;
- (unsigned int)feedLiveUsedCount;
- (void)setFeedLiveUsedCount:(unsigned int)arg1;
- (unsigned long long)feedEduTipsLastShow;
- (void)setFeedEduTipsLastShow:(unsigned long long)arg1;
- (unsigned long long)liveEduTipsLastShow;
- (void)setLiveEduTipsLastShow:(unsigned long long)arg1;
@end
