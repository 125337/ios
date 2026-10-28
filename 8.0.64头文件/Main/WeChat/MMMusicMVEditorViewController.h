@interface MMMusicMVEditorViewController : MMUIViewController <MMMusicLyricsRtnExt, UICollectionViewDataSource, UICollectionViewDelegate, IMusicMVPostDataServiceExt, IMusicPlayerExt, IMMMusicLyricServiceExt, MMMusicPostVideoDelegate, MMMusicPostVideoVCDataSource, MMMusicEditVideoCellViewDelegate, MMMusicMVEditorCardCellDelegate, MMMusicLiveCGIMgrDelegate, MMMusicEditorModeViewDelegate, MMMusicNoDotSelectItemDisplayViewDataSource, MMMusicNoDotSelectItemDisplayViewDelegate, MMImagePreviewBrowserControllerDelegate>
{
    BOOL _seekSpecifyTimeFlag; // +0x70
    BOOL _isEditVideoMode; // +0x71
    BOOL _markedVideoOffsetDirty; // +0x72
    BOOL _isFirstAppear; // +0x73
    BOOL _isInFlexClipMode; // +0x74
    id <MMMusicMVEditorViewControllerDelegate> _delegate; // +0x78
    unsigned long long _currentIndex; // +0x80
    NSString * _songId; // +0x88
    MMMusicMVEditorCollectionView * _collectionView; // +0x90
    MMUIButton * _cancelButton; // +0x98
    MMUIButton * _doneButton; // +0xa0
    MMMusicEditorModeView * _changeModeView; // +0xa8
    MMMusicLiveLyricDisplayView * _lyricView; // +0xb0
    MMTimer * _musicMonitorTimer; // +0xb8
    UIView * _videoTransitionMask; // +0xc0
    MMMusicPostVideoViewController * _videoSourceViewController; // +0xc8
    MMMusicEditVideoCellView * _editVideoCellView; // +0xd0
    MMMusicMVEditorCardCell * _lastPlayingCardCell; // +0xd8
    MMMusicMVModel * _mvModel; // +0xe0
    MMMusicLiveCGIMgr * _cgiMgr; // +0xe8
    MMMusicPostVideoAnimHelper * _postAnimhelper; // +0xf0
    unsigned long long _fromScene; // +0xf8
    NSString * _mvClipFillStatus; // +0x100
    NSMutableSet * _userInteractionSubviewSet; // +0x108
    NSMutableArray * _clipRecords; // +0x110
    MMMusicNoDotSelectItemDisplayView * _selectItemDisplayView; // +0x118
    NSMutableArray * _selectItemViewModelArr; // +0x120
    id <MMImagePreviewBrowserControllerDataSource> _imagePreviewDataSource; // +0x128
    MVImagePreviewControlCenter * _previewControlCenter; // +0x130
    MMImagePreviewBrowserController * _currentImagePreviewViewController; // +0x138
    NSMutableDictionary * _imagePreviewDataSourceMap; // +0x140
}
- (id)initWithMVModel:(id)arg1 fromScene:(unsigned long long)arg2;
- (void)dealloc;
- (id)draftFinderDataItemForTid:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupSubviews;
- (void)initEditVideoCellView;
- (void)resetEditVideoCellView;
- (void)handleTap:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupMusicMonitorTimer;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)didReceiveAppWillEnterForeground:(id)arg1;
- (void)onTabFinderSearch:(id)arg1;
- (void)onSelectFinderVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVC:(CGRect)arg3;
- (void)flex_onSelectFinderVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVC:(CGRect)arg3;
- (void)addSelectedModel:(id)arg1;
- (void)removeSelectedModel:(id)arg1;
- (void)fix_onSelectFinderVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVC:(CGRect)arg3;
- (void)onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVC:(CGRect)arg3;
- (void)flex_onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVC:(CGRect)arg3;
- (void)fix_onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVC:(CGRect)arg3;
- (void)onPostVideoShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)flex_onPostVideoShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)fix_onPostVideoShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)onPostVideoTabAlbumAssetsChanged:(id)arg1;
- (void)postVideoViewControllerModeChange:(id)arg1 fromMode:(unsigned long long)arg2 toMode:(unsigned long long)arg3;
- (void)postVideoViewController:(id)arg1 onLocalVideoAssetSelectedBtnChecked:(id)arg2;
- (void)addToPreviewSourceMapWithId:(id)arg1 source:(id)arg2;
- (void)postVideoViewController:(id)arg1 onFinderVideoSelectedBtnChecked:(id)arg2;
- (void)openPreviewWithSelectedModel:(id)arg1 index:(long long)arg2;
- (id)generateDefaultPreviewDataSourceForModel:(id)arg1;
- (BOOL)imagePreviewBrowserController:(id)arg1 shouldContinueSelectButtonWithAssetInfo:(id)arg2 isCurrentSelected:(BOOL)arg3;
- (void)onRemoveSelectedInfo:(id)arg1;
- (void)reloadPreviewDataSourceSelectedItems;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onMoveSelectedInfo:(id)arg1 toIndex:(unsigned long long)arg2;
- (long long)indexInSelectedAssetInfosForAssetInfo:(id)arg1;
- (unsigned long long)selectedAssetInfosCount;
- (void)sendImageFromScene:(long long)arg1;
- (CGRect)assetViewFrameGlobal:(id)arg1;
- (BOOL)canSelectAssetInPreview:(id)arg1;
- (BOOL)isSendButtonEnable;
- (void)imagePreviewBrowserController:(id)arg1 onAssetCollectionViewSelected:(id)arg2;
- (id)getSelectedArr;
- (void)setupCreateMVState;
- (void)revertPostForTrack:(id)arg1;
- (void)clickCropButton:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)refreshFixModeVisibleItemsPlayState;
- (void)updateVideoViewLayer:(id)arg1 isCurrentIndex:(BOOL)arg2;
- (void)updateVideoPlayingCell:(id)arg1;
- (void)reloadData;
- (void)updateCurrentIndexAndPlayTime:(unsigned long long)arg1;
- (void)scrollEpisodeToIndex:(unsigned long long)arg1;
- (void)setupLyricForCellIfNeeded:(id)arg1;
- (BOOL)isMusicMVEditorCardCellInUse:(id)arg1;
- (void)onLyricService:(id)arg1 curentLyricChangeTo:(id)arg2 timeToNext:(double)arg3 currIndex:(unsigned int)arg4;
- (void)onMusicPlayStatusChanged;
- (id)trackItems;
- (BOOL)shouldPlayVideo;
- (void)pauseCurrentCollectionVideo;
- (void)pauseCurrentEditVideo;
- (double)currentVideoOffset;
- (void)resumeCurrentCollectionVideo;
- (void)resumeCurrentEditVideo;
- (void)checkVideoStatus;
- (void)updateMusicPlayProressInFixMode;
- (id)cgiMgr;
- (void)onClickCancelBtn;
- (void)onClickDoneBtn;
- (void)setSubviewUserInteraction;
- (void)resetSubviewUserInteraction;
- (id)userInterationSubviewSet;
- (void)updateMvClipFillStatus;
- (void)stopMusicAndRemoveMinimizedTaskWhenExit;
- (void)onPostPublishLogicClickPost;
- (void)onPostPublishLogicFinishedSavingAsDraft:(id)arg1 createdFinder:(BOOL)arg2;
- (void)onPostPublishLogicFinishedPosting:(id)arg1 createdFinder:(BOOL)arg2;
- (void)onPostPublishLogicFinishedCancelPublishing;
- (void)onMusicLiveGetSongStatusWithIsSuccess:(BOOL)arg1 resp:(id)arg2;
- (void)onMMMusicEditVideoCellViewCancel:(id)arg1 extInfo:(id)arg2;
- (void)onMMMusicEditVideoCellViewFinish:(id)arg1;
- (void)mmMusicEditorModeViewDidClick:(id)arg1 mode:(unsigned long long)arg2;
- (id)clipRecords;
- (id)selectItemViewModelArr;
- (id)selectItemDisplayView;
- (void)updateVideoSourceData;
- (void)updateVideoSourceDataWhenTabAlbumChanged;
- (BOOL)canAddMoreItemInFlexModeAndShowTipsIfNeedWithUniqueId:(id)arg1;
- (void)getSelectItemViewModelArrImgCount:(unsigned int *)arg1 andVideoCount:(unsigned int *)arg2;
- (id)getSelectItemViewModelArr;
- (void)updateViewModelArrFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)mmMusicNoDotSelectItemDisplayView:(id)arg1 noDotSelectItemView:(id)arg2 onDelete:(id)arg3;
- (id)previewControlCenter;
- (id)imagePreviewDataSourceMap;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)changeModeView;
- (void)setChangeModeView:(id)arg1;
- (id)lyricView;
- (void)setLyricView:(id)arg1;
- (id)musicMonitorTimer;
- (void)setMusicMonitorTimer:(id)arg1;
- (id)videoTransitionMask;
- (void)setVideoTransitionMask:(id)arg1;
- (BOOL)seekSpecifyTimeFlag;
- (void)setSeekSpecifyTimeFlag:(BOOL)arg1;
- (id)videoSourceViewController;
- (void)setVideoSourceViewController:(id)arg1;
- (id)editVideoCellView;
- (void)setEditVideoCellView:(id)arg1;
- (id)lastPlayingCardCell;
- (void)setLastPlayingCardCell:(id)arg1;
- (BOOL)isEditVideoMode;
- (void)setIsEditVideoMode:(BOOL)arg1;
- (id)mvModel;
- (void)setMvModel:(id)arg1;
- (void)setCgiMgr:(id)arg1;
- (id)postAnimhelper;
- (void)setPostAnimhelper:(id)arg1;
- (BOOL)markedVideoOffsetDirty;
- (void)setMarkedVideoOffsetDirty:(BOOL)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)mvClipFillStatus;
- (void)setMvClipFillStatus:(id)arg1;
- (BOOL)isFirstAppear;
- (void)setIsFirstAppear:(BOOL)arg1;
- (id)userInteractionSubviewSet;
- (void)setUserInteractionSubviewSet:(id)arg1;
- (void)setClipRecords:(id)arg1;
- (BOOL)isInFlexClipMode;
- (void)setIsInFlexClipMode:(BOOL)arg1;
- (void)setSelectItemDisplayView:(id)arg1;
- (void)setSelectItemViewModelArr:(id)arg1;
- (id)imagePreviewDataSource;
- (void)setImagePreviewDataSource:(id)arg1;
- (void)setPreviewControlCenter:(id)arg1;
- (id)currentImagePreviewViewController;
- (void)setCurrentImagePreviewViewController:(id)arg1;
- (void)setImagePreviewDataSourceMap:(id)arg1;
- (void).cxx_destruct;
@end
