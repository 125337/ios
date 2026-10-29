@interface WCFinderStreamFooterView : UICollectionReusableView <WCFinderStreamLoadingStateDelegate, ILinkEventExt>
{
    BOOL _displayCircleLoadingView; // +0x8
    double _triggerHeight; // +0x10
    NSString * _normalText; // +0x18
    id <WCFinderStreamFooterViewActionDelegate> _delegate; // +0x20
    unsigned long long _state; // +0x28
    UILabel * _label; // +0x30
    WCFinderNoMoreView * _noMoreView; // +0x38
    UITapGestureRecognizer * _singleGestureRecognizer; // +0x40
    RichTextView * _stateTipsLabel; // +0x48
    WCFinderAnimationLoadingView * _loadingView; // +0x50
    UILabel * _recEndViewLabel; // +0x58
    UIButton * _recEndViewBtn; // +0x60
}
+ (double)getFooterViewHeight;
- (void)onLoadingStateChanged:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)recEndViewLabel;
- (id)recEndViewBtn;
- (id)stateTipsLabel;
- (void)layoutSubviews;
- (BOOL)isLoading;
- (void)onResumeOfLoading;
- (void)onStateOfNormal;
- (void)setTipsColor:(id)arg1;
- (void)onStateOfLoading;
- (void)displayLoadingView;
- (void)hiddenLoadingView;
- (void)onStateOfEmpty:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfBlank;
- (void)onStateOfNoMoreWithBottomTips:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1 enableClick:(BOOL)arg2;
- (void)onStateOfNoMoreDataWithTips:(id)arg1;
- (void)onStateOfNoMoreDataWithConfig:(id)arg1;
- (void)onStateOfError:(id)arg1;
- (void)updateWithConfig:(id)arg1;
- (unsigned long long)flowViewState;
- (id)singleGestureRecognizer;
- (void)onClickRefresh;
- (void)clickNoMoreDataNavToRecBtn;
- (void)onForceSetTipsTop:(double)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)setNoMoreLogoIcon:(id)arg1 size:(CGSize)arg2;
- (void)setLogoIconOnly:(id)arg1 size:(CGSize)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)makeNoMoreViewCenter;
- (void)prepareForReuse;
- (double)triggerHeight;
- (void)setTriggerHeight:(double)arg1;
- (id)normalText;
- (void)setNormalText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (BOOL)displayCircleLoadingView;
- (void)setDisplayCircleLoadingView:(BOOL)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)noMoreView;
- (void)setNoMoreView:(id)arg1;
- (void)setSingleGestureRecognizer:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void)setRecEndViewLabel:(id)arg1;
- (void)setRecEndViewBtn:(id)arg1;
- (void).cxx_destruct;
@end

