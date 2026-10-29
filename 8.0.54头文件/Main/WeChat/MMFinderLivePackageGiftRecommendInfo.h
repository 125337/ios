@interface MMFinderLivePackageGiftRecommendInfo : NSObject
{
    unsigned long long _recommendType; // +0x8
    unsigned long long _seq; // +0x10
    MMFinderLiveRewardGiftItem * _giftItem; // +0x18
    NSString * _wording; // +0x20
    NSArray * _batchList; // +0x28
}
- (id)initWithPackageGiftRecommendInfoResp:(id)arg1;
- (void)copyFromPackageGiftRecommendInfoResp:(id)arg1;
- (id)description;
- (unsigned long long)recommendType;
- (void)setRecommendType:(unsigned long long)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)batchList;
- (void)setBatchList:(id)arg1;
- (void).cxx_destruct;
@end

