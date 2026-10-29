@interface WCFinderBoxCovTimeInfo : NSObject
{
    BOOL _useIndependentSortTime; // +0x8
    unsigned int _type; // +0xc
    unsigned int _time; // +0x10
    unsigned int _sortTime; // +0x14
}
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)time;
- (void)setTime:(unsigned int)arg1;
- (unsigned int)sortTime;
- (void)setSortTime:(unsigned int)arg1;
- (BOOL)useIndependentSortTime;
- (void)setUseIndependentSortTime:(BOOL)arg1;
@end
