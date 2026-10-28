@interface MMFinderLiveKTVEndSingingSessionInfo : NSObject
{
    BOOL _isWaitingResult; // +0x8
    NSString * _songUniqueId; // +0x10
    unsigned long long _tryCloseCount; // +0x18
}
- (id)songUniqueId;
- (void)setSongUniqueId:(id)arg1;
- (BOOL)isWaitingResult;
- (void)setIsWaitingResult:(BOOL)arg1;
- (unsigned long long)tryCloseCount;
- (void)setTryCloseCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
