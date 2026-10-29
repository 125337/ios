@interface WCFinderPrefetchManager : NSObject
{
    NSMutableDictionary * _managerDict; // +0x8
    NSArray * _prefetchSceneArray; // +0x10
    WCFinderWCDB * _finderDB; // +0x18
    NSObject<OS_dispatch_queue> * _prefetchQueue; // +0x20
    NSMutableArray * _allPrefetchFeatureArray; // +0x28
}
- (id)initWithFinderDB:(id)arg1;
- (id)modelWithPrefetchScene:(unsigned long long)arg1;
- (unsigned long long)maxValidPeriod;
- (void)addPrefetchFeature:(id)arg1;
- (unsigned long long)lastEnterSubEntranceWithInterval:(unsigned long long)arg1;
- (id)getPrefetchFeatureArrayWithTimeInterval:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (id)_getPrefetchFeatureArrayWithTimeInterval:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (float)enterProbBaseOnTime:(unsigned long long)arg1;
- (float)enterProbBaseOnActionSeries:(unsigned long long)arg1;
- (id)prefetchSceneArray;
- (id)managerDict;
- (id)prefetchQueue;
- (void)setManagerDict:(id)arg1;
- (void)setPrefetchSceneArray:(id)arg1;
- (id)finderDB;
- (void)setFinderDB:(id)arg1;
- (void)setPrefetchQueue:(id)arg1;
- (id)allPrefetchFeatureArray;
- (void)setAllPrefetchFeatureArray:(id)arg1;
- (void).cxx_destruct;
@end

