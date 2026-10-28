@interface WCFinderLiveExposureStatisticsReporter : NSObject
{
    NSMutableDictionary * _exposureSets; // +0x8
    NSMutableDictionary * _maxCounts; // +0x10
}
- (id)init;
- (void)registerReportType:(id)arg1;
- (void)registerReportType:(id)arg1 maxCount:(unsigned long long)arg2;
- (void)updateExposureForType:(id)arg1 withIdentifier:(id)arg2;
- (void)beginTrackingForType:(id)arg1;
- (id)endTrackingForType:(id)arg1;
- (void)clearDataForType:(id)arg1;
- (void)clearAllData;
- (id)exposureSets;
- (void)setExposureSets:(id)arg1;
- (id)maxCounts;
- (void)setMaxCounts:(id)arg1;
- (void).cxx_destruct;
@end
