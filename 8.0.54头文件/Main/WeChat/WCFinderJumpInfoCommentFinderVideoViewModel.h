@interface WCFinderJumpInfoCommentFinderVideoViewModel : NSObject
{
    BOOL _showPlayIcon; // +0x8
    BOOL _showLikeIcon; // +0x9
    NSURL * _coverURL; // +0x10
    NSString * _likeCount; // +0x18
    long long _displayType; // +0x20
}
+ (id)modelWithData:(id)arg1;
- (BOOL)isEqualToModel:(id)arg1;
- (id)coverURL;
- (void)setCoverURL:(id)arg1;
- (BOOL)showPlayIcon;
- (void)setShowPlayIcon:(BOOL)arg1;
- (BOOL)showLikeIcon;
- (void)setShowLikeIcon:(BOOL)arg1;
- (id)likeCount;
- (void)setLikeCount:(id)arg1;
- (long long)displayType;
- (void)setDisplayType:(long long)arg1;
- (void).cxx_destruct;
@end

