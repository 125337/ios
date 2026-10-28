@interface WCFinderColumnCollectionFooterView : UICollectionReusableView
{
    id <WCFinderColumnCollectionFooterViewDelegate> _delegate; // +0x8
    WCFinderAnimationLoadingView * _loadingView; // +0x10
    unsigned long long _state; // +0x18
}
+ (id)footerViewID;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubView;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData;
- (void)onStateOfError:(id)arg1;
- (void)refreshCollectionViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
