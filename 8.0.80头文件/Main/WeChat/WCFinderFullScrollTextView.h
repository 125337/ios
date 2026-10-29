@interface WCFinderFullScrollTextView : UIView
{
    UIScrollView * _scrollView; // +0x8
    WCFinderFeedContentTouchExpandTextView * _contentLabel; // +0x10
    double _verticalMargin; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setVerticalMargin:(double)arg1;
- (id)config;
- (void)updateConfig;
- (void)applyLabelChange;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (double)verticalMargin;
- (void).cxx_destruct;
@end
