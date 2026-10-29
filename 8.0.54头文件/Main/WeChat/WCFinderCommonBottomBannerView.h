@interface WCFinderCommonBottomBannerView : UIView
{
    WCFinderFeedContentVM * _contentVM; // +0x8
    unsigned long long _bannerType; // +0x10
    id <WCFinderCommonBottomViewDelegate> _delegate; // +0x18
    id /* block */ _hiddenBottomBannerViewBlock; // +0x20
}
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)bannerType;
- (void)setBannerType:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)hiddenBottomBannerViewBlock;
- (void)setHiddenBottomBannerViewBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

