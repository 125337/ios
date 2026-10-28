@interface MMFinderLiveLikePostResult : NSObject
{
    BOOL _isAttendLottery; // +0x8
    unsigned int _nextReqInterval; // +0xc
    unsigned int _statusFlag; // +0x10
}
- (BOOL)isAttendLottery;
- (void)setIsAttendLottery:(BOOL)arg1;
- (unsigned int)nextReqInterval;
- (void)setNextReqInterval:(unsigned int)arg1;
- (unsigned int)statusFlag;
- (void)setStatusFlag:(unsigned int)arg1;
@end
