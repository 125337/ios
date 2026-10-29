@interface WCFinderNativeDramaDetailRangeConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewReportableItem>
{
    BOOL _selected; // +0x8
    NativeDramaEpisodeRanges * _range; // +0x10
    NSString * _rangeText; // +0x18
    unsigned long long _selectedEpisodeID; // +0x20
    unsigned long long _nativeDramaID; // +0x28
}
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)viewID;
- (id)params;
- (unsigned long long)reportPolicy;
- (id)range;
- (void)setRange:(id)arg1;
- (id)rangeText;
- (void)setRangeText:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (unsigned long long)selectedEpisodeID;
- (void)setSelectedEpisodeID:(unsigned long long)arg1;
- (unsigned long long)nativeDramaID;
- (void)setNativeDramaID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
