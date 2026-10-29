@interface WCFinderUserPrefetchRelatedInfo : NSObject <PBCoding>
{
    unsigned long long _scene; // +0x8
    double _averageEnterCount; // +0x10
    unsigned long long _prefetchAttempCount; // +0x18
    unsigned long long _startTimestampOfLimitedPeriod; // +0x20
    double _probThreshold; // +0x28
}
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_prefetchAttempCount;
+ (void)PBArrayAdd_startTimestampOfLimitedPeriod;
+ (void)PBArrayAdd_probThreshold;
+ (void)PBArrayAdd_averageEnterCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithPrefetchScene:(unsigned long long)arg1;
- (id)reportUserDict;
- (void)updateAverageEnterCount:(double)arg1;
- (void)updatePrefetchAttempCount:(unsigned long long)arg1;
- (void)updateStartTimestampOfLimitedPeriod:(unsigned long long)arg1;
- (void)updateProbThreshold:(double)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (double)averageEnterCount;
- (void)setAverageEnterCount:(double)arg1;
- (unsigned long long)prefetchAttempCount;
- (void)setPrefetchAttempCount:(unsigned long long)arg1;
- (unsigned long long)startTimestampOfLimitedPeriod;
- (void)setStartTimestampOfLimitedPeriod:(unsigned long long)arg1;
- (double)probThreshold;
- (void)setProbThreshold:(double)arg1;
@end

