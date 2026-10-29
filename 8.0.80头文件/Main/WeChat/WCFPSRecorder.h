@interface WCFPSRecorder : NSObject
{
    void * m_sampler; // +0x8
    BOOL _dumpStacks; // +0x10
    BOOL _autoUpload; // +0x11
    int _recordID; // +0x14
    unsigned long long _trackingType; // +0x18
    double _dumpTimeBegin; // +0x20
    double _dumpTimeTotal; // +0x28
    NSString * _scene; // +0x30
    NSString * _reportID; // +0x38
    NSString * _reportPath; // +0x40
    id _customInfo; // +0x48
}
- (id)init;
- (void)dealloc;
- (id)threadLabel;
- (void)startProfile:(int)arg1 dumpMaxCount:(int)arg2;
- (void)stopProfile;
- (void)saveStackSamples:(id)arg1;
- (void)uploadStackSamples;
- (unsigned long long)trackingType;
- (void)setTrackingType:(unsigned long long)arg1;
- (int)recordID;
- (void)setRecordID:(int)arg1;
- (BOOL)dumpStacks;
- (void)setDumpStacks:(BOOL)arg1;
- (BOOL)autoUpload;
- (void)setAutoUpload:(BOOL)arg1;
- (double)dumpTimeBegin;
- (void)setDumpTimeBegin:(double)arg1;
- (double)dumpTimeTotal;
- (void)setDumpTimeTotal:(double)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)reportID;
- (void)setReportID:(id)arg1;
- (id)reportPath;
- (void)setReportPath:(id)arg1;
- (id)customInfo;
- (void)setCustomInfo:(id)arg1;
- (void).cxx_destruct;
@end
