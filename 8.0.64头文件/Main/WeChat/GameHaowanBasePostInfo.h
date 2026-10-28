@interface GameHaowanBasePostInfo : MMObject
{
    BOOL _isMiniGamePublish; // +0x8
    BOOL _needDelAfterPost; // +0x9
    long long _postType; // +0x10
    NSString * _extra; // +0x18
    long long _source; // +0x20
    NSString * _videoId; // +0x28
}
- (long long)postType;
- (void)setPostType:(long long)arg1;
- (id)extra;
- (void)setExtra:(id)arg1;
- (long long)source;
- (void)setSource:(long long)arg1;
- (BOOL)isMiniGamePublish;
- (void)setIsMiniGamePublish:(BOOL)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (BOOL)needDelAfterPost;
- (void)setNeedDelAfterPost:(BOOL)arg1;
- (void).cxx_destruct;
@end
