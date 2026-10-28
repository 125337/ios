@interface WCFinderCommentLikeUIConfig : NSObject
{
    UIColor * _normalColor; // +0x8
    UIColor * _likedColor; // +0x10
    UIColor * _closedColor; // +0x18
}
+ (id)defaultConfig;
+ (void)checkConfig:(id)arg1;
- (id)normalColor;
- (void)setNormalColor:(id)arg1;
- (id)likedColor;
- (void)setLikedColor:(id)arg1;
- (id)closedColor;
- (void)setClosedColor:(id)arg1;
- (void).cxx_destruct;
@end
