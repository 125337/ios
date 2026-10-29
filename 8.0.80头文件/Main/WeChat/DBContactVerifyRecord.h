@interface DBContactVerifyRecord : NSObject <WCTTableCoding>
{
    unsigned int _status; // +0x8
    unsigned int _latestCreateTime; // +0xc
    unsigned int _latestDirection; // +0x10
    NSString * _userName; // +0x18
    unsigned long long _version; // +0x20
    NSData * _ndVerifyMsgList; // +0x28
    unsigned long long _latestMsgid; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (id)swift_userName;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_57:(void *)arg1;
+ (id)swift_status;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_58:(void *)arg1;
+ (id)swift_version;
+ (const void *)latestMsgid;
+ (const void *)__wcdb_synthesize_59:(void *)arg1;
+ (id)swift_latestMsgid;
+ (const void *)latestCreateTime;
+ (const void *)__wcdb_synthesize_60:(void *)arg1;
+ (id)swift_latestCreateTime;
+ (const void *)latestDirection;
+ (const void *)__wcdb_synthesize_61:(void *)arg1;
+ (id)swift_latestDirection;
+ (const void *)ndVerifyMsgList;
+ (const void *)__wcdb_synthesize_62:(void *)arg1;
+ (id)swift_ndVerifyMsgList;
+ (void)__wcdb_column_constraint_63:(void *)arg1;
+ (void)__wcdb_index_64:(void *)arg1;
+ (void)__wcdb_index_65:(void *)arg1;
+ (void)__wcdb_index_66:(void *)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)ndVerifyMsgList;
- (void)setNdVerifyMsgList:(id)arg1;
- (unsigned long long)latestMsgid;
- (void)setLatestMsgid:(unsigned long long)arg1;
- (unsigned int)latestCreateTime;
- (void)setLatestCreateTime:(unsigned int)arg1;
- (unsigned int)latestDirection;
- (void)setLatestDirection:(unsigned int)arg1;
- (void).cxx_destruct;
@end
