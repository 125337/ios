@interface MMLiveFlowFeedCarouselCommentView : UIView
{
    BOOL _isAnimating; // +0x8
    id <MMLiveFlowFeedCarouselCommentViewDelegate> _delegate; // +0x10
    MMLiveFlowFeedCarouselCommentConfig * _config; // +0x18
    NSMutableArray * _comments; // +0x20
    NSMutableArray * _pendingComments; // +0x28
    NSMutableArray * _commentLabels; // +0x30
    NSTimer * _carouselTimer; // +0x38
    CAGradientLayer * _maskLayer; // +0x40
    CGSize _lastLayoutSize; // +0x48
}
- (id)initWithConfig:(id)arg1;
- (void)prepareForReuse;
- (double)rowHeight;
- (void)commonInit;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setupMaskIfNeed;
- (void)updateMaskLayerLocations;
- (void)layoutLabels;
- (BOOL)addComments:(id)arg1;
- (void)clearComments;
- (void)startCarousel;
- (void)stopCarousel;
- (void)invalidateTimer;
- (void)addNextPendingComment;
- (void)appendNewComment:(id)arg1 animated:(BOOL)arg2;
- (void)animateDisplayEnd;
- (void)updateCurrentIndexBeforeAlpha:(unsigned long long)arg1;
- (void)onAppendFinish:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)comments;
- (void)setComments:(id)arg1;
- (id)pendingComments;
- (void)setPendingComments:(id)arg1;
- (id)commentLabels;
- (void)setCommentLabels:(id)arg1;
- (id)carouselTimer;
- (void)setCarouselTimer:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
