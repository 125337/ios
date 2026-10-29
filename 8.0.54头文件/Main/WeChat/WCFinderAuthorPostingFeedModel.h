@interface WCFinderAuthorPostingFeedModel : NSObject
{
    NSString * _tid; // +0x8
    NSString * _authorUsername; // +0x10
    unsigned long long _createTime; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)authorUsername;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_authorUsername;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_createTime;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)authorUsername;
- (void)setAuthorUsername:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

