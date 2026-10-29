@interface WCAdBiddingSliderCardCellView : WCAdSliderCardCellView
{
    BOOL _hasFiredAutoSlide; // +0x8
    UIView * _backgroundCardView; // +0x10
    WCAdBiddingSliderCardStyleConfig * _config; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupBackgroundCardView;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateWithStyle:(id)arg1;
- (id)createContentContainer;
- (void)updateMediaUI:(BOOL)arg1;
- (void)mediaStop;
- (void)mediaPause;
- (id)fetchReportItem;
- (double)fetchImageShowDuration;
- (BOOL)shouldAutoSlideVideoByInterval;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)mediaPlay;
- (void)onMaskButtonClick:(id)arg1 forEvent:(id)arg2;
- (id)backgroundCardView;
- (void)setBackgroundCardView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)hasFiredAutoSlide;
- (void)setHasFiredAutoSlide:(BOOL)arg1;
- (void).cxx_destruct;
@end
