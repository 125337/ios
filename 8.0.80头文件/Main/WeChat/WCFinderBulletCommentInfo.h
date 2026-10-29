@interface WCFinderBulletCommentInfo : NSObject <WCTTableCoding>
{
    int _contentType; // +0x8
    int _commentSource; // +0xc
    int _userIdentity; // +0x10
    unsigned int _likeCount; // +0x14
    unsigned int _likeFlag; // +0x18
    int _displayType; // +0x1c
    unsigned long long _commentInfoId; // +0x20
    NSString * _content; // +0x28
    double _videoTimestamp; // +0x30
    double _createTime; // +0x38
    BulletCommentContentInfo * _contentInfo; // +0x40
    NSString * _reportJson; // +0x48
    BulletCommentDisplayInfo * _displayInfo; // +0x50
    unsigned long long _followCommentId; // +0x58
    unsigned long long _cacheTime; // +0x60
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
+ (const void *)likeCount;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_likeCount;
+ (const void *)likeFlag;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_likeFlag;
+ (const void *)contentInfo;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_contentInfo;
+ (const void *)displayType;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_displayType;
+ (const void *)displayInfo;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_displayInfo;
+ (const void *)followCommentId;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_followCommentId;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
- (id)initWithBulletCommentInfo:(id)arg1;
- (id)description;
- (long long)finder_followBtnTypeForReport;
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
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (unsigned int)likeFlag;
- (void)setLikeFlag:(unsigned int)arg1;
- (id)contentInfo;
- (void)setContentInfo:(id)arg1;
- (id)reportJson;
- (void)setReportJson:(id)arg1;
- (int)displayType;
- (void)setDisplayType:(int)arg1;
- (id)displayInfo;
- (void)setDisplayInfo:(id)arg1;
- (unsigned long long)followCommentId;
- (void)setFollowCommentId:(unsigned long long)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
