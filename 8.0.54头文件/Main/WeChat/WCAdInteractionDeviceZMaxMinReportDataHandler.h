@interface WCAdInteractionDeviceZMaxMinReportDataHandler : WCAdInteractionReportDataHandler
{
    BOOL _triggerByAcceleration; // +0x8
    double _maxZ; // +0x10
    double _minZ; // +0x18
}
- (void)handleReceivedData:(id)arg1;
- (id)fetchReportData;
- (double)maxZ;
- (void)setMaxZ:(double)arg1;
- (double)minZ;
- (void)setMinZ:(double)arg1;
- (BOOL)triggerByAcceleration;
- (void)setTriggerByAcceleration:(BOOL)arg1;
@end

