@interface WCFinderColumnCollectionFooterView : UICollectionReusableView
{
    WCFinderAnimationLoadingView * _loadingView; // +0x8
    unsigned long long _state; // +0x10
}
+ (id)footerViewID;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubView;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData;
- (void)onStateOfError:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
