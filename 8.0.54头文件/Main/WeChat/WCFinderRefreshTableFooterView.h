@interface WCFinderRefreshTableFooterView : UIView
{
    BOOL _isLoadingVisible; // +0x8
    id <WCFinderRefreshTableFooterViewDelegate> _delegate; // +0x10
    NSString * _normalText; // +0x18
    double _heightLimit; // +0x20
    double _heightInNoMoreDataState; // +0x28
    unsigned long long _state; // +0x30
    unsigned long long _style; // +0x38
    UILabel * _label; // +0x40
    WCFinderNoMoreView * _noMoreView; // +0x48
    UITapGestureRecognizer * _singleGestureRecognizer; // +0x50
    WCFinderAnimationLoadingView * _loadingView; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setNoMoreViewColor:(id)arg1;
- (void)setUseDarkLoading:(BOOL)arg1;
- (void)setNoMoreViewDarkStyle:(BOOL)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)onConfigLabelTop:(double)arg1;
- (BOOL)isLoadingNow;
- (BOOL)isNormalStateNow;
- (void)onResumeOfLoading;
- (void)onForceNoramalToLoadingState;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfBlank;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onSetStateForNoMoreData:(id)arg1;
- (void)onStateOfError:(id)arg1;
- (id)singleGestureRecognizer;
- (void)onClickRetry;
- (void)onClick;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)forceUpdateRefreshState:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1 checkIsDragging:(BOOL)arg2;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)normalText;
- (void)setNormalText:(id)arg1;
- (double)heightLimit;
- (void)setHeightLimit:(double)arg1;
- (double)heightInNoMoreDataState;
- (void)setHeightInNoMoreDataState:(double)arg1;
- (unsigned long long)state;
- (unsigned long long)style;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)noMoreView;
- (void)setNoMoreView:(id)arg1;
- (void)setSingleGestureRecognizer:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)isLoadingVisible;
- (void)setIsLoadingVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end

