@interface EmotionRewardResponseInfo : NSObject <PBCoding>
{
    BOOL _hasAllInfo; // +0x8
    unsigned int _donorNum; // +0xc
    NSArray * _prices; // +0x10
    NSArray * _donors; // +0x18
    EmotionReward * _reward; // +0x20
}
+ (void)PBArrayAdd_prices;
+ (void)PBArrayAdd_donorNum;
+ (void)PBArrayAdd_donors;
+ (void)PBArrayAdd_reward;
+ (void)PBArrayAdd_hasAllInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)prices;
- (void)setPrices:(id)arg1;
- (unsigned int)donorNum;
- (void)setDonorNum:(unsigned int)arg1;
- (id)donors;
- (void)setDonors:(id)arg1;
- (id)reward;
- (void)setReward:(id)arg1;
- (BOOL)hasAllInfo;
- (void)setHasAllInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end

