@interface MSEIDKeyReportMgr : NSObject
{
    BOOL _bHadInLandscape; // +0x8
    NSMutableArray * _reportData; // +0x10
}
+ (id)sharedInstance;
- (void)commonInit;
- (void)logIDKeyDataWithID:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(BOOL)arg4;
- (void)archiveToFile;
- (BOOL)bHadInLandscape;
- (void)setBHadInLandscape:(BOOL)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (void).cxx_destruct;
@end

