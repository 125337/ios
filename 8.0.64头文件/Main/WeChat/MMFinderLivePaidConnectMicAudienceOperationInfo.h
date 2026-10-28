@interface MMFinderLivePaidConnectMicAudienceOperationInfo : NSObject
{
    BOOL _bidEnabled; // +0x8
    NSArray * _userList; // +0x10
    unsigned long long _minBidAmount; // +0x18
    unsigned long long _waitingCount; // +0x20
    unsigned long long _bidGap; // +0x28
}
- (id)userList;
- (void)setUserList:(id)arg1;
- (BOOL)bidEnabled;
- (void)setBidEnabled:(BOOL)arg1;
- (unsigned long long)minBidAmount;
- (void)setMinBidAmount:(unsigned long long)arg1;
- (unsigned long long)waitingCount;
- (void)setWaitingCount:(unsigned long long)arg1;
- (unsigned long long)bidGap;
- (void)setBidGap:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
