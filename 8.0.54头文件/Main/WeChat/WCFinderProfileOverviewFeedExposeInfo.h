@interface WCFinderProfileOverviewFeedExposeInfo : NSObject
{
    BOOL _hasJustWatch; // +0x8
    unsigned long long _exposeTime; // +0x10
}
- (unsigned long long)exposeTime;
- (void)setExposeTime:(unsigned long long)arg1;
- (BOOL)hasJustWatch;
- (void)setHasJustWatch:(BOOL)arg1;
@end

