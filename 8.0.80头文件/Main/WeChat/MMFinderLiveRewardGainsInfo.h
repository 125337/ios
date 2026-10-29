@interface MMFinderLiveRewardGainsInfo : NSObject
{
    unsigned int _rewardTotalAmountInWecoin; // +0x8
    FinderLiveContact * _liveContact; // +0x10
    WCFinderContact * _refContact; // +0x18
    unsigned long long _rewardTime; // +0x20
}
+ (id)tranferToLiveRewardGainsInfo:(id)arg1;
- (id)initWithPBRewardGainsInfo:(id)arg1;
- (void)copyFromPBRewardGainsInfo:(id)arg1;
- (id)description;
- (id)liveContact;
- (void)setLiveContact:(id)arg1;
- (id)refContact;
- (void)setRefContact:(id)arg1;
- (unsigned int)rewardTotalAmountInWecoin;
- (void)setRewardTotalAmountInWecoin:(unsigned int)arg1;
- (unsigned long long)rewardTime;
- (void)setRewardTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
