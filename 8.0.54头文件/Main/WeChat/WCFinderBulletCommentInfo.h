@interface WCFinderBulletCommentInfo : NSObject <WCTTableCoding>
{
    int _contentType; // +0x8
    int _commentSource; // +0xc
    int _userIdentity; // +0x10
    unsigned long long _commentInfoId; // +0x18
    NSString * _content; // +0x20
    double _videoTimestamp; // +0x28
    double _createTime; // +0x30
    unsigned long long _cacheTime; // +0x38
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)commentInfoId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_commentInfoId;
+ (const void *)contentType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_contentType;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_content;
+ (const void *)videoTimestamp;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_videoTimestamp;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)commentSource;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_commentSource;
+ (const void *)userIdentity;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_userIdentity;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_cacheTime;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (void)__wcdb_index_10:(void *)arg1;
- (id)initWithBulletCommentInfo:(id)arg1;
- (id)description;
- (unsigned long long)commentInfoId;
- (void)setCommentInfoId:(unsigned long long)arg1;
- (int)contentType;
- (void)setContentType:(int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (double)videoTimestamp;
- (void)setVideoTimestamp:(double)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (int)commentSource;
- (void)setCommentSource:(int)arg1;
- (int)userIdentity;
- (void)setUserIdentity:(int)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

