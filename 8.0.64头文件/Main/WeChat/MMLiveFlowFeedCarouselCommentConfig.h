@interface MMLiveFlowFeedCarouselCommentConfig : NSObject
{
    BOOL _firstCommentAnimation; // +0x8
    long long _maxVisibleLines; // +0x10
    double _firstCommentDuration; // +0x18
    double _commentDuration; // +0x20
    double _normalLineAlpha; // +0x28
    UIFont * _commentFont; // +0x30
    UIColor * _commentTextColor; // +0x38
    double _commentSpacing; // +0x40
    unsigned long long _discardStrategy; // +0x48
}
+ (id)defaultConfig;
- (long long)maxVisibleLines;
- (void)setMaxVisibleLines:(long long)arg1;
- (double)firstCommentDuration;
- (void)setFirstCommentDuration:(double)arg1;
- (double)commentDuration;
- (void)setCommentDuration:(double)arg1;
- (double)normalLineAlpha;
- (void)setNormalLineAlpha:(double)arg1;
- (id)commentFont;
- (void)setCommentFont:(id)arg1;
- (id)commentTextColor;
- (void)setCommentTextColor:(id)arg1;
- (BOOL)firstCommentAnimation;
- (void)setFirstCommentAnimation:(BOOL)arg1;
- (double)commentSpacing;
- (void)setCommentSpacing:(double)arg1;
- (unsigned long long)discardStrategy;
- (void)setDiscardStrategy:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
