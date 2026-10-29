@interface WCListenLyricsLoadingHeaderView : MMUIView
{
    id /* block */ _onClickBlock; // +0x8
    WCListenLyricAnimationLoadingView * _loadingView; // +0x10
    UIView * _highlightedView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)startAnimationWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)stopAnimation;
- (void)setHighlightedViewHidden:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)loadingView;
- (id)highlightedView;
- (id /* block */)onClickBlock;
- (void)setOnClickBlock:(id /* block */)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setHighlightedView:(id)arg1;
- (void).cxx_destruct;
@end
