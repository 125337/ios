@interface MMFinderLiveAddNewSongTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate>
{
    id /* block */ _updatedCallback; // +0x8
    NSMutableArray * _songs; // +0x10
    MMTableView * _tableView; // +0x18
    MMFinderLiveSongItem * _editingItem; // +0x20
    MMFinderLiveSongItem * _deletingItem; // +0x28
    NSIndexPath * _indexPathToActivate; // +0x30
    NSMutableSet * _existingSongNames; // +0x38
    NSString * _targetWord; // +0x40
}
- (id)initWithTableView:(id)arg1 songs:(id)arg2;
- (void)dealloc;
- (void)clearData;
- (id)getCurrentValidSongs;
- (BOOL)canSubmitCurrentSongs;
- (void)scrollToIndex:(unsigned long long)arg1;
- (void)registerNotifications;
- (void)unregisterNotifications;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (BOOL)mmTableView:(id)arg1 shouldBeginRecognizeGesture:(id)arg2;
- (void)handleTableViewPan:(id)arg1;
- (BOOL)handleItemShouldBeginEditing:(id)arg1;
- (void)handleItemDeletingChanged:(id)arg1 deleting:(BOOL)arg2;
- (void)handleItemEndEditing:(id)arg1;
- (void)installTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)mmTableView:(id)arg1 shouldPassHitTest:(CGPoint)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 safeAreaInsetsDidChange:(UIEdgeInsets)arg2;
- (BOOL)checkAndToastSongNameDuplicated:(id)arg1;
- (void)deleteItem:(id)arg1 correspondingIndexPath:(id)arg2;
- (id)indexPathForItem:(id)arg1;
- (id)editingIndexPath;
- (void)notifySongsUpdated;
- (void)manualAddNewSong;
- (void)addNewSong;
- (id /* block */)updatedCallback;
- (void)setUpdatedCallback:(id /* block */)arg1;
- (id)songs;
- (void)setSongs:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)editingItem;
- (void)setEditingItem:(id)arg1;
- (id)deletingItem;
- (void)setDeletingItem:(id)arg1;
- (id)indexPathToActivate;
- (void)setIndexPathToActivate:(id)arg1;
- (id)existingSongNames;
- (void)setExistingSongNames:(id)arg1;
- (id)targetWord;
- (void)setTargetWord:(id)arg1;
- (void).cxx_destruct;
@end
