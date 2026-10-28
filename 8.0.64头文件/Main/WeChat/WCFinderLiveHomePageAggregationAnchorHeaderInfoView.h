@interface WCFinderLiveHomePageAggregationAnchorHeaderInfoView : UIView
{
    NSMutableArray * _headImageViews; // +0x8
    WCFinderLiveAggregationCardAnchorGroup * _anchorGroup; // +0x10
    NSString * _title; // +0x18
    MMLiveColorfulLabel * _textLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)updateWithAnchorGroup:(id)arg1 title:(id)arg2 textColors:(id)arg3;
- (void)cropHeadViewIntersectionArea:(id)arg1;
- (double)widthToFit:(double)arg1;
- (void)layoutSubviews;
- (id)headImageViews;
- (void)setHeadImageViews:(id)arg1;
- (id)anchorGroup;
- (void)setAnchorGroup:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
