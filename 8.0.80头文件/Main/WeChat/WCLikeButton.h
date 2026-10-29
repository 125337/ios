@interface WCLikeButton : MMUIButton
{
    BOOL m_likeOperating; // +0x8
    BOOL _isEnhanceInteractionEnabled; // +0x9
    BOOL _isShowLikeCount; // +0xa
    WCDataItem * _dataItem; // +0x10
    id /* block */ _likeOpBlock; // +0x18
    id /* block */ _updateOpBlock; // +0x20
    double _iconSize; // +0x28
    UIImage * _image; // +0x30
    UIImage * _likedImage; // +0x38
    UIImage * _disabledImage; // +0x40
    UIImage * _normalHighlightedImage; // +0x48
    UIImage * _likedHighlightedImage; // +0x50
    UIImage * _Spring_normalImage; // +0x58
    UIImage * _Spring_likedImage; // +0x60
    UIImage * _Spring_disabledImage; // +0x68
    UIImage * _Spring_normalHighlightedImage; // +0x70
    UIImage * _Spring_likedHighlightedImage; // +0x78
    UIImage * _Spring_normalImagePlaceholder; // +0x80
    long long _browseScene; // +0x88
}
- (void)updateLikeBtn;
- (void)updateLikeBtnWithLikeFlag:(BOOL)arg1;
- (id)initWithDataItem:(id)arg1 params:(id)arg2;
- (void)setDataItem:(id)arg1;
- (void)LikeBtnEnlarge;
- (void)LikeBtnReduce;
- (void)LikeBtnReduceEnd;
- (void)performUnLikeWithoutAnimation;
- (void)onLikeFriend;
- (CGSize)longerTitleSize;
- (long long)displayLikeCount:(BOOL)arg1;
- (BOOL)isSpringStyle;
- (void)Spring_updateLikeBtnWithLikeFlag:(BOOL)arg1;
- (id)dataItem;
- (id /* block */)likeOpBlock;
- (void)setLikeOpBlock:(id /* block */)arg1;
- (id /* block */)updateOpBlock;
- (void)setUpdateOpBlock:(id /* block */)arg1;
- (double)iconSize;
- (void)setIconSize:(double)arg1;
- (id)image;
- (void)setImage:(id)arg1;
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
- (id)Spring_normalImagePlaceholder;
- (void)setSpring_normalImagePlaceholder:(id)arg1;
- (BOOL)isEnhanceInteractionEnabled;
- (void)setIsEnhanceInteractionEnabled:(BOOL)arg1;
- (BOOL)isShowLikeCount;
- (void)setIsShowLikeCount:(BOOL)arg1;
- (long long)browseScene;
- (void)setBrowseScene:(long long)arg1;
- (void).cxx_destruct;
@end
