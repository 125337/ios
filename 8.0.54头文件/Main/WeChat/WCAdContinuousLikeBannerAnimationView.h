@interface WCAdContinuousLikeBannerAnimationView : MMUIView <CAAnimationDelegate, IWCAdSocialLikeLogicExt>
{
    int _lastBannerStyle; // +0x8
    WCAdContinuousLikeBannerInfo * _bannerInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    unsigned long long _contentItemScene; // +0x20
    double _bannerX; // +0x28
    double _topBannerY; // +0x30
    double _bottomBannerY; // +0x38
    double _animationOffsetX; // +0x40
    double _animationOffsetY; // +0x48
    double _lastBannerY; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 bannerInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)calculateAnimationArea;
- (void)playBannerAnimation:(double)arg1 bannerStyle:(int)arg2;
- (void)playBannerAnimation:(double)arg1 bannerStyle:(int)arg2 ignoreCheckBottom:(BOOL)arg3 originOffsetX:(double)arg4 animationDuration:(double)arg5;
- (void)playFirstLikeAnimationGroup;
- (double)fetchBannerY;
- (id)createBannerView:(int)arg1 bannerY:(double)arg2;
- (id)fetchContinuousLikeReportInfo;
- (void)onContinuousLikeCountChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 likeCount:(int)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (double)bannerX;
- (void)setBannerX:(double)arg1;
- (double)topBannerY;
- (void)setTopBannerY:(double)arg1;
- (double)bottomBannerY;
- (void)setBottomBannerY:(double)arg1;
- (double)animationOffsetX;
- (void)setAnimationOffsetX:(double)arg1;
- (double)animationOffsetY;
- (void)setAnimationOffsetY:(double)arg1;
- (int)lastBannerStyle;
- (void)setLastBannerStyle:(int)arg1;
- (double)lastBannerY;
- (void)setLastBannerY:(double)arg1;
- (void).cxx_destruct;
@end

