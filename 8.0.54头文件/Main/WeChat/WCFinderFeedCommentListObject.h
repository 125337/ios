@interface WCFinderFeedCommentListObject : NSObject
{
    NSString * _tid; // +0x8
    WCFinderCommenListArray * _commentList; // +0x10
    unsigned long long _cacheTimestamp; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)commentList;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_commentList;
+ (const void *)cacheTimestamp;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_cacheTimestamp;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)commentList;
- (void)setCommentList:(id)arg1;
- (unsigned long long)cacheTimestamp;
- (void)setCacheTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

