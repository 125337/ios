@interface MMStarRatingView : UIView
{
    id <MMStarRatingViewDelegate> _delegate; // +0x8
    MMStarRatingViewConfiguration * _configuration; // +0x10
    double _scorePercent; // +0x18
    UIView * _foregroundContentView; // +0x20
    UIView * _backgroundContentView; // +0x28
}
- (id)initWithConfiguration:(id)arg1;
- (void)setupSubviews;
- (id)createContentViewWithImage:(id)arg1;
- (void)setScorePercent:(double)arg1;
- (void)onTapRateView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (double)scorePercent;
- (id)foregroundContentView;
- (void)setForegroundContentView:(id)arg1;
- (id)backgroundContentView;
- (void)setBackgroundContentView:(id)arg1;
- (void).cxx_destruct;
@end

