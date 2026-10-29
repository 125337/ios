@interface MMFinderLiveRecordListLotteryInfo : NSObject
{
    unsigned int _type; // +0x8
    MMFinderLiveMilestoneLotteryInfo * _milestoneLotteryInfo; // +0x10
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x18
}
- (id)initWithLotteryInfo:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)milestoneLotteryInfo;
- (void)setMilestoneLotteryInfo:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (void).cxx_destruct;
@end

