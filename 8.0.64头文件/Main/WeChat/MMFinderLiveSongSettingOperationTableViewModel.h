@interface MMFinderLiveSongSettingOperationTableViewModel : NSObject <MMFinderLiveMultiSelectTableViewCellDelegate, MMFinderLiveSongManageTableViewCellDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, MMFinderLiveMusicTableViewBottomEditingDelegate>
{
    BOOL _singSongEnabled; // +0x8
    BOOL _isInLive; // +0x9
    BOOL _isAudience; // +0xa
    BOOL _isInEditingMode; // +0xb
    BOOL _hasMusicData; // +0xc
    unsigned int _indexOffset; // +0x10
    MMTableView * _tableView; // +0x18
    WCTimeLineFooterView * _footerView; // +0x20
    id <MMFinderLiveSongSettingOperationTableDataDelegate> _dataDelegate; // +0x28
    NSMutableArray * _musicDataArray; // +0x30
    NSMutableArray * _musicDataCopyArray; // +0x38
    NSMutableArray * _selectedMusicDataItemArray; // +0x40
    MMFinderLiveSongItem * _preSingingSongItem; // +0x48
    MMFinderLiveSongManageTableViewCell * _cellToReset; // +0x50
}
- (id)initWithTableView:(id)arg1;
- (void)installTableView;
- (BOOL)shouldAdaptToDarkLight;
- (void)setTableView:(id)arg1;
- (BOOL)mmTableView:(id)arg1 shouldPassHitTest:(CGPoint)arg2 withEvent:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)getCellIdentifer;
- (Class)getCellClass;
- (double)getSeparatorLeftInset;
- (double)getCellHeight;
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
- (void)updateStateForDataSourceChanged;
- (BOOL)checkIsEnableToMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)notifyTableDataDeleteDidSelectChanged;
- (void)notifyTableAllSelectStateChanged;
- (void)makeCopyForCurrentMusicDataItemArray;
- (void)recoverMusicDataItemArray;
- (void)synchronizeCurrentSongIdArray;
- (void)clearAllEditedData;
- (void)updateSingingSongItem:(id)arg1;
- (id)getSingingSongItem:(id)arg1;
- (id)musicDataArray;
- (id)selectedMusicDataItemArray;
- (void)setHasMusicData:(BOOL)arg1;
- (void)setSingSongEnabled:(BOOL)arg1;
- (BOOL)singSongEnabled;
- (BOOL)isInMultiSelectEditingMode;
- (void)onSongTableViewCellDidSelect:(id)arg1;
- (void)onSongTableViewCellDidFinishOrder:(id)arg1;
- (void)onSongTableViewCellNeedResetWhenReceiveNewTouches:(id)arg1;
- (void)onFinderLiveMusicDataAllSelected:(BOOL)arg1;
- (void)onFinderLiveMusicDataDelete;
- (void)beginEditMode;
- (void)endEditMode:(BOOL)arg1;
- (void)appendMusicData:(id)arg1;
- (void)resetMusicData:(id)arg1;
- (void)insertMusicData:(id)arg1;
- (unsigned long long)musicDataCount;
- (id)getSongItem:(id)arg1;
- (void)scrollToMusicDataItem:(id)arg1 animated:(BOOL)arg2;
- (void)checkIsSingingSongChange:(BOOL)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)tableView;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (BOOL)isInEditingMode;
- (void)setIsInEditingMode:(BOOL)arg1;
- (BOOL)hasMusicData;
- (id)dataDelegate;
- (void)setDataDelegate:(id)arg1;
- (void)setMusicDataArray:(id)arg1;
- (id)musicDataCopyArray;
- (void)setMusicDataCopyArray:(id)arg1;
- (void)setSelectedMusicDataItemArray:(id)arg1;
- (id)preSingingSongItem;
- (void)setPreSingingSongItem:(id)arg1;
- (unsigned int)indexOffset;
- (void)setIndexOffset:(unsigned int)arg1;
- (id)cellToReset;
- (void)setCellToReset:(id)arg1;
- (void).cxx_destruct;
@end
