@interface MMFinderLiveConnectMicPkTeam : NSObject <NSCopying>
{
    NSMutableArray * _users; // +0x8
    long long _pkResult; // +0x10
    unsigned long long _rank; // +0x18
    unsigned long long _genericScore; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEmptyTeam;
- (id)users;
- (void)setUsers:(id)arg1;
- (long long)pkResult;
- (void)setPkResult:(long long)arg1;
- (unsigned long long)rank;
- (void)setRank:(unsigned long long)arg1;
- (unsigned long long)genericScore;
- (void)setGenericScore:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

