@interface MMFinderLiveLotteryCreateInfo : NSObject
{
    unsigned int _lotteryDuration; // +0x8
    unsigned int _lotteryWinnerCnt; // +0xc
    unsigned int _methodId; // +0x10
    unsigned int _wecoinCountToPay; // +0x14
    MMFinderLiveTaskId * _liveTaskId; // +0x18
    NSString * _lotteryDescription; // +0x20
    FinderLiveLotteryAttendMethod * _method; // +0x28
    FinderLiveLotteryClaimMethod * _claimMethod; // +0x30
    FinderLiveLotteryPrizeMethod * _prizeMethod; // +0x38
    unsigned long long _settingFlag; // +0x40
}
+ (id)CreateWithLiveTaskId:(id)arg1 lotteryMethodItem:(id)arg2;
- (id)initWithLiveTaskId:(id)arg1;
- (id)prizeMethod;
- (id)genLotteryMethodItem;
- (id)description;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (unsigned int)lotteryDuration;
- (void)setLotteryDuration:(unsigned int)arg1;
- (id)lotteryDescription;
- (void)setLotteryDescription:(id)arg1;
- (unsigned int)lotteryWinnerCnt;
- (void)setLotteryWinnerCnt:(unsigned int)arg1;
- (id)method;
- (void)setMethod:(id)arg1;
- (id)claimMethod;
- (void)setClaimMethod:(id)arg1;
- (void)setPrizeMethod:(id)arg1;
- (unsigned long long)settingFlag;
- (void)setSettingFlag:(unsigned long long)arg1;
- (unsigned int)methodId;
- (void)setMethodId:(unsigned int)arg1;
- (unsigned int)wecoinCountToPay;
- (void)setWecoinCountToPay:(unsigned int)arg1;
- (void).cxx_destruct;
@end

