@interface MMFinderLiveMilestoneLotteryInfo : NSObject
{
    unsigned int _beginTime; // +0x8
    NSString * _prizeWording; // +0x10
    NSString * _attendWording; // +0x18
    NSString * _lotteryId; // +0x20
}
- (id)initWithLotteryInfo:(id)arg1;
- (id)description;
- (id)prizeWording;
- (void)setPrizeWording:(id)arg1;
- (id)attendWording;
- (void)setAttendWording:(id)arg1;
- (unsigned int)beginTime;
- (void)setBeginTime:(unsigned int)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (void).cxx_destruct;
@end

