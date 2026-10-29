@interface RingToneHistoryModel : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _isFetching; // +0x9
    unsigned int _offset; // +0xc
    NSMutableArray * _rings; // +0x10
    unsigned long long _seq; // +0x18
    NSMutableSet * _feedIDs; // +0x20
}
- (id)init;
- (id)fetch;
- (void)clear;
- (void)removeRingAtIndex:(unsigned long long)arg1;
- (void)stopAllPlay;
- (void)playWithID:(id)arg1;
- (id)rings;
- (void)setRings:(id)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (id)feedIDs;
- (void)setFeedIDs:(id)arg1;
- (void).cxx_destruct;
@end
