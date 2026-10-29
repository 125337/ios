@interface MMEmotionStoreRewardThanksViewController : MMUIViewController <MMWebImageViewDelegate>
{
    EmoticonStoreItem * m_storeItem; // +0x68
    EmotionRewardResponseInfo * m_rewardInfo; // +0x70
    StoreEmotionRewardLogicObject * m_rewardLogic; // +0x78
    MMUIScrollView * m_scrollView; // +0x80
    MMWebImageView * m_thanksRewardImage; // +0x88
    UIImageView * m_loadingGif; // +0x90
    MMUILabel * m_thanksTips; // +0x98
}
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 RewardLogic:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initScrollView;
- (void)updateScrollView;
- (void)initThanksRewardImage;
- (double)updateThanksRewardImageFromMarginTop:(double)arg1;
- (void)initColorEggTipsView;
- (double)updateColorEggTipsViewFromMarginTop:(double)arg1;
- (void)onClose;
- (void)onLoadImageOK:(id)arg1;
- (void).cxx_destruct;
@end

