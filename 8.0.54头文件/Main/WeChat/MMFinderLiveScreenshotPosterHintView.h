@interface MMFinderLiveScreenshotPosterHintView : UIView
{
    MMFinderLiveScreenshotPosterLogic * _screenshotPosterLogic; // +0x8
    id <MMFinderLiveScreenshotPosterHintViewDelegate> _delegate; // +0x10
    UILabel * _label; // +0x18
}
- (id)initWithScreenshotPosterLogic:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onTapped;
- (id)screenshotPosterLogic;
- (void)setScreenshotPosterLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end

