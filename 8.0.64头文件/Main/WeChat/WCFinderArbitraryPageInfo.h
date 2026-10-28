@interface WCFinderArbitraryPageInfo : NSObject
{
    BOOL _isVC; // +0x8
    long long _idx; // +0x10
    UIView * _bannerView; // +0x18
    UIView * _view; // +0x20
    UIViewController * _pageVC; // +0x28
    UIScrollView * _innerScrollView; // +0x30
    NSString * _viewIdentifier; // +0x38
    long long _lifeStep; // +0x40
    void * * _viewWillAppear; // +0x48
    void * * _viewDidAppear; // +0x50
    void * * _viewWillDisappear; // +0x58
    void * * _viewDidDisappear; // +0x60
}
- (BOOL)isVC;
- (void)setIsVC:(BOOL)arg1;
- (long long)idx;
- (void)setIdx:(long long)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)pageVC;
- (void)setPageVC:(id)arg1;
- (id)innerScrollView;
- (void)setInnerScrollView:(id)arg1;
- (id)viewIdentifier;
- (void)setViewIdentifier:(id)arg1;
- (long long)lifeStep;
- (void)setLifeStep:(long long)arg1;
- (void * *)viewWillAppear;
- (void)setViewWillAppear:(void * *)arg1;
- (void * *)viewDidAppear;
- (void)setViewDidAppear:(void * *)arg1;
- (void * *)viewWillDisappear;
- (void)setViewWillDisappear:(void * *)arg1;
- (void * *)viewDidDisappear;
- (void)setViewDidDisappear:(void * *)arg1;
- (void).cxx_destruct;
@end
