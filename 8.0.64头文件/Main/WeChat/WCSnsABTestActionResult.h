@interface WCSnsABTestActionResult : NSObject
{
    unsigned int experType; // +0x8
    NSString * dataItemId; // +0x10
    NSMutableArray * arrTipActionResult; // +0x18
    unsigned int startTime; // +0x20
    unsigned int endTime; // +0x24
}
- (id)init;
- (void)resetResult;
- (id)genActionResult;
- (BOOL)hasActionResult;
- (void)tryAddTimeStamp:(BOOL)arg1 endTime:(BOOL)arg2;
- (void)addTipActionResult:(id)arg1;
- (unsigned int)experType;
- (void)setExperType:(unsigned int)arg1;
- (id)dataItemId;
- (void)setDataItemId:(id)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
