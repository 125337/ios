@interface WCBackupRecoverInfo : NSObject <WCTTableCoding>
{
    NSString * _sessionName; // +0x8
    long long _startTime; // +0x10
    long long _endTime; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_sessionName;
+ (const void *)startTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_startTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_endTime;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
- (id)description;
- (id)sessionName;
- (void)setSessionName:(id)arg1;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)endTime;
- (void)setEndTime:(long long)arg1;
- (void).cxx_destruct;
@end

