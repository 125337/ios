@interface WCFinderNativeDramaHalfScreenViewModel : NSObject
{
    BOOL _isFetching; // +0x8
    WCFinderNativeDramaHalfScreenViewControllerParams * _params; // +0x10
    id <WCFinderNativeDramaHalfScreenViewModelDelegate> _delegate; // +0x18
    NSDiffableDataSourceSnapshot * _snapshot; // +0x20
    unsigned long long _selectedEpisodeID; // +0x28
    NSArray * _episodeRangeList; // +0x30
    NativeDramaEpisodeRanges * _selectedRange; // +0x38
    WCFinderNativeDramaDetailCGI * _detailCGI; // +0x40
    NSString * _errorTips; // +0x48
}
- (id)initWithParams:(id)arg1;
- (void)setup;
- (void)_updateSection;
- (id)_headerSection;
- (id)_rangeSection;
- (id)_episodeSection;
- (id)_loadingSection;
- (void)updateWithParams:(id)arg1;
- (void)switchToRange:(id)arg1;
- (void)_fetchItems;
- (id)dramaInfo;
- (id)params;
- (void)setParams:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (unsigned long long)selectedEpisodeID;
- (void)setSelectedEpisodeID:(unsigned long long)arg1;
- (id)episodeRangeList;
- (void)setEpisodeRangeList:(id)arg1;
- (id)selectedRange;
- (void)setSelectedRange:(id)arg1;
- (id)detailCGI;
- (void)setDetailCGI:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id)errorTips;
- (void)setErrorTips:(id)arg1;
- (void).cxx_destruct;
@end
