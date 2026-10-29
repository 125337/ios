@interface WCSpringWishBubbleView : UIView
{
    double _arrowPosition; // +0x8
    NSString * _feedId; // +0x10
    double _maxWidth; // +0x18
    UIImageView * _firecrackerView; // +0x20
    MMUILabel * _greetingLabel; // +0x28
    CAShapeLayer * _bubbleLayer; // +0x30
    UIView * _bubbleView; // +0x38
}
- (id)init;
- (void)initViews;
- (void)setArrowPosition:(double)arg1;
- (id)firecrackerView;
- (id)greetingLabel;
- (void)setMaxWidth:(double)arg1;
- (double)calculateHeight;
- (double)calculateWidth;
- (void)layoutSubviews;
- (id)generateArrowLayer:(double)arg1;
- (void)setFeedId:(id)arg1;
- (void)configSpringBubbleDataReport;
- (double)arrowPosition;
- (id)feedId;
- (double)maxWidth;
- (void)setFirecrackerView:(id)arg1;
- (void)setGreetingLabel:(id)arg1;
- (id)bubbleLayer;
- (void)setBubbleLayer:(id)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (void).cxx_destruct;
@end
