@interface WCFinderNativeDramaDetailRangeSectionModel : NSObject
{
    NSArray * _ranges; // +0x8
    NativeDramaEpisodeRanges * _selectedRange; // +0x10
    unsigned long long _selectedEpisodeID; // +0x18
    unsigned long long _nativeDramaID; // +0x20
}
- (id)ranges;
- (void)setRanges:(id)arg1;
- (id)selectedRange;
- (void)setSelectedRange:(id)arg1;
- (unsigned long long)selectedEpisodeID;
- (void)setSelectedEpisodeID:(unsigned long long)arg1;
- (unsigned long long)nativeDramaID;
- (void)setNativeDramaID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
