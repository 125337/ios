@interface MonitorResult : NSObject
{
    unsigned long long _monitorId; // +0x8
    NSString * _rootBtnId; // +0x10
    NSMutableArray * _monitorPointList; // +0x18
}
- (id)initWithMonitorId:(unsigned long long)arg1;
- (id)monitorPointList;
- (BOOL)updatePixelColorForMonitorPoints:(id)arg1;
- (BOOL)isColorSimilarToMonitorResult:(id)arg1 similarContrastRatio:(double)arg2 similarStandardRate:(double)arg3;
- (BOOL)isColorDistanceSimilarToMonitorResult:(id)arg1 similarColorDistance:(double)arg2 similarStandardRate:(double)arg3;
- (double)getMaxColorDistanceWithMonitorResult:(id)arg1;
- (unsigned long long)monitorId;
- (void)setMonitorId:(unsigned long long)arg1;
- (id)rootBtnId;
- (void)setRootBtnId:(id)arg1;
- (void)setMonitorPointList:(id)arg1;
- (void).cxx_destruct;
@end
