@interface WCStoryUserRelatedCommentObj : NSObject <WCTTableCoding>
{
    BOOL _isConcerned; // +0x8
    unsigned int _dataItemCreateTime; // +0xc
    unsigned int _commentCreateTime; // +0x10
    NSString * _tid; // +0x18
    long long _maxCommentId; // +0x20
    long long _readCommentId; // +0x28
    NSString * _username; // +0x30
    WCStoryMediaItem * _thumbURLItem; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_tid;
+ (const void *)maxCommentId;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_maxCommentId;
+ (const void *)readCommentId;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_readCommentId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_username;
+ (const void *)dataItemCreateTime;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_dataItemCreateTime;
+ (const void *)commentCreateTime;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_commentCreateTime;
+ (const void *)isConcerned;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_isConcerned;
+ (void)__wcdb_column_constraint_35:(void *)arg1;
+ (void)__wcdb_index_36:(void *)arg1;
+ (void)__wcdb_index_37:(void *)arg1;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (long long)maxCommentId;
- (void)setMaxCommentId:(long long)arg1;
- (long long)readCommentId;
- (void)setReadCommentId:(long long)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)dataItemCreateTime;
- (void)setDataItemCreateTime:(unsigned int)arg1;
- (unsigned int)commentCreateTime;
- (void)setCommentCreateTime:(unsigned int)arg1;
- (BOOL)isConcerned;
- (void)setIsConcerned:(BOOL)arg1;
- (id)thumbURLItem;
- (void)setThumbURLItem:(id)arg1;
- (void).cxx_destruct;
@end
