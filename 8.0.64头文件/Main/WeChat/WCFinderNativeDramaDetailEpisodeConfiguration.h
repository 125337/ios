@interface WCFinderNativeDramaDetailEpisodeConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewReportableItem>
{
    BOOL _selected; // +0x8
    unsigned long long _identifier; // +0x10
    long long _episodeIndex; // +0x18
    unsigned long long _status; // +0x20
    unsigned long long _nativeDramaID; // +0x28
    unsigned long long _selectedEpisodeID; // +0x30
}
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)viewID;
- (id)params;
- (unsigned long long)reportPolicy;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (long long)episodeIndex;
- (void)setEpisodeIndex:(long long)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (unsigned long long)nativeDramaID;
- (void)setNativeDramaID:(unsigned long long)arg1;
- (unsigned long long)selectedEpisodeID;
- (void)setSelectedEpisodeID:(unsigned long long)arg1;
@end
