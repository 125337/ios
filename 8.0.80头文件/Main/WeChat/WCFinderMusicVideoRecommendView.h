@interface WCFinderMusicVideoRecommendView : UIView <UIScrollViewDelegate>
{
    double _indicatorCenterX; // +0x8
    NSDictionary * _reportParams; // +0x10
    id /* block */ _selectBlock; // +0x18
    id /* block */ _closeBlock; // +0x20
    UIImageView * _indicatorView; // +0x28
    UILabel * _titleLabel; // +0x30
    UIButton * _closeButton; // +0x38
    UIScrollView * _scrollView; // +0x40
    NSMutableArray * _cardViews; // +0x48
    UIScrollView * _outerScrollView; // +0x50
    WCFinderAnimationLoadingView * _loadingIndicatorView; // +0x58
    UILabel * _loadingLabel; // +0x60
}
+ (double)contentHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateWithItems:(id)arg1;
- (void)updateDownloadProgressForItem:(id)arg1;
- (void)updateWithItems:(id)arg1 loadState:(unsigned long long)arg2 title:(id)arg3;
- (void)onSelectCard:(id)arg1;
- (void)onClose;
- (void)pausePlayback;
- (void)resumeVisiblePlayback;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)updateOuterScrollViewObservation;
- (void)stopObservingOuterScrollView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (double)indicatorCenterX;
- (void)setIndicatorCenterX:(double)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (id /* block */)selectBlock;
- (void)setSelectBlock:(id /* block */)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)cardViews;
- (void)setCardViews:(id)arg1;
- (id)outerScrollView;
- (void)setOuterScrollView:(id)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (void).cxx_destruct;
@end
