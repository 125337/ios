@interface MMFinderLiveRecommendUserSendGiftInfo : NSObject
{
    unsigned long long _seq; // +0x8
    MMFinderLiveRewardGiftItem * _giftItem; // +0x10
    NSString * _wording; // +0x18
}
- (id)initWithRecommendUserSendGiftInfoResp:(id)arg1;
- (void)copyFromRecommendUserSendGiftInfoResp:(id)arg1;
- (id)description;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end

