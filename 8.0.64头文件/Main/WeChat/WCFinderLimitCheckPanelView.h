@interface WCFinderLimitCheckPanelView : UIView
{
    NSMutableDictionary * _arrangeViewsDic; // +0x8
    UIColor * _lineColor; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupLineColor:(id)arg1;
- (void)removeAllArrangeSubviews;
- (void)addArrangedSubview:(id)arg1 priority:(long long)arg2;
- (void)layoutAddedSubviews;
- (id)arrangeViewsDic;
- (void)setArrangeViewsDic:(id)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (void).cxx_destruct;
@end
