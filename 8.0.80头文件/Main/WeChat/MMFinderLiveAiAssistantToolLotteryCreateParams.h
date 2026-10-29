@interface MMFinderLiveAiAssistantToolLotteryCreateParams : MMFinderLiveAiAssistantToolParams
{
    NSNumber * _prizeType; // +0x8
    NSNumber * _winnerCount; // +0x10
    NSNumber * _durationMinutes; // +0x18
    NSNumber * _attendType; // +0x20
    NSString * _attendComment; // +0x28
    NSNumber * _allowRepeatWin; // +0x30
    NSString * _lotteryDescription; // +0x38
    NSNumber * _claimType; // +0x40
    NSString * _claimRemindWording; // +0x48
    NSNumber * _giftDistributeType; // +0x50
    NSArray * _giftItems; // +0x58
}
+ (id)fieldOptions;
- (id)prizeType;
- (void)setPrizeType:(id)arg1;
- (id)winnerCount;
- (void)setWinnerCount:(id)arg1;
- (id)durationMinutes;
- (void)setDurationMinutes:(id)arg1;
- (id)attendType;
- (void)setAttendType:(id)arg1;
- (id)attendComment;
- (void)setAttendComment:(id)arg1;
- (id)allowRepeatWin;
- (void)setAllowRepeatWin:(id)arg1;
- (id)lotteryDescription;
- (void)setLotteryDescription:(id)arg1;
- (id)claimType;
- (void)setClaimType:(id)arg1;
- (id)claimRemindWording;
- (void)setClaimRemindWording:(id)arg1;
- (id)giftDistributeType;
- (void)setGiftDistributeType:(id)arg1;
- (id)giftItems;
- (void)setGiftItems:(id)arg1;
- (void).cxx_destruct;
@end
