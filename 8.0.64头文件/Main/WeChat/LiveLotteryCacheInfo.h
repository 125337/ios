@interface LiveLotteryCacheInfo : NSObject <PBCoding>
{
    unsigned int _liveStartTime; // +0x8
    NSString * _lotteryId; // +0x10
}
+ (void)PBArrayAdd_lotteryId;
+ (void)PBArrayAdd_liveStartTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (unsigned int)liveStartTime;
- (void)setLiveStartTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
