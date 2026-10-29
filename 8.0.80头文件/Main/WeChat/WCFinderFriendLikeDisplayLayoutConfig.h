@interface WCFinderFriendLikeDisplayLayoutConfig : NSObject
{
    double _avatorSpacing; // +0x8
    unsigned long long _maxAvatorCount; // +0x10
    double _headerImageRightMargin; // +0x18
    double _appendTipsMargin; // +0x20
    double _suffixTipsLeadingMargin; // +0x28
    double _trailingPadding; // +0x30
    double _likeIconMargin; // +0x38
    NSString * _likeIconSVGName; // +0x40
    UIFont * _likeInfoTextFont; // +0x48
    UIColor * _likeInfoTextColor; // +0x50
    CGSize _avatorSize; // +0x58
    CGSize _likeIconSize; // +0x68
    CGSize _comboLikeIconSize; // +0x78
    UIEdgeInsets _expandTouchInsets; // +0x88
}
+ (id)defaultConfig;
- (CGSize)avatorSize;
- (void)setAvatorSize:(CGSize)arg1;
- (double)avatorSpacing;
- (void)setAvatorSpacing:(double)arg1;
- (unsigned long long)maxAvatorCount;
- (void)setMaxAvatorCount:(unsigned long long)arg1;
- (double)headerImageRightMargin;
- (void)setHeaderImageRightMargin:(double)arg1;
- (double)appendTipsMargin;
- (void)setAppendTipsMargin:(double)arg1;
- (double)suffixTipsLeadingMargin;
- (void)setSuffixTipsLeadingMargin:(double)arg1;
- (double)trailingPadding;
- (void)setTrailingPadding:(double)arg1;
- (double)likeIconMargin;
- (void)setLikeIconMargin:(double)arg1;
- (CGSize)likeIconSize;
- (void)setLikeIconSize:(CGSize)arg1;
- (CGSize)comboLikeIconSize;
- (void)setComboLikeIconSize:(CGSize)arg1;
- (id)likeIconSVGName;
- (void)setLikeIconSVGName:(id)arg1;
- (id)likeInfoTextFont;
- (void)setLikeInfoTextFont:(id)arg1;
- (id)likeInfoTextColor;
- (void)setLikeInfoTextColor:(id)arg1;
- (UIEdgeInsets)expandTouchInsets;
- (void)setExpandTouchInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
