@interface MMFinderLiveFeedPIPContext : NSObject
{
    BOOL _isLivePausedForClosePIP; // +0x8
    BOOL _isLivePausedByPIP; // +0x9
}
- (BOOL)isPIPPauseLive;
- (void)clear;
- (id)description;
- (void)setIsLivePausedByPIP:(BOOL)arg1;
- (void)setIsLivePausedForClosePIP:(BOOL)arg1;
- (BOOL)isLivePausedForClosePIP;
- (BOOL)isLivePausedByPIP;
@end
