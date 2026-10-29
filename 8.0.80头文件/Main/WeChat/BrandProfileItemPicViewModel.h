@interface BrandProfileItemPicViewModel : BrandProfileItemBaseViewModel
{
    BOOL _usesBottomLeftAuthorStyle; // +0x10
    BOOL _isLiked; // +0x11
    BOOL _likePending; // +0x12
    unsigned int _originalItemIndex; // +0x14
    double _containerWidth; // +0x18
    NSNumber * _likeCount; // +0x20
    NSMutableArray * _mutableTitleLabelStyles; // +0x28
    double _cacheTitleHeight; // +0x30
    unsigned long long _likeRevision; // +0x38
}
+ (void)sendLikeWithURL:(id)arg1 liked:(BOOL)arg2 completion:(id /* block */)arg3;
+ (void)postLikeStatusChangedWithURL:(id)arg1 liked:(BOOL)arg2 likeCount:(long long)arg3;
- (id)initWithItemMsg:(id)arg1;
- (void)setContainerWidth:(double)arg1;
- (double)cellWidth;
- (double)itemPadding;
- (void)clearLayoutCache;
- (id)coverImgURL;
- (double)imageHeight;
- (CGSize)imageSize;
- (BOOL)hasSendTime;
- (BOOL)showsLike;
- (BOOL)toggleLikeWithCompletion:(id /* block */)arg1;
- (BOOL)applyLikeStatusForBizUin:(id)arg1 mid:(id)arg2 idx:(id)arg3 liked:(BOOL)arg4 likeCount:(long long)arg5;
- (id)sendTimeText;
- (double)titleHeight;
- (double)titleLineHeight;
- (double)descLineHeight;
- (double)cardHeight;
- (double)titleMaxWidth;
- (id)titleLabelStyles;
- (BOOL)isPinned;
- (unsigned long long)itemIndex;
- (double)getFinalRation;
- (id)titleFont;
- (unsigned long long)titleLineNumber;
- (double)titleLineSpacing;
- (double)titleLeftPadding;
- (double)coverTitleSpacing;
- (double)titleDescSpacing;
- (double)bottomPadding;
- (unsigned int)originalItemIndex;
- (double)containerWidth;
- (BOOL)usesBottomLeftAuthorStyle;
- (void)setUsesBottomLeftAuthorStyle:(BOOL)arg1;
- (id)likeCount;
- (void)setLikeCount:(id)arg1;
- (BOOL)isLiked;
- (void)setIsLiked:(BOOL)arg1;
- (BOOL)likePending;
- (void)setLikePending:(BOOL)arg1;
- (id)mutableTitleLabelStyles;
- (void)setMutableTitleLabelStyles:(id)arg1;
- (double)cacheTitleHeight;
- (void)setCacheTitleHeight:(double)arg1;
- (unsigned long long)likeRevision;
- (void)setLikeRevision:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
