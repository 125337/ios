@interface MMNetworkSample : NSObject
{
    BOOL isAutoIncrement; // +0x8
    unsigned long long _sampleID; // +0x10
    double _time; // +0x18
    unsigned long long _connectionID; // +0x20
    MMMetricsStackInfo * _stack; // +0x28
    unsigned long long _stackHash; // +0x30
    unsigned long long _wifiSent; // +0x38
    unsigned long long _wifiReceived; // +0x40
    unsigned long long _wwanSent; // +0x48
    unsigned long long _wwanReceived; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sampleID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sampleID;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_time;
+ (const void *)connectionID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_connectionID;
+ (const void *)stackHash;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_stackHash;
+ (const void *)wifiSent;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_wifiSent;
+ (const void *)wifiReceived;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_wifiReceived;
+ (const void *)wwanSent;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_wwanSent;
+ (const void *)wwanReceived;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_wwanReceived;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)generateStackReportItems:(id)arg1;
- (id)init;
- (unsigned long long)stackHash;
- (unsigned long long)totalWifiUsage;
- (unsigned long long)totalWwanUsage;
- (unsigned long long)totalUsage;
- (void)merge:(id)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (unsigned long long)sampleID;
- (void)setSampleID:(unsigned long long)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (unsigned long long)connectionID;
- (void)setConnectionID:(unsigned long long)arg1;
- (id)stack;
- (void)setStack:(id)arg1;
- (void)setStackHash:(unsigned long long)arg1;
- (unsigned long long)wifiSent;
- (void)setWifiSent:(unsigned long long)arg1;
- (unsigned long long)wifiReceived;
- (void)setWifiReceived:(unsigned long long)arg1;
- (unsigned long long)wwanSent;
- (void)setWwanSent:(unsigned long long)arg1;
- (unsigned long long)wwanReceived;
- (void)setWwanReceived:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

