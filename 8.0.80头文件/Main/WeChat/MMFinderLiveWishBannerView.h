@interface MMFinderLiveWishBannerView : MMLiveBaseComponentView <MMFinderLiveGiftResourceMgrExt>
{
    BOOL _firstDisplay; // +0x8
    BOOL _isWishExposed; // +0x9
    BOOL _isGiftWallExposed; // +0xa
    BOOL _isDisplayingGiftWish; // +0xb
    BOOL _isDisplayingInteractionWish; // +0xc
    BOOL _isDisplayingGiftWall; // +0xd
    BOOL _isDisplayingActivityBannerItem; // +0xe
    unsigned int _index; // +0x10
    unsigned int _lastWidth; // +0x14
    id /* block */ _clickedCallBlock; // +0x18
    id /* block */ _exposedCallBlock; // +0x20
    id /* block */ _uiChangedCallBlock; // +0x28
    unsigned long long _productTotalCount; // +0x30
    unsigned long long _productCurCount; // +0x38
    FinderLiveGiftWallInfo * _giftWallInfo; // +0x40
    InteractionWishConfig * _interactionWishConfig; // +0x48
    FinderLiveBoardEventSubTitle * _boardEventSubTitle; // +0x50
    NSString * _displayingActivityEventId; // +0x58
    CAGradientLayer * _gradientLayer; // +0x60
    MMUILabel * _titleLabel; // +0x68
    UIImageView * _iconImageView; // +0x70
    MMTimer * _scheduleTimer; // +0x78
    unsigned long long _displayingActivityBannerIndex; // +0x80
    NSArray * _liveRewardWishes; // +0x88
    MMFinderLiveRewardWish * _wishGiftItem; // +0x90
    NSMutableSet * _wishRewardGiftIdSet; // +0x98
    CGRect _lastFrame; // +0xa0
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (void)layoutUI;
- (void)updateBannerWidthAnimation:(BOOL)arg1;
- (void)layoutTitleLabel;
- (void)stopScheduleTimer;
- (void)startScheduleTimer:(unsigned long long)arg1;
- (void)onDisplayWishProgess;
- (long long)maxDisplayBannerCount;
- (void)showWishBannerWithTitle:(id)arg1 productTotalCount:(unsigned long long)arg2 productCurCount:(unsigned long long)arg3 liveRewardWishes:(id)arg4 giftWallInfo:(id)arg5 interactionWishConfig:(id)arg6 boardEventSubTitle:(id)arg7;
- (BOOL)checkIfRewardWishInfoChanged:(id)arg1;
- (BOOL)checkIfGiftWallInfoChanged:(id)arg1;
- (BOOL)checkIfInteractionWishInfoChanged:(id)arg1;
- (void)dismiss;
- (void)sizeToFits;
- (BOOL)isGiftWishEnable;
- (BOOL)isGiftWallEnable;
- (BOOL)isInteractionWishEnable;
- (BOOL)isActivityRankEnable;
- (BOOL)isDisplayingActivityBanner;
- (id)finderLiveTask;
- (void)updateWhenFontSizeChanged;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onBannerClicked:(id)arg1;
- (id /* block */)clickedCallBlock;
- (void)setClickedCallBlock:(id /* block */)arg1;
- (id /* block */)exposedCallBlock;
- (void)setExposedCallBlock:(id /* block */)arg1;
- (id /* block */)uiChangedCallBlock;
- (void)setUiChangedCallBlock:(id /* block */)arg1;
- (unsigned long long)productTotalCount;
- (void)setProductTotalCount:(unsigned long long)arg1;
- (unsigned long long)productCurCount;
- (void)setProductCurCount:(unsigned long long)arg1;
- (id)giftWallInfo;
- (void)setGiftWallInfo:(id)arg1;
- (id)interactionWishConfig;
- (void)setInteractionWishConfig:(id)arg1;
- (id)boardEventSubTitle;
- (void)setBoardEventSubTitle:(id)arg1;
- (id)displayingActivityEventId;
- (void)setDisplayingActivityEventId:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)scheduleTimer;
- (void)setScheduleTimer:(id)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (BOOL)firstDisplay;
- (void)setFirstDisplay:(BOOL)arg1;
- (unsigned int)lastWidth;
- (void)setLastWidth:(unsigned int)arg1;
- (CGRect)lastFrame;
- (void)setLastFrame:(CGRect)arg1;
- (BOOL)isWishExposed;
- (void)setIsWishExposed:(BOOL)arg1;
- (BOOL)isGiftWallExposed;
- (void)setIsGiftWallExposed:(BOOL)arg1;
- (BOOL)isDisplayingGiftWish;
- (void)setIsDisplayingGiftWish:(BOOL)arg1;
- (BOOL)isDisplayingInteractionWish;
- (void)setIsDisplayingInteractionWish:(BOOL)arg1;
- (BOOL)isDisplayingGiftWall;
- (void)setIsDisplayingGiftWall:(BOOL)arg1;
- (BOOL)isDisplayingActivityBannerItem;
- (void)setIsDisplayingActivityBannerItem:(BOOL)arg1;
- (unsigned long long)displayingActivityBannerIndex;
- (void)setDisplayingActivityBannerIndex:(unsigned long long)arg1;
- (id)liveRewardWishes;
- (void)setLiveRewardWishes:(id)arg1;
- (id)wishGiftItem;
- (void)setWishGiftItem:(id)arg1;
- (id)wishRewardGiftIdSet;
- (void)setWishRewardGiftIdSet:(id)arg1;
- (void).cxx_destruct;
@end
