@interface MMAutoLayoutSheetView : MMPageSheetBaseView
{
    UIStackView * _contentView; // +0x8
    MMScrollStack * _scrollStack; // +0x10
    double _fixedHeight; // +0x18
}
- (id)init;
- (void)initPageSheet;
- (void)initStackView;
- (void)setPageDetailView;
- (void)updateContentViewHeight;
- (void)showWithAnimated:(BOOL)arg1;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2;
- (void)didPushSelfInPage:(id)arg1;
- (void)pageSheetDidRotation;
- (void)customArrangeViews;
- (void)layoutSubviews;
- (void)setContentMargin:(UIEdgeInsets)arg1;
- (void)appendView:(id)arg1 withNextSpace:(double)arg2;
- (id)scrollStack;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setScrollStack:(id)arg1;
- (double)fixedHeight;
- (void)setFixedHeight:(double)arg1;
- (void).cxx_destruct;
@end
