@interface WCLikeButtonParams : NSObject
{
    BOOL _isEnhanceInteractionEnabled; // +0x8
    BOOL _isShowLikeCount; // +0x9
    double _iconWidth; // +0x10
    UIImage * _normalImage; // +0x18
    UIImage * _likedImage; // +0x20
    UIImage * _disabledImage; // +0x28
    UIImage * _normalHighlightedImage; // +0x30
    UIImage * _likedHighlightedImage; // +0x38
    UIImage * _Spring_normalImage; // +0x40
    UIImage * _Spring_likedImage; // +0x48
    UIImage * _Spring_disabledImage; // +0x50
    UIImage * _Spring_normalHighlightedImage; // +0x58
    UIImage * _Spring_likedHighlightedImage; // +0x60
    long long _browseScene; // +0x68
}
+ (id)defaultParams;
- (double)iconWidth;
- (void)setIconWidth:(double)arg1;
- (id)normalImage;
- (void)setNormalImage:(id)arg1;
- (id)likedImage;
- (void)setLikedImage:(id)arg1;
- (id)disabledImage;
- (void)setDisabledImage:(id)arg1;
- (id)normalHighlightedImage;
- (void)setNormalHighlightedImage:(id)arg1;
- (id)likedHighlightedImage;
- (void)setLikedHighlightedImage:(id)arg1;
- (id)Spring_normalImage;
- (void)setSpring_normalImage:(id)arg1;
- (id)Spring_likedImage;
- (void)setSpring_likedImage:(id)arg1;
- (id)Spring_disabledImage;
- (void)setSpring_disabledImage:(id)arg1;
- (id)Spring_normalHighlightedImage;
- (void)setSpring_normalHighlightedImage:(id)arg1;
- (id)Spring_likedHighlightedImage;
- (void)setSpring_likedHighlightedImage:(id)arg1;
- (BOOL)isEnhanceInteractionEnabled;
- (void)setIsEnhanceInteractionEnabled:(BOOL)arg1;
- (BOOL)isShowLikeCount;
- (void)setIsShowLikeCount:(BOOL)arg1;
- (long long)browseScene;
- (void)setBrowseScene:(long long)arg1;
- (void).cxx_destruct;
@end
