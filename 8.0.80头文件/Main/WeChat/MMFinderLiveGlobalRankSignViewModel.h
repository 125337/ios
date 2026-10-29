@interface MMFinderLiveGlobalRankSignViewModel : NSObject
{
    unsigned int _rank; // +0x8
    long long _style; // +0x10
    long long _mode; // +0x18
}
- (long long)style;
- (void)setStyle:(long long)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (unsigned int)rank;
- (void)setRank:(unsigned int)arg1;
@end
