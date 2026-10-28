@interface GameHaowanPostInfoTableItem : MMObject <WCTTableCoding>
{
    BOOL _isMiniGameVideo; // +0x8
    BOOL _needDelAfterPost; // +0x9
    BOOL _isBroken; // +0xa
    unsigned int _postType; // +0xc
    unsigned int _fromSource; // +0x10
    unsigned int _retryCount; // +0x14
    int _publishState; // +0x18
    NSString * _postId; // +0x20
    NSString * _extra; // +0x28
    unsigned long long _createTime; // +0x30
    NSString * _videoId; // +0x38
    NSArray * _mediaList; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)postId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_postId;
+ (const void *)postType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_postType;
+ (const void *)extra;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_extra;
+ (const void *)fromSource;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_fromSource;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)retryCount;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_retryCount;
+ (const void *)publishState;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_publishState;
+ (const void *)isMiniGameVideo;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_isMiniGameVideo;
+ (const void *)videoId;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_videoId;
+ (const void *)needDelAfterPost;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_needDelAfterPost;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (unsigned int)postType;
- (void)setPostType:(unsigned int)arg1;
- (id)extra;
- (void)setExtra:(id)arg1;
- (unsigned int)fromSource;
- (void)setFromSource:(unsigned int)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (int)publishState;
- (void)setPublishState:(int)arg1;
- (BOOL)isMiniGameVideo;
- (void)setIsMiniGameVideo:(BOOL)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (BOOL)needDelAfterPost;
- (void)setNeedDelAfterPost:(BOOL)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (BOOL)isBroken;
- (void).cxx_destruct;
@end
