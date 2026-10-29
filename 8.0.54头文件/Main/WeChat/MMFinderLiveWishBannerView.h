@interface MMFinderLiveWishBannerView : MMLiveBaseComponentView <MMFinderLiveGiftResourceMgrExt>
{
    BOOL _firstDisplay; // +0x8
    BOOL _isWishExposed; // +0x9
    BOOL _isGiftWallExposed; // +0xa
    BOOL _isGiftWallBanner; // +0xb
    unsigned int _index; // +0xc
    unsigned int _lastWidth; // +0x10
    id /* block */ _clickedCallBlock; // +0x18
    id /* block */ _exposedCallBlock; // +0x20
    id /* block */ _uiChangedCallBlock; // +0x28
    unsigned long long _productTotalCount; // +0x30
    unsigned long long _productCurCount; // +0x38
    FinderLiveGiftWallInfo * _giftWallInfo; // +0x40
    CAGradientLayer * _gradientLayer; // +0x48
    MMUILabel * _titleLabel; // +0x50
    UIImageView * _giftImageView; // +0x58
    MMTimer * _scheduleTimer; // +0x60
    NSArray * _liveRewardWishes; // +0x68
    MMFinderLiveRewardWish * _wishGiftItem; // +0x70
    NSMutableSet * _wishRewardGiftIdSet; // +0x78
    CGRect _lastFrame; // +0x80
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (void)layoutUI;
- (void)stopScheduleTimer;
- (void)startScheduleTimer:(unsigned long long)arg1;
- (void)onDisplayWishGiftProgess;
- (void)showWithTitle:(id)arg1 productTotalCount:(unsigned long long)arg2 productCurCount:(unsigned long long)arg3 liveRewardWishes:(id)arg4 giftWallInfo:(id)arg5;
- (void)updateGiftWallInfo:(id)arg1;
- (BOOL)checkIfRewardhWishInfoChanged:(id)arg1;
- (void)dismiss;
- (void)sizeToFits;
- (BOOL)isGiftWishEnable;
- (BOOL)isGiftWallEnable;
- (id)finderLiveTask;
- (void)updateWhenFontSizeChanged;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
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
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)giftImageView;
- (void)setGiftImageView:(id)arg1;
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
- (BOOL)isGiftWallBanner;
- (void)setIsGiftWallBanner:(BOOL)arg1;
- (id)liveRewardWishes;
- (void)setLiveRewardWishes:(id)arg1;
- (id)wishGiftItem;
- (void)setWishGiftItem:(id)arg1;
- (id)wishRewardGiftIdSet;
- (void)setWishRewardGiftIdSet:(id)arg1;
- (void).cxx_destruct;
@end

