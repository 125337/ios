@interface WCBackupIndex : NSObject <WCTTableCoding>
{
    NSString * _sessionName; // +0x8
    NSString * _fileName; // +0x10
    long long _startTime; // +0x18
    long long _endTime; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sessionName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_sessionName;
+ (const void *)fileName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_fileName;
+ (const void *)startTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_startTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_endTime;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
- (id)description;
- (id)sessionName;
- (void)setSessionName:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (long long)endTime;
- (void)setEndTime:(long long)arg1;
- (void).cxx_destruct;
@end

