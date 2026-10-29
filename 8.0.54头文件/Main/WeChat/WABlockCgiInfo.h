@interface WABlockCgiInfo : MMObject <WCTTableCoding>
{
    unsigned int _beginTime; // +0x8
    unsigned int _endTime; // +0xc
    unsigned int _reportId; // +0x10
    NSString * _appid; // +0x18
    NSString * _username; // +0x20
    NSString * _blockCgiListStr; // +0x28
    NSString * _blockSceneListStr; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appid;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_username;
+ (const void *)blockCgiListStr;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_blockCgiListStr;
+ (const void *)blockSceneListStr;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_blockSceneListStr;
+ (const void *)beginTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_beginTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_endTime;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_reportId;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)blockCgiListStr;
- (void)setBlockCgiListStr:(id)arg1;
- (id)blockSceneListStr;
- (void)setBlockSceneListStr:(id)arg1;
- (unsigned int)beginTime;
- (void)setBeginTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

