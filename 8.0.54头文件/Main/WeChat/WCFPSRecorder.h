@interface WCFPSRecorder : NSObject
{
    unsigned long long * * m_stackCyclePool; // +0x8
    unsigned long long * m_stackCount; // +0x10
    unsigned long long m_poolTailPoint; // +0x18
    unsigned int m_maxStackCount; // +0x20
    unsigned int m_repeatCount; // +0x24
    BOOL _shouldDump; // +0x28
    BOOL _shouldDumpCpuUsage; // +0x29
    BOOL _shouldExit; // +0x2a
    BOOL _autoUpload; // +0x2b
    int _recordID; // +0x2c
    int _dumpInterval; // +0x30
    unsigned long long _trackingType; // +0x38
    double _dumpTimeBegin; // +0x40
    double _dumpTimeTotal; // +0x48
    NSString * _scene; // +0x50
    NSString * _reportID; // +0x58
    NSString * _reportPath; // +0x60
    id _customInfo; // +0x68
    NSMutableArray * _parentAddressFrame; // +0x70
}
- (id)init;
- (id)initWithMaxStackTraceCount:(unsigned int)arg1 timeInterval:(unsigned int)arg2;
- (void)dealloc;
- (void)addThreadStack:(unsigned long long *)arg1 andLength:(unsigned long long)arg2;
- (id)makeCallTree;
- (id)p_getInfoDictFromAddressFrame:(id)arg1;
- (id)p_getAddressFrameWithStackTraces:(unsigned long long *)arg1 length:(unsigned long long)arg2;
- (void)p_addAddressFrame:(id)arg1;
- (void)p_mergeAddressFrame:(id)arg1 with:(id)arg2;
- (void)p_mergedAddressFrameArray:(id)arg1 with:(id)arg2;
- (id)description;
- (unsigned long long)trackingType;
- (void)setTrackingType:(unsigned long long)arg1;
- (int)recordID;
- (void)setRecordID:(int)arg1;
- (int)dumpInterval;
- (void)setDumpInterval:(int)arg1;
- (double)dumpTimeBegin;
- (void)setDumpTimeBegin:(double)arg1;
- (double)dumpTimeTotal;
- (void)setDumpTimeTotal:(double)arg1;
- (BOOL)shouldDump;
- (void)setShouldDump:(BOOL)arg1;
- (BOOL)shouldDumpCpuUsage;
- (void)setShouldDumpCpuUsage:(BOOL)arg1;
- (BOOL)shouldExit;
- (void)setShouldExit:(BOOL)arg1;
- (BOOL)autoUpload;
- (void)setAutoUpload:(BOOL)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)reportID;
- (void)setReportID:(id)arg1;
- (id)reportPath;
- (void)setReportPath:(id)arg1;
- (id)customInfo;
- (void)setCustomInfo:(id)arg1;
- (id)parentAddressFrame;
- (void)setParentAddressFrame:(id)arg1;
- (void).cxx_destruct;
@end

