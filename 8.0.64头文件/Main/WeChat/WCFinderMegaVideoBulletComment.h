@interface WCFinderMegaVideoBulletComment : NSObject <WCTTableCoding, PBCoding>
{
    NSString * _videoId; // +0x8
    unsigned long long _cacheTime; // +0x10
    WCFinderMegaVideoBulletCommentMutableArray * _comments; // +0x18
}
+ (void)PBArrayAdd_videoId;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_comments;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)videoId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_videoId;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)comments;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_comments;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (void)__wcdb_index_4:(void *)arg1;
- (id)getPBPropertyTable;
- (id)initWithVideoId:(id)arg1 commentList:(id)arg2;
- (id)description;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (id)comments;
- (void)setComments:(id)arg1;
- (void).cxx_destruct;
@end
