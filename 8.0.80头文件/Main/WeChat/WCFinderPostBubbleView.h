@interface WCFinderPostBubbleView : UIView
{
    id /* block */ _bubbleTapAction; // +0x8
    NSMutableArray * _bubbleViews; // +0x10
}
+ (double)bubbleViewHeightWithTexts:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateBubbles:(id)arg1;
- (void)clearBubbles;
- (id)createBubbleContainerWithText:(id)arg1 tag:(long long)arg2;
- (void)layoutSubviews;
- (void)onTapBubble:(id)arg1;
- (id /* block */)bubbleTapAction;
- (void)setBubbleTapAction:(id /* block */)arg1;
- (id)bubbleViews;
- (void)setBubbleViews:(id)arg1;
- (void).cxx_destruct;
@end
