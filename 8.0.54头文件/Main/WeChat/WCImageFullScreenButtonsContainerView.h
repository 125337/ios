@interface WCImageFullScreenButtonsContainerView : MMUIView
{
    unsigned long long _contentItemScene; // +0x8
    id /* block */ _originalArticleBlock; // +0x10
    id /* block */ _circleToSearchBlock; // +0x18
    WCMomentsBizOriginalArticleButton * _bizOriginalArticleButton; // +0x20
    ImageBrowseButton * _circleToSearchButton; // +0x28
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)showMediaItem:(id)arg1;
- (BOOL)canShowBizOriginalArticleButtonWithMediaItem:(id)arg1;
- (BOOL)canShowCircleToSearchButton;
- (void)hideCircleToSearchButton;
- (void)initBizOriginalArticleButton;
- (void)initCircleToSearchButton;
- (void)layoutSubviews;
- (void)onClickOriginalArticleButton;
- (void)onClickCircleToSearchButton;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (id /* block */)originalArticleBlock;
- (void)setOriginalArticleBlock:(id /* block */)arg1;
- (id /* block */)circleToSearchBlock;
- (void)setCircleToSearchBlock:(id /* block */)arg1;
- (id)bizOriginalArticleButton;
- (void)setBizOriginalArticleButton:(id)arg1;
- (id)circleToSearchButton;
- (void)setCircleToSearchButton:(id)arg1;
- (void).cxx_destruct;
@end

