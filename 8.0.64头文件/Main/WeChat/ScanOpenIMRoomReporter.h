@interface ScanOpenIMRoomReporter : NSObject <PBMessageObserverDelegate>
+ (void)initialize;
- (id)init;
- (void)reportJoinOpenIMRoom:(id)arg1 openIMContext:(id)arg2 getA8KeyScene:(unsigned int)arg3 subScene:(unsigned int)arg4;
- (int)getReportType:(id)arg1;
- (BOOL)isNormalRoomUrl:(id)arg1;
- (BOOL)isMultiRoomUrl:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onScanOpenIMReportCGIEnd:(id)arg1;
@end
