@interface WCFinderRecommendBubbleView : MMUIView
{
    UIImageView * _leftImageView; // +0x8
    UILabel * _recommendTipsLabel; // +0x10
    UILabel * _nextTipsLabel; // +0x18
    double _maxWidth; // +0x20
    NSString * _railTips; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 maxWidth:(double)arg2 railTips:(id)arg3;
- (id)leftImageView;
- (id)recommendTipsLabel;
- (id)nextTipsLabel;
- (void)updateWithLeftIcon:(id)arg1 recommendTips:(id)arg2 nextTips:(id)arg3 nextBlock:(id /* block */)arg4;
- (void)layoutAllSubviews;
- (void)setLeftImageView:(id)arg1;
- (void)setRecommendTipsLabel:(id)arg1;
- (void)setNextTipsLabel:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)railTips;
- (void)setRailTips:(id)arg1;
- (void).cxx_destruct;
@end
