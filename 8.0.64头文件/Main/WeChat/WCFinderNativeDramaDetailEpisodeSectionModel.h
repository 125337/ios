@interface WCFinderNativeDramaDetailEpisodeSectionModel : NSObject
{
    unsigned long long _nativeDramaID; // +0x8
    NSArray * _episodes; // +0x10
    unsigned long long _selectedEpisodeID; // +0x18
}
- (unsigned long long)nativeDramaID;
- (void)setNativeDramaID:(unsigned long long)arg1;
- (id)episodes;
- (void)setEpisodes:(id)arg1;
- (unsigned long long)selectedEpisodeID;
- (void)setSelectedEpisodeID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
