@interface MMFinderLiveAnchorCustomizeRewardItem : NSObject
{
    float _price; // +0x8
    unsigned int _customModQuota; // +0xc
    unsigned int _customRemainModetimes; // +0x10
    unsigned int _customMaxTextLen; // +0x14
    unsigned int _customFlag; // +0x18
    NSString * _productId; // +0x20
    NSString * _rewardName; // +0x28
    unsigned long long _rewardSpamResult; // +0x30
    NSString * _rewardSpamMessage; // +0x38
    NSMutableArray * _switchSkinItemArray; // +0x40
    MMFinderLiveAnchorCustomizeRewardStyleItem * _currentStyle; // +0x48
    MMFinderLiveAnchorCustomizeRewardStyleItem * _commitStyle; // +0x50
    MMFinderLiveAnchorCustomizeRewardResourceUrl * _giftThumbnailUrl; // +0x58
    MMFinderLiveAnchorCustomizeRewardResourceUrl * _giftAnimationUrl; // +0x60
    MMFinderLiveAnchorCustomizeRewardResourceUrl * _giftPreviewAnimationUrl; // +0x68
}
- (id)initWithFinderLiveGift:(id)arg1;
- (void)initRewardBaseInfoProperty:(id)arg1;
- (void)initCustomConfigProperty:(id)arg1;
- (void)initRewardSpamResultProperty:(id)arg1;
- (void)initCostomizeRewardProperty:(id)arg1;
- (void)updateStatusOnLocalCommitStyleSuccess;
- (void)decreaseRemainModetimes;
- (BOOL)isCustomizeColorEnable;
- (BOOL)isCustomizeTextEnable;
- (BOOL)isCustomizeImageEnable;
- (id)thumbnailUrl;
- (id)animationUrl;
- (id)previewAnimationUrl;
- (id)productId;
- (void)setProductId:(id)arg1;
- (float)price;
- (void)setPrice:(float)arg1;
- (id)rewardName;
- (void)setRewardName:(id)arg1;
- (unsigned int)customModQuota;
- (void)setCustomModQuota:(unsigned int)arg1;
- (unsigned int)customRemainModetimes;
- (void)setCustomRemainModetimes:(unsigned int)arg1;
- (unsigned int)customMaxTextLen;
- (void)setCustomMaxTextLen:(unsigned int)arg1;
- (unsigned long long)rewardSpamResult;
- (void)setRewardSpamResult:(unsigned long long)arg1;
- (id)rewardSpamMessage;
- (void)setRewardSpamMessage:(id)arg1;
- (id)switchSkinItemArray;
- (void)setSwitchSkinItemArray:(id)arg1;
- (id)currentStyle;
- (void)setCurrentStyle:(id)arg1;
- (id)commitStyle;
- (void)setCommitStyle:(id)arg1;
- (id)giftThumbnailUrl;
- (void)setGiftThumbnailUrl:(id)arg1;
- (id)giftAnimationUrl;
- (void)setGiftAnimationUrl:(id)arg1;
- (id)giftPreviewAnimationUrl;
- (void)setGiftPreviewAnimationUrl:(id)arg1;
- (unsigned int)customFlag;
- (void)setCustomFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

