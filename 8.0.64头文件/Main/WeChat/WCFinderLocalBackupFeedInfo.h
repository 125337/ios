@interface WCFinderLocalBackupFeedInfo : NSObject <WCTTableCoding>
{
    int _commentScene; // +0x8
    unsigned long long _localId; // +0x10
    NSString * _tid; // +0x18
    unsigned long long _expiredTime; // +0x20
    unsigned long long _feedSource; // +0x28
    unsigned long long _funcFlag; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localId;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_tid;
+ (const void *)commentScene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_commentScene;
+ (const void *)feedSource;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_feedSource;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_expiredTime;
+ (const void *)funcFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_funcFlag;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
- (id)description;
- (unsigned long long)localId;
- (void)setLocalId:(unsigned long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (unsigned long long)feedSource;
- (void)setFeedSource:(unsigned long long)arg1;
- (unsigned long long)funcFlag;
- (void)setFuncFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
