@interface MMLiveGiftMagicRewardHandler : NSObject <_TtP6WeChat18IMRViewResListener_, _TtP6WeChat15IMRViewListener_>
{
    _TtC6WeChat15MagicRewardView * _rewardView; // +0x8
    NSString * _productId; // +0x10
    NSMutableArray * _liveGiftMRViewListenerList; // +0x18
}
- (id)initWithMagicRewardView:(id)arg1;
- (void)addMRListeners;
- (void)updateProductId:(id)arg1;
- (id)currentProductId;
- (id)getMagicRewardView;
- (void)addLiveGiftMRListener:(id)arg1;
- (void)removeLiveGiftMRListener:(id)arg1;
- (void)preparePlay:(id)arg1;
- (void)prepareEdit:(id)arg1;
- (void)onPlayCancelWithView:(id)arg1;
- (id)liveGiftMRViewListenerList;
- (void)onResLoadedWithView:(id)arg1;
- (void)onResUnloadedWithView:(id)arg1;
- (void)onAnimationStartWithView:(id)arg1;
- (void)onAnimationCancelWithView:(id)arg1;
- (void)onAnimationEndWithView:(id)arg1;
- (void)onAnimationRepeatWithView:(id)arg1;
- (void)onAnimationTimeoutWithView:(id)arg1;
- (id)rewardView;
- (void)setRewardView:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (void)setLiveGiftMRViewListenerList:(id)arg1;
- (void).cxx_destruct;
@end

