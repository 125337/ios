@interface WAExptPermissionInfo : NSObject <WCTTableCoding>
{
    NSString * _appID; // +0x8
    long long _issueTime; // +0x10
    NSString * _opConfig; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)issueTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_issueTime;
+ (const void *)opConfig;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_opConfig;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
- (id)description;
- (id)appID;
- (void)setAppID:(id)arg1;
- (long long)issueTime;
- (void)setIssueTime:(long long)arg1;
- (id)opConfig;
- (void)setOpConfig:(id)arg1;
- (void).cxx_destruct;
@end
