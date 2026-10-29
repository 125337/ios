@interface MMSafeModeReport : NSObject
{
    NSString * m_path; // +0x8
    NSMutableArray * m_reportList; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)reportWithID:(int)arg1 key:(int)arg2 value:(int)arg3;
- (void)reportWithID:(int)arg1 ext:(id)arg2 isReportNow:(BOOL)arg3 isKeyLog:(BOOL)arg4;
- (void)doReport;
- (void).cxx_destruct;
@end

