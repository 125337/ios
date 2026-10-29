@interface WACircleProgressLoadingViewController : WALoadingViewController <IWALocalCacheMgrExt, WACapsuleMenuDataSource, WAAppTaskSystemCoverViewDataSource>
{
    BOOL _showWeAppBrand; // +0x68
    BOOL _isInDarkMode; // +0x69
    unsigned int _lastProgressTime; // +0x6c
    UIView * _backgroundView; // +0x70
    MMWebImageView * _logoView; // +0x78
    MMUILabel * _titleLabel; // +0x80
    WACircleLoadingView * _circleLoadingView; // +0x88
    unsigned long long _initTime; // +0x90
    unsigned long long _appearTime; // +0x98
    UIView * _weappBrandContainerView; // +0xa0
    UIImageView * _weappBrandLogoImageView; // +0xa8
    UILabel * _weappBrandTitleLabel; // +0xb0
    UILabel * _weakNetTipsLabel; // +0xb8
    WCTagsView * _officialTagsView; // +0xc0
    WCTagsView * _easyBuyLogoImageView; // +0xc8
    WCTagsView * _flagshipImageView; // +0xd0
    _TtC9WeAppCore41WALoadingNetWorkInvalidTipsViewController * _networkInavalidVC; // +0xd8
}
- (id)initWithContact:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)delayShowLoadingProgress;
- (void)delayShowWeakNetTips;
- (void)delayCheckDownloadTunnel;
- (void)showNetworkInvalidTipsView;
- (BOOL)isInDarkMode;
- (void)updateContact:(id)arg1;
- (void)configUI;
- (void)updateUI;
- (void)initView;
- (void)initSubViews;
- (void)initBackgroundView;
- (void)initLogoView;
- (void)initContactTitle;
- (void)initLoadingView;
- (void)initTagsView;
- (void)initWeAppBrandView;
- (void)initEasyBuyLogo;
- (void)initWeakNetTips;
- (BOOL)needWeakNetTips;
- (void)viewDidLayoutSubviews;
- (id)officialTagsArray;
- (BOOL)shouldShowBrandOfficialFlag;
- (BOOL)takeOverLoadFailedBehavior;
- (void)onTaskLoadingFailed;
- (void)setShowWeAppBrand:(BOOL)arg1;
- (void)onUpdateAppPkgProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 withAppInfoData:(id)arg4;
- (void)onUpdateAppPkgComplete:(BOOL)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (BOOL)capsuleMenuHidden;
- (CGRect)capsuleMenuOriginalFrame;
- (CGRect)capsuleMenuFrame;
- (long long)capsuleMenuStyleMode;
- (BOOL)systemCoverViewHidden;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)circleLoadingView;
- (void)setCircleLoadingView:(id)arg1;
- (BOOL)showWeAppBrand;
- (void)setIsInDarkMode:(BOOL)arg1;
- (unsigned long long)initTime;
- (void)setInitTime:(unsigned long long)arg1;
- (unsigned long long)appearTime;
- (void)setAppearTime:(unsigned long long)arg1;
- (unsigned int)lastProgressTime;
- (void)setLastProgressTime:(unsigned int)arg1;
- (id)weappBrandContainerView;
- (void)setWeappBrandContainerView:(id)arg1;
- (id)weappBrandLogoImageView;
- (void)setWeappBrandLogoImageView:(id)arg1;
- (id)weappBrandTitleLabel;
- (void)setWeappBrandTitleLabel:(id)arg1;
- (id)weakNetTipsLabel;
- (void)setWeakNetTipsLabel:(id)arg1;
- (id)officialTagsView;
- (void)setOfficialTagsView:(id)arg1;
- (id)easyBuyLogoImageView;
- (void)setEasyBuyLogoImageView:(id)arg1;
- (id)flagshipImageView;
- (void)setFlagshipImageView:(id)arg1;
- (id)networkInavalidVC;
- (void)setNetworkInavalidVC:(id)arg1;
- (void).cxx_destruct;
@end

