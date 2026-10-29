@interface GameCenterBannerManager : MMUserService <UIScrollViewDelegate, MMServiceProtocol>
{
    BOOL _isBannerEnabled; // +0x8
    BOOL _keepNavIconDark; // +0x9
    BOOL _isBannerShow; // +0xa
    BOOL _anotherScrollViewOriginBounces; // +0xb
    MMWebViewController * _bannerWebController; // +0x10
    long long _bannerState; // +0x18
    id <GameCenterBannerManagerDelegate> _delegate; // +0x20
    id <GameCenterBannerNavBarProtocol> _navDelegate; // +0x28
    double _panStartBannerBottom; // +0x30
    double _bannerHwRatio; // +0x38
    double _bannerCapsuleHeight; // +0x40
    double _lastAnotherScrollViewContentOffsetY; // +0x48
    GCDragDecorateView * _dragDecorateView; // +0x50
}
- (id)init;
- (id)dragDecorateView;
- (id)bannerWebController;
- (id)getHandledBannerUrl;
- (void)loadWebBannerConfig:(id)arg1;
- (void)embedWebBannerIn:(id)arg1;
- (void)changeBannerViewHeightRatio:(double)arg1;
- (void)changeBannerCapsuleHeight:(double)arg1;
- (void)updateDecorateViewRadius:(double)arg1;
- (void)updateDecorateViewShow:(BOOL)arg1;
- (void)destoryBanner;
- (void)setBannerState:(long long)arg1;
- (void)showBannerWithAutoExpand:(BOOL)arg1 isCacheInit:(BOOL)arg2;
- (void)loadBannerTimeout;
- (void)hideBanner;
- (void)expandBanner;
- (void)capsuleBanner;
- (void)disableScrollViewInteractionForShort;
- (void)anotherPartScrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTopBarAlpah:(double)arg1 isIconDark:(BOOL)arg2;
- (void)setLayoutUnderNavBar:(BOOL)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)saveBannerWebCache:(id)arg1;
- (id)getBannerWebCache;
- (BOOL)shouldDisplayImmediately;
- (BOOL)isBannerEnabled;
- (void)setIsBannerEnabled:(BOOL)arg1;
- (void)setBannerWebController:(id)arg1;
- (long long)bannerState;
- (BOOL)keepNavIconDark;
- (void)setKeepNavIconDark:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)navDelegate;
- (void)setNavDelegate:(id)arg1;
- (double)panStartBannerBottom;
- (void)setPanStartBannerBottom:(double)arg1;
- (double)bannerHwRatio;
- (void)setBannerHwRatio:(double)arg1;
- (double)bannerCapsuleHeight;
- (void)setBannerCapsuleHeight:(double)arg1;
- (double)lastAnotherScrollViewContentOffsetY;
- (void)setLastAnotherScrollViewContentOffsetY:(double)arg1;
- (void)setDragDecorateView:(id)arg1;
- (BOOL)isBannerShow;
- (void)setIsBannerShow:(BOOL)arg1;
- (BOOL)anotherScrollViewOriginBounces;
- (void)setAnotherScrollViewOriginBounces:(BOOL)arg1;
- (void).cxx_destruct;
@end
