@interface MMFinderLiveKTVRequestedSongPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, UICollectionViewDataSource, UICollectionViewDelegate, WCFinderLiveExt, MMLiveTaskMgrExt, MMFinderLiveKTVManageExt, MMFinderLiveKTVStateExt, WCLiveActionSheetDelegate, MMRefreshTableFooterDelegate, MMFinderLiveKTVSongOperationExt>
{
    BOOL _pendingSongListFetched; // +0x8
    BOOL _songSungListFetched; // +0x9
    BOOL _hasHighlighted; // +0xa
    BOOL _hasCheckedHighlight; // +0xb
    BOOL _currPauseState; // +0xc
    BOOL _isShowing; // +0xd
    BOOL _isNoContentViewReported; // +0xe
    BOOL _isPlayingSongReported; // +0xf
    MMFinderLiveTaskId * _taskId; // +0x10
    NSString * _targetSongUniqueId; // +0x18
    MMFinderLiveKTVPanelTitleView * _titleView; // +0x20
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x28
    unsigned long long _state; // +0x30
    FinderLiveKtvPlayCountInfo * _playCountInfo; // +0x38
    NSMutableArray * _boardItems; // +0x40
    MMFinderLiveKTVBoardItem * _selectedBoard; // +0x48
    UICollectionView * _boardCollectionView; // +0x50
    UIView * _tabIndicatorView; // +0x58
    MMTableView * _songTable; // +0x60
    WCTimeLineFooterView * _doneBoardHeaderView; // +0x68
    WCTimeLineFooterView * _footerView; // +0x70
    UIView * _emptyContentView; // +0x78
    MMWebImageView * _microphoneLabel; // +0x80
    MMUILabel * _noSongLabel; // +0x88
    MMUILabel * _requestSongLabel; // +0x90
    MMFinderLiveKTVSongItem * _playingSongItem; // +0x98
    UIView * _playingContainerView; // +0xa0
    MMUILabel * _playingLabel; // +0xa8
    UIView * _playingSongContainerView; // +0xb0
    MMWebImageView * _coverImageView; // +0xb8
    MMUILabel * _musicNameLabel; // +0xc0
    MMUILabel * _segmentLabel; // +0xc8
    MMUILabel * _musicAnchorLabel; // +0xd0
    MMUILabel * _durationLabel; // +0xd8
    WCFinderHeadImageView * _avatorImageView; // +0xe0
    MMUILabel * _musicSingerLabel; // +0xe8
    MMUIButton * _operationButton; // +0xf0
    MMUIButton * _endPlayButton; // +0xf8
    PAGView * _singingAniView; // +0x100
    CAGradientLayer * _gradientLayer; // +0x108
    long long _currSongOperateAuthorityOptions; // +0x110
    unsigned long long _anchorReportTab; // +0x118
    unsigned long long _audienceReportTab; // +0x120
    NSMutableSet * _reportedSongUniqueIdSet; // +0x128
}
+ (id)showWithTaskId:(id)arg1;
+ (id)showWithTaskId:(id)arg1 highlightSongUniqueId:(id)arg2;
- (id)initWithTaskId:(id)arg1 targetSongUniqueId:(id)arg2;
- (void)setupPageSheetConfig;
- (id)leftNavButton;
- (void)switchToRequestPanel;
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
- (void)onClickedCut;
- (void)onClickedOperationBtn:(id)arg1;
- (void)updateBoardFooter;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)updateBoardHeader;
- (void)checkAndScrollToTargetSongItem;
- (BOOL)checkTargetCellInBoardItem:(id)arg1;
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
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (void)onKtvSongListChangeNotification:(id)arg1 fromUser:(id)arg2 taskId:(id)arg3;
- (void)onLiveKTVPendingSongItemsUpdate:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseChanged:(BOOL)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseActionStateUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 chorusSingAsMinorChanged:(BOOL)arg3;
- (id)liveTask;
- (id)reportedSongUniqueIdSet;
- (void)checkAndReportCellExpose:(id)arg1;
- (id)anchorReporter;
- (id)boardItems;
- (id)waitBoard;
- (id)doneBoard;
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
- (void)getFinishedSongList:(id)arg1 onlyMySong:(BOOL)arg2 isContinue:(BOOL)arg3 isPrevious:(BOOL)arg4 targetSongUniqueId:(id)arg5;
- (void)modSongList:(int)arg1 withSongItem:(id)arg2;
- (void)endSong:(id)arg1;
- (BOOL)changeCurrSongPauseState:(BOOL)arg1 songItem:(id)arg2;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)pendingSongListFetched;
- (void)setPendingSongListFetched:(BOOL)arg1;
- (BOOL)songSungListFetched;
- (void)setSongSungListFetched:(BOOL)arg1;
- (BOOL)hasHighlighted;
- (void)setHasHighlighted:(BOOL)arg1;
- (BOOL)hasCheckedHighlight;
- (void)setHasCheckedHighlight:(BOOL)arg1;
- (id)targetSongUniqueId;
- (void)setTargetSongUniqueId:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
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
- (id)doneBoardHeaderView;
- (void)setDoneBoardHeaderView:(id)arg1;
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
- (id)segmentLabel;
- (void)setSegmentLabel:(id)arg1;
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
