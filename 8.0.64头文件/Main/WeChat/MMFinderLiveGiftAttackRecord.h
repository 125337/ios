@interface MMFinderLiveGiftAttackRecord : NSObject
{
    BOOL _isGiftAttackStart; // +0x8
    MMFinderLiveGiftPlayItem * _playItem; // +0x10
    id /* block */ _giftAttackEndCallback; // +0x18
    id /* block */ _giftAttackGetAutoEndDurationCallback; // +0x20
    id /* block */ _rewardCompletion; // +0x28
}
- (id)initWithPlayItem:(id)arg1;
- (void)onGiftAttackStart;
- (void)onGiftAttackEnd:(long long)arg1;
- (void)invokeAutoEnd;
- (id)recordId;
- (double)autoEndDuration;
- (id)playItem;
- (void)setPlayItem:(id)arg1;
- (BOOL)isGiftAttackStart;
- (void)setIsGiftAttackStart:(BOOL)arg1;
- (id /* block */)giftAttackEndCallback;
- (void)setGiftAttackEndCallback:(id /* block */)arg1;
- (id /* block */)giftAttackGetAutoEndDurationCallback;
- (void)setGiftAttackGetAutoEndDurationCallback:(id /* block */)arg1;
- (id /* block */)rewardCompletion;
- (void)setRewardCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
