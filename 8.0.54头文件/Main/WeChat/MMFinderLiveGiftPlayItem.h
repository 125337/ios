@interface MMFinderLiveGiftPlayItem : NSObject
{
    BOOL _sentByMe; // +0x8
    unsigned int _startTime; // +0xc
    MMFinderLiveRewardGiftItem * _giftItem; // +0x10
    MMFinderLiveRewardAppMsgInfo * _rewardAppMsgInfo; // +0x18
    NSString * _comboId; // +0x20
    NSString * _animationId; // +0x28
    FinderLiveGift_MultiAnimationItem * _multiAnimationItem; // +0x30
    long long _playAttackGiftItemIndex; // +0x38
}
- (id)initWithGiftItem:(id)arg1 rewardAppMsgInfo:(id)arg2 comboId:(id)arg3 sentByMe:(BOOL)arg4;
- (void)updateWithResourceUrl:(id)arg1 animationId:(id)arg2;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)rewardAppMsgInfo;
- (void)setRewardAppMsgInfo:(id)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (BOOL)sentByMe;
- (void)setSentByMe:(BOOL)arg1;
- (id)comboId;
- (void)setComboId:(id)arg1;
- (id)animationId;
- (void)setAnimationId:(id)arg1;
- (id)multiAnimationItem;
- (void)setMultiAnimationItem:(id)arg1;
- (long long)playAttackGiftItemIndex;
- (void)setPlayAttackGiftItemIndex:(long long)arg1;
- (void).cxx_destruct;
@end

