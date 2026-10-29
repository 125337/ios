@interface MMFPSReportData : NSObject <PBCoding>
{
    double _totalTime; // +0x8
    double _dropFrameTime; // +0x10
}
+ (void)PBArrayAdd_totalTime;
+ (void)PBArrayAdd_dropFrameTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (double)dropFrameTime;
- (void)setDropFrameTime:(double)arg1;
@end

