@interface WCFinderLiveFeedVMSearchComponentExtra : NSObject
{
    unsigned long long _hasFetchingSearchComponentTimes; // +0x8
    FinderJumpInfo * _searchComponentInfo; // +0x10
    double _timeInterval; // +0x18
}
- (unsigned long long)hasFetchingSearchComponentTimes;
- (void)setHasFetchingSearchComponentTimes:(unsigned long long)arg1;
- (id)searchComponentInfo;
- (void)setSearchComponentInfo:(id)arg1;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (void).cxx_destruct;
@end
