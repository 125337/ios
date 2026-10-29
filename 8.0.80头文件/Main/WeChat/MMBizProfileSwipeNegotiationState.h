@interface MMBizProfileSwipeNegotiationState : NSObject
{
    BOOL _clientShouldTakeOver; // +0x8
    long long _currentTouchSeq; // +0x10
}
- (long long)currentTouchSeq;
- (void)setCurrentTouchSeq:(long long)arg1;
- (BOOL)clientShouldTakeOver;
- (void)setClientShouldTakeOver:(BOOL)arg1;
@end
