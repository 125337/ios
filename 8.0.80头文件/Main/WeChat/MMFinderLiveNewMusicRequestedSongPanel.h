@interface MMFinderLiveNewMusicRequestedSongPanel : MMLandscapeDragBarPageSheet <UITableViewDelegate, UITableViewDataSource, MMLiveTaskMgrExt, MMPageSheetGestureRecognizerDelegate, MMFinderLiveMusicTableViewBottomEditingDelegate, MMFinderLiveNewSongCellDelegate>
{
    BOOL _isLoading; // +0x8
    BOOL _isEditing; // +0x9
    BOOL _hasReordered; // +0xa
    BOOL _shouldHighlight; // +0xb
    MMFinderLiveKTVSongItem * _currSongItem; // +0x10
    unsigned long long _listOrder; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    id <MMFinderLiveNewMusicRequestedSongPanelDelegate> _delegate; // +0x28
    MMFinderLiveKTVSongItem * _targetSongItem; // +0x30
    NSMutableArray * _originalSongItems; // +0x38
    NSMutableArray * _songItems; // +0x40
    NSMutableSet * _selectedSongItems; // +0x48
    MMUIActivityIndicatorView * _loadingView; // +0x50
    MMUILabel * _loadingLabel; // +0x58
    UILabel * _leftTitleLabel; // +0x60
    UIView * _actionButtonContainer; // +0x68
    UIImageView * _listOrderImage; // +0x70
    UIImageView * _editImage; // +0x78
    UIImageView * _addSongImage; // +0x80
    UIButton * _confirmBtn; // +0x88
    UIView * _headerSeparator; // +0x90
    MMTableView * _songTable; // +0x98
    WCTimeLineFooterView * _footerView; // +0xa0
    UIView * _headerView; // +0xa8
    UILabel * _headerLeftLabel; // +0xb0
    UILabel * _headerRightLabel; // +0xb8
    MMFinderLiveMusicTableViewBottomEditingBar * _bottomBar; // +0xc0
    UIImageView * _emptyIconImageView; // +0xc8
    UILabel * _emptyTitleLabel; // +0xd0
    UIButton * _emptyAddBtn; // +0xd8
}
+ (id)showWithTaskId:(id)arg1 delegate:(id)arg2 currSongItem:(id)arg3 songItems:(id)arg4 listOrder:(unsigned long long)arg5 isLoading:(BOOL)arg6;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2 currSongItem:(id)arg3 songItems:(id)arg4 listOrder:(unsigned long long)arg5 isLoading:(BOOL)arg6;
- (void)registerExtensions;
- (void)setupPageSheetConfig;
- (void)updateSongItems:(id)arg1;
- (void)updateCurrSongItem:(id)arg1 reload:(BOOL)arg2;
- (void)updateTargetSongItem:(id)arg1;
- (void)onModifySongItems:(BOOL)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)onEditingEnd:(BOOL)arg1;
- (void)onTapLeftTitleLabel;
- (void)onTapListOrderImage;
- (void)onTapEditImage;
- (void)onTapAddSongImage;
- (void)onTapConfirmBtn;
- (void)setIsEditing:(BOOL)arg1;
- (void)setListOrder:(unsigned long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)onContainerPanGestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)onFinderLiveMusicDataAllSelected:(BOOL)arg1;
- (void)onFinderLiveMusicDataDelete;
- (BOOL)isInEditingMode;
- (void)onTapGift:(id)arg1;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (void)layoutSubviews;
- (void)refreshLeftTitleLabel;
- (void)refreshTitleLabel;
- (void)layoutUIOnEmpty;
- (void)layoutUIOnNormal;
- (void)layoutUI;
- (id)leftTitleLabel;
- (id)actionButtonContainer;
- (id)listOrderImage;
- (id)editImage;
- (id)addSongImage;
- (id)confirmBtn;
- (id)headerSeparator;
- (id)songTable;
- (id)footerView;
- (id)bottomBar;
- (id)headerView;
- (id)headerLeftLabel;
- (id)headerRightLabel;
- (id)emptyIconImageView;
- (id)emptyTitleLabel;
- (id)emptyAddBtn;
- (id)loadingView;
- (id)loadingLabel;
- (void)modifySongList:(BOOL)arg1;
- (id)liveTask;
- (id)selectedSongItems;
- (id)currSongItem;
- (void)setCurrSongItem:(id)arg1;
- (unsigned long long)listOrder;
- (BOOL)isLoading;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)targetSongItem;
- (void)setTargetSongItem:(id)arg1;
- (id)originalSongItems;
- (void)setOriginalSongItems:(id)arg1;
- (id)songItems;
- (void)setSongItems:(id)arg1;
- (void)setSelectedSongItems:(id)arg1;
- (BOOL)isEditing;
- (BOOL)hasReordered;
- (void)setHasReordered:(BOOL)arg1;
- (BOOL)shouldHighlight;
- (void)setShouldHighlight:(BOOL)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)setLeftTitleLabel:(id)arg1;
- (void)setActionButtonContainer:(id)arg1;
- (void)setListOrderImage:(id)arg1;
- (void)setEditImage:(id)arg1;
- (void)setAddSongImage:(id)arg1;
- (void)setConfirmBtn:(id)arg1;
- (void)setHeaderSeparator:(id)arg1;
- (void)setSongTable:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHeaderLeftLabel:(id)arg1;
- (void)setHeaderRightLabel:(id)arg1;
- (void)setBottomBar:(id)arg1;
- (void)setEmptyIconImageView:(id)arg1;
- (void)setEmptyTitleLabel:(id)arg1;
- (void)setEmptyAddBtn:(id)arg1;
- (void).cxx_destruct;
@end
