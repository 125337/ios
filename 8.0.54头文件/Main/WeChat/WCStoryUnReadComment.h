@interface WCStoryUnReadComment : NSObject <WCTTableCoding>
{
    unsigned int _createTime; // +0x8
    unsigned int _commentType; // +0xc
    NSString * _tid; // +0x10
    NSString * _commentId; // +0x18
}
+ (id)unreadCommentWithStoryComment:(id)arg1;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)commentId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_commentId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)commentType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_commentType;
+ (void)__wcdb_table_constraint_4:(void *)arg1;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_9:(void *)arg1;
- (id)initWithStoryComment:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)commentId;
- (void)setCommentId:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)commentType;
- (void)setCommentType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

