@interface WCFinderMegaVideo : NSObject <WCFinderMegaVideoDataExt, WCTTableCoding, PBCoding>
{
    WCMegaVideo * _video; // +0x8
    WCFinderContact * _contact; // +0x10
    NSString * _videoId; // +0x18
    NSString * _username; // +0x20
    NSString * _videoNonceId; // +0x28
    unsigned long long _cacheTime; // +0x30
    WCFinderMegaVideoAttach * _attach; // +0x38
}
+ (void)PBArrayAdd_videoId;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_video;
+ (void)PBArrayAdd_videoNonceId;
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
+ (const void *)username;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_username;
+ (const void *)video;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_video;
+ (const void *)videoNonceId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_videoNonceId;
+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
- (id)getPBPropertyTable;
- (id)initWithFinderMegaVideo:(id)arg1;
- (id)userName;
- (id)videoId;
- (id)videoNonceId;
- (id)shortVideoId;
- (id)shortNonceId;
- (id)attach;
- (BOOL)isMine;
- (id)headURLString;
- (id)nickName;
- (id)description;
- (id)video;
- (void)setVideo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void)setVideoId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void)setVideoNonceId:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (void)setAttach:(id)arg1;
- (void).cxx_destruct;
@end

