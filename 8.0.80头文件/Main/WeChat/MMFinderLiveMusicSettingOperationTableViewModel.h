@interface MMFinderLiveMusicSettingOperationTableViewModel : NSObject <MMFinderLiveMultiSelectTableViewCellDelegate, MMFinderLiveMusicTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, MMFinderLiveMusicTableViewBottomEditingDelegate>
{
    BOOL _isInEditingMode; // +0x8
    BOOL _hasMusicData; // +0x9
    UITableView * _tableView; // +0x10
    WCTimeLineFooterView * _footerView; // +0x18
    MMFinderLiveMusicRelatedSettingTableFooterView * _noDataFooterView; // +0x20
    NSMutableArray * _briefMusicInfosCopy; // +0x28
    NSMutableArray * _musicDataArray; // +0x30
    id <MMFinderLiveMusicSettingOperationTableDataDelegate> _dataDelegate; // +0x38
    NSMutableArray * _musicDataCopyArray; // +0x40
    NSMutableArray * _selectedMusicDataItemArray; // +0x48
    MMFinderLiveMusicDataItem * _currentPlayingMusicItem; // +0x50
    NSMutableDictionary * _playFailedMusicDataDict; // +0x58
}
- (id)initWithTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleMakeCellForMultiSelect:(id)arg1;
- (void)handleSelectCellForMultiSelect:(id)arg1;
- (BOOL)checkIsEnableToMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)makeCopyForCurrentMusicDataItemArray;
- (void)recoverMusicDataItemArray;
- (void)prepareCurrentSongIdArray;
- (void)synchronizeCurrentSongIdArray;
- (void)clearAllEditedData;
- (void)updateStateForDataSourceChanged;
- (void)updateFooterStateForDataSourceChanged;
- (void)notifyTableDataDeleteDidSelectChanged;
- (void)notifyTableAllSelectStateChanged;
- (void)updateCurrentPlayingItemBeforeDataSourceDeleted:(id)arg1;
- (id)getNextPlayMusicItemBeforeDataSourceDeleted:(id)arg1;
- (id)musicDataArray;
- (id)selectedMusicDataItemArray;
- (void)setHasMusicData:(BOOL)arg1;
- (void)setNoDataFooterView:(id)arg1;
- (id)playFailedMusicDataDict;
- (BOOL)isInMultiSelectEditingMode;
- (void)onMusicTableViewCellDidSelect:(id)arg1;
- (void)onFinderLiveMusicDataAllSelected:(BOOL)arg1;
- (void)onFinderLiveMusicDataDelete;
- (void)beginEditMode;
- (void)endEditMode:(BOOL)arg1;
- (void)appendMusicData:(id)arg1;
- (void)insertMusicData:(id)arg1 animated:(BOOL)arg2;
- (unsigned long long)musicDataCount;
- (id)getNextPlayMusicItem:(id)arg1;
- (id)getPreviousPlayMusicItem:(id)arg1;
- (void)updatePlayState:(unsigned long long)arg1 musicDataItem:(id)arg2;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)updateCurrentMusicItemInEditing:(id)arg1;
- (id)getPlayingMusicItemAfterEditing;
- (id)getCurrentMusicDataArray;
- (void)addPlayFailedMusicDataItem:(id)arg1;
- (void)clearAllPlayFailedMusicDataItem;
- (BOOL)isMusicDataItemHasFailed:(id)arg1;
- (void)scrollToMusicDataItem:(id)arg1 animated:(BOOL)arg2;
- (id)getDataItemWithSong:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)noDataFooterView;
- (BOOL)isInEditingMode;
- (void)setIsInEditingMode:(BOOL)arg1;
- (BOOL)hasMusicData;
- (id)briefMusicInfosCopy;
- (void)setBriefMusicInfosCopy:(id)arg1;
- (void)setMusicDataArray:(id)arg1;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg1;
- (id)musicDataCopyArray;
- (void)setMusicDataCopyArray:(id)arg1;
- (void)setSelectedMusicDataItemArray:(id)arg1;
- (id)currentPlayingMusicItem;
- (void)setCurrentPlayingMusicItem:(id)arg1;
- (void)setPlayFailedMusicDataDict:(id)arg1;
- (void).cxx_destruct;
@end
