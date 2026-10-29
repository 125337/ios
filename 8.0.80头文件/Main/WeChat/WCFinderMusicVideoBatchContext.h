@interface WCFinderMusicVideoBatchContext : NSObject
{
    NSArray * _candidates; // +0x8
    NSMutableOrderedSet * _acceptedIdentifiers; // +0x10
    unsigned long long _batchSize; // +0x18
    unsigned long long _displayCount; // +0x20
    unsigned long long _batchIndex; // +0x28
    unsigned long long _sentCount; // +0x30
    double _startTime; // +0x38
    unsigned long long _nextIndex; // +0x40
    NSArray * _preparedItems; // +0x48
    unsigned long long _state; // +0x50
}
- (id)candidates;
- (void)setCandidates:(id)arg1;
- (id)acceptedIdentifiers;
- (void)setAcceptedIdentifiers:(id)arg1;
- (unsigned long long)batchSize;
- (void)setBatchSize:(unsigned long long)arg1;
- (unsigned long long)displayCount;
- (void)setDisplayCount:(unsigned long long)arg1;
- (unsigned long long)batchIndex;
- (void)setBatchIndex:(unsigned long long)arg1;
- (unsigned long long)sentCount;
- (void)setSentCount:(unsigned long long)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (unsigned long long)nextIndex;
- (void)setNextIndex:(unsigned long long)arg1;
- (id)preparedItems;
- (void)setPreparedItems:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
