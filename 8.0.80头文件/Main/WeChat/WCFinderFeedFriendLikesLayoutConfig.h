@interface WCFinderFeedFriendLikesLayoutConfig : NSObject
{
    BOOL _suppressComboLike; // +0x8
    double _displayViewLeftPadding; // +0x10
    double _displayViewRightPadding; // +0x18
    double _avatorSpacing; // +0x20
    double _cellHeightWithLikes; // +0x28
    double _cellHeightWithRecommend; // +0x30
    unsigned long long _maxAvatorCountInFront; // +0x38
    WCFinderFriendLikeDisplayLayoutConfig * _displayViewLayoutConfig; // +0x40
    CGSize _avatorSize; // +0x48
}
+ (id)defaultConfig;
- (double)displayViewLeftPadding;
- (void)setDisplayViewLeftPadding:(double)arg1;
- (double)displayViewRightPadding;
- (void)setDisplayViewRightPadding:(double)arg1;
- (CGSize)avatorSize;
- (void)setAvatorSize:(CGSize)arg1;
- (double)avatorSpacing;
- (void)setAvatorSpacing:(double)arg1;
- (double)cellHeightWithLikes;
- (void)setCellHeightWithLikes:(double)arg1;
- (double)cellHeightWithRecommend;
- (void)setCellHeightWithRecommend:(double)arg1;
- (unsigned long long)maxAvatorCountInFront;
- (void)setMaxAvatorCountInFront:(unsigned long long)arg1;
- (BOOL)suppressComboLike;
- (void)setSuppressComboLike:(BOOL)arg1;
- (id)displayViewLayoutConfig;
- (void)setDisplayViewLayoutConfig:(id)arg1;
- (void).cxx_destruct;
@end
