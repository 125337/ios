@interface WCFinderNotInterestedShortPanelView : MMUIView
{
    BOOL _highLight; // +0x8
    UILabel * _tipsLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubViewsAndLayout;
- (void)updateView;
- (id)getTipsLabelText;
- (void)setHighLight:(BOOL)arg1;
- (BOOL)isHighLight;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

