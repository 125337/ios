@interface MMFinderLiveKTVRequestedSongPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, UICollectionViewDataSource, UICollectionViewDelegate, WCFinderLiveExt, MMLiveTaskMgrExt, MMFinderLiveKTVManageExt, MMFinderLiveKTVStateExt, WCLiveActionSheetDelegate, MMRefreshTableFooterDelegate, MMFinderLiveKTVSongOperationExt>
{
    BOOL _currPauseState; // +0x8
    BOOL _isShowing; // +0x9
    BOOL _isNoContentViewReported; // +0xa
    BOOL _isPlayingSongReported; // +0xb
    MMFinderLiveTaskId * _taskId; // +0x10
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x18
    unsigned long long _state; // +0x20
    FinderLiveKtvPlayCountInfo * _playCountInfo; // +0x28
    NSMutableArray * _boardItems; // +0x30
    MMFinderLiveKTVBoardItem * _selectedBoard; // +0x38
    UICollectionView * _boardCollectionView; // +0x40
    UIView * _tabIndicatorView; // +0x48
    MMTableView * _songTable; // +0x50
    WCTimeLineFooterView * _footerView; // +0x58
    UIView * _emptyContentView; // +0x60
    MMWebImageView * _microphoneLabel; // +0x68
    MMUILabel * _noSongLabel; // +0x70
    MMUILabel * _requestSongLabel; // +0x78
    MMFinderLiveKTVSongItem * _playingSongItem; // +0x80
    UIView * _playingContainerView; // +0x88
    MMUILabel * _playingLabel; // +0x90
    UIView * _playingSongContainerView; // +0x98
    MMWebImageView * _coverImageView; // +0xa0
    MMUILabel * _musicNameLabel; // +0xa8
    MMUILabel * _musicAnchorLabel; // +0xb0
    MMUILabel * _durationLabel; // +0xb8
    WCFinderHeadImageView * _avatorImageView; // +0xc0
    MMUILabel * _musicSingerLabel; // +0xc8
    MMUIButton * _operationButton; // +0xd0
    MMUIButton * _endPlayButton; // +0xd8
    PAGView * _singingAniView; // +0xe0
    CAGradientLayer * _gradientLayer; // +0xe8
    long long _currSongOperateAuthorityOptions; // +0xf0
    unsigned long long _anchorReportTab; // +0xf8
    unsigned long long _audienceReportTab; // +0x100
    NSMutableSet * _reportedSongUniqueIdSet; // +0x108
}
+ (id)showWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)setupPageSheetConfig;
- (id)leftNavButton;
- (id)rightNavButton;
- (void)initSubviews;
- (void)initEmptyContentView;
- (void)initPlayingSongView;
- (void)initMainView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPlayingSongView;
- (void)layoutMainContentView;
- (void)layoutNoContentView;
- (unsigned long long)anchorReportTab;
- (unsigned long long)audienceReportTab;
- (void)setState:(unsigned long long)arg1;
- (void)refreshPlayingData:(id)arg1;
- (void)updateCurrSongOperateAuthority;
- (void)refreshUIForCurrSongOperateAuthority;
- (void)changeOperationBtnPauseState:(BOOL)arg1;
- (void)refreshOperationBtnPauseState;
- (void)updateCurrPauseState:(BOOL)arg1;
- (BOOL)getCurrPauseState;
- (void)refreshPauseBtnEnabled;
- (void)onLeftButtonTapped;
- (void)onRequestPanelTapped;
- (void)onRightButtonTapped;
- (void)onClickedCut;
- (void)onClickedOperationBtn:(id)arg1;
- (void)updateBoardFooter;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLiveKTVSongOperationNotifyStartSingCurrentSong;
- (void)onLiveKTVSongOperationRequestSongBlockedAndDismissPanel;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (void)onKtvSongListChangeNotification:(id)arg1 fromUser:(id)arg2 taskId:(id)arg3;
- (void)onLiveKTVPendingSongItemsUpdate:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseChanged:(BOOL)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 songItemUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseActionStateUpdated:(id)arg3;
- (id)liveTask;
- (id)reportedSongUniqueIdSet;
- (void)checkAndReportCellExpose:(id)arg1;
- (id)anchorReporter;
- (id)boardItems;
- (id)myWaitSubBoard;
- (id)myDoneSubBoard;
- (id)parseDuration:(int)arg1;
- (BOOL)onSelfMode;
- (void)initData;
- (void)updateBoardIfNeeded:(id)arg1;
- (unsigned int)getBoardSongListSize:(id)arg1;
- (id)getBoardName:(id)arg1 count:(unsigned int)arg2;
- (void)getSongList:(int)arg1 boardItem:(id)arg2 onlyMySong:(BOOL)arg3;
- (void)getFinishedSongList:(id)arg1 onlyMySong:(BOOL)arg2 isContinue:(BOOL)arg3;
- (void)modSongList:(int)arg1 withSongItem:(id)arg2;
- (void)endSong:(id)arg1;
- (BOOL)changeCurrSongPauseState:(BOOL)arg1 songItem:(id)arg2;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setAnchorReporter:(id)arg1;
- (unsigned long long)state;
- (id)playCountInfo;
- (void)setPlayCountInfo:(id)arg1;
- (void)setBoardItems:(id)arg1;
- (id)selectedBoard;
- (void)setSelectedBoard:(id)arg1;
- (id)boardCollectionView;
- (void)setBoardCollectionView:(id)arg1;
- (id)tabIndicatorView;
- (void)setTabIndicatorView:(id)arg1;
- (id)songTable;
- (void)setSongTable:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)emptyContentView;
- (void)setEmptyContentView:(id)arg1;
- (id)microphoneLabel;
- (void)setMicrophoneLabel:(id)arg1;
- (id)noSongLabel;
- (void)setNoSongLabel:(id)arg1;
- (id)requestSongLabel;
- (void)setRequestSongLabel:(id)arg1;
- (id)playingSongItem;
- (void)setPlayingSongItem:(id)arg1;
- (id)playingContainerView;
- (void)setPlayingContainerView:(id)arg1;
- (id)playingLabel;
- (void)setPlayingLabel:(id)arg1;
- (id)playingSongContainerView;
- (void)setPlayingSongContainerView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)musicNameLabel;
- (void)setMusicNameLabel:(id)arg1;
- (id)musicAnchorLabel;
- (void)setMusicAnchorLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)avatorImageView;
- (void)setAvatorImageView:(id)arg1;
- (id)musicSingerLabel;
- (void)setMusicSingerLabel:(id)arg1;
- (id)operationButton;
- (void)setOperationButton:(id)arg1;
- (id)endPlayButton;
- (void)setEndPlayButton:(id)arg1;
- (id)singingAniView;
- (void)setSingingAniView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (long long)currSongOperateAuthorityOptions;
- (void)setCurrSongOperateAuthorityOptions:(long long)arg1;
- (BOOL)currPauseState;
- (void)setCurrPauseState:(BOOL)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (void)setAnchorReportTab:(unsigned long long)arg1;
- (void)setAudienceReportTab:(unsigned long long)arg1;
- (BOOL)isNoContentViewReported;
- (void)setIsNoContentViewReported:(BOOL)arg1;
- (BOOL)isPlayingSongReported;
- (void)setIsPlayingSongReported:(BOOL)arg1;
- (void)setReportedSongUniqueIdSet:(id)arg1;
- (void).cxx_destruct;
@end

