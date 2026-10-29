@interface WCFinderProfileNewLifeHeaderViewModel : NSObject
{
    BOOL _authorState; // +0x8
    unsigned int _likeCount; // +0xc
    unsigned int _globalFavoriteCount; // +0x10
    unsigned int _shareCount; // +0x14
    unsigned int _heartLikeCount; // +0x18
    NSString * _bannerWording; // +0x20
    double _bannerHeight; // +0x28
    NSDictionary * _bannerReportParams; // +0x30
    id /* block */ _bannerTapHandler; // +0x38
    id /* block */ _bannerShowHandler; // +0x40
    id /* block */ _headerRefreshHandler; // +0x48
}
- (double)heightForWidth:(double)arg1;
- (void)setLikeCount:(unsigned int)arg1;
- (void)setGlobalFavoriteCount:(unsigned int)arg1;
- (void)setShareCount:(unsigned int)arg1;
- (void)setHeartLikeCount:(unsigned int)arg1;
- (void)setBannerWording:(id)arg1;
- (BOOL)containGadgets;
- (id)bannerWording;
- (double)bannerHeight;
- (void)setBannerHeight:(double)arg1;
- (BOOL)isAuthorState;
- (void)setAuthorState:(BOOL)arg1;
- (unsigned int)likeCount;
- (unsigned int)globalFavoriteCount;
- (unsigned int)shareCount;
- (unsigned int)heartLikeCount;
- (id)bannerReportParams;
- (void)setBannerReportParams:(id)arg1;
- (id /* block */)bannerTapHandler;
- (void)setBannerTapHandler:(id /* block */)arg1;
- (id /* block */)bannerShowHandler;
- (void)setBannerShowHandler:(id /* block */)arg1;
- (id /* block */)headerRefreshHandler;
- (void)setHeaderRefreshHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

