@interface WAIssueLaunchPermissionInfo : MMObject <WCTTableCoding>
{
    unsigned int _beginTime; // +0x8
    unsigned int _endTime; // +0xc
    unsigned int _reportId; // +0x10
    NSString * _appID; // +0x18
    NSString * _sceneListStr; // +0x20
    NSData * _launchResponseData; // +0x28
    NSString * _username; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)sceneListStr;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_sceneListStr;
+ (const void *)beginTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_beginTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_endTime;
+ (const void *)launchResponseData;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_launchResponseData;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_reportId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_username;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)sceneListStr;
- (void)setSceneListStr:(id)arg1;
- (unsigned int)beginTime;
- (void)setBeginTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (id)launchResponseData;
- (void)setLaunchResponseData:(id)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
