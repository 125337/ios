@interface WCFinderVideoProducerTemplatePlayingOperation : WCFinderVideoProducerBaseOperation
{
    BOOL _isBGMEnabled; // +0x8
    BOOL _isOSTEnabled; // +0x9
    BOOL _isLaunchMJAppClicked; // +0xa
    BOOL _isLaunchMJAppSuccessfully; // +0xb
    MJVideoTemplate * _mjVideoTemplate; // +0x10
    long long _templateOrder; // +0x18
    long long _launchMJAppRegularChoice; // +0x20
    NSMutableArray * _musicPlayingOperationList; // +0x28
    NSMutableArray * _musicSearchingOperationList; // +0x30
    NSMutableArray * _editSegmentOperationList; // +0x38
    unsigned long long _fetchExtRecommendMusicRequestID; // +0x40
    WCFinderVideoProducerMusicPlayingOperation * _currentMusicPlayingOperation; // +0x48
    WCFinderVideoProducerMusicSearchingOperation * _currentMusicSearchingOperation; // +0x50
    WCFinderVideoProducerEditSegmentOperation * _currentEditSegmentOperation; // +0x58
    OrderedDictionary * _showedMusicListMap; // +0x60
    struct _videoDuration; // +0x68
}
- (id)genReportStrForMusicSearchKey;
- (id)genReportStrForMusicSearchResultSelectCount;
- (id)initWithTemplate:(id)arg1 order:(long long)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)operationDidStart;
- (void)operationDidStop;
- (void)didSwitchBGM:(BOOL)arg1;
- (void)didSwitchOST:(BOOL)arg1;
- (void)didUpdateDuration:(struct)arg1;
- (id)getAllShowedMusicList;
- (void)didShowMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didStartPlayingSelectedMusic;
- (void)didFinishPlayingSelectedMusic;
- (void)didFetchExtRecommendMusicWithRequestID:(unsigned long long)arg1;
- (void)didStartSearchingMusic;
- (void)didFinishSearchingMusic;
- (void)didRequestSearchingWithKey:(id)arg1;
- (void)didShowSearchResultMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectSearchResultMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didStopPlayingSelectedSearchResultMusic;
- (void)didStartEditingSegmentWithTemplat:(id)arg1;
- (void)didStopEditingSegment;
- (void)didFinishEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didCancelEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didCheckJumpToMJAppRegular:(long long)arg1;
- (void)didClickLaunchMJApp;
- (void)didLaunchMJApp;
- (id)mjVideoTemplate;
- (void)setMjVideoTemplate:(id)arg1;
- (long long)templateOrder;
- (void)setTemplateOrder:(long long)arg1;
- (struct)videoDuration;
- (void)setVideoDuration:(struct)arg1;
- (BOOL)isBGMEnabled;
- (void)setIsBGMEnabled:(BOOL)arg1;
- (BOOL)isOSTEnabled;
- (void)setIsOSTEnabled:(BOOL)arg1;
- (long long)launchMJAppRegularChoice;
- (void)setLaunchMJAppRegularChoice:(long long)arg1;
- (BOOL)isLaunchMJAppClicked;
- (void)setIsLaunchMJAppClicked:(BOOL)arg1;
- (BOOL)isLaunchMJAppSuccessfully;
- (void)setIsLaunchMJAppSuccessfully:(BOOL)arg1;
- (id)musicPlayingOperationList;
- (void)setMusicPlayingOperationList:(id)arg1;
- (id)musicSearchingOperationList;
- (void)setMusicSearchingOperationList:(id)arg1;
- (id)editSegmentOperationList;
- (void)setEditSegmentOperationList:(id)arg1;
- (unsigned long long)fetchExtRecommendMusicRequestID;
- (void)setFetchExtRecommendMusicRequestID:(unsigned long long)arg1;
- (id)currentMusicPlayingOperation;
- (void)setCurrentMusicPlayingOperation:(id)arg1;
- (id)currentMusicSearchingOperation;
- (void)setCurrentMusicSearchingOperation:(id)arg1;
- (id)currentEditSegmentOperation;
- (void)setCurrentEditSegmentOperation:(id)arg1;
- (id)showedMusicListMap;
- (void)setShowedMusicListMap:(id)arg1;
- (void).cxx_destruct;
@end
