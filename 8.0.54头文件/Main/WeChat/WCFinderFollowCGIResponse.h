@interface WCFinderFollowCGIResponse : NSObject
{
    BOOL _attendLottery; // +0x8
    unsigned int _statusFlag; // +0xc
}
- (id)init;
- (BOOL)attendLottery;
- (void)setAttendLottery:(BOOL)arg1;
- (unsigned int)statusFlag;
- (void)setStatusFlag:(unsigned int)arg1;
@end

