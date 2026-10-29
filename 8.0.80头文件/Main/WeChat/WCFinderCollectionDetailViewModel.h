@interface WCFinderCollectionDetailViewModel : NSObject
{
    id <WCFinderCollectionDetailViewModelDelegate> _delegate; // +0x8
    NSArray * _sections; // +0x10
    WCFinderCollectionDataFetcher * _fetcher; // +0x18
    NSString * _authorUsername; // +0x20
    FinderCollectionInfo * _collectionInfo; // +0x28
    FinderCollectionErrPage * _collectionErrPage; // +0x30
    NSMutableArray * _sectionsHeight; // +0x38
    unsigned long long _fetcherStatus; // +0x40
    WCFinderDetailTimeStringConfig * _timeStringConfig; // +0x48
}
+ (id)finderCollectionInfoForShareItem:(id)arg1;
- (id)initWithShareItem:(id)arg1;
- (id)initWithCollectionInfo:(id)arg1 authorUsername:(id)arg2;
- (void)_setup;
- (void)fetchFeedList;
- (void)_didFetchData:(BOOL)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (void)_updateCollectionInfo:(id)arg1;
- (id)snapshot;
- (id)sectionHeightDimensionForIndex:(long long)arg1 layoutEnvironment:(id)arg2;
- (BOOL)isSmartCollection;
- (id)_generateNewSections;
- (id)_headerSection;
- (id)_actionSection;
- (id)_smartCollectionTipsSection;
- (id)_loadingSection;
- (id)_feedItemSection;
- (id)_footerSection;
- (id)reportParams;
- (void)setSections:(id)arg1;
- (id)timeStringConfig;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sections;
- (id)fetcher;
- (void)setFetcher:(id)arg1;
- (id)authorUsername;
- (void)setAuthorUsername:(id)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (id)collectionErrPage;
- (void)setCollectionErrPage:(id)arg1;
- (id)sectionsHeight;
- (void)setSectionsHeight:(id)arg1;
- (unsigned long long)fetcherStatus;
- (void)setFetcherStatus:(unsigned long long)arg1;
- (void)setTimeStringConfig:(id)arg1;
- (void).cxx_destruct;
@end
