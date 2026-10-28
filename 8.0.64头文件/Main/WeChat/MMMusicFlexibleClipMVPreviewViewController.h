@interface MMMusicFlexibleClipMVPreviewViewController : MMUIViewController <MMMusicLiveCGIMgrDelegate, MMMusicMVFlexClipEditBarDataSource, MMMusicMVFlexClipEditBarDelegate, MMMVPlayerDelegate, MMMusicFlexEditBarThumbLoaderDelegate, MMMusicFlexEditBarTransitionPanelDelegate, MMMusicFlexEditBarTransitionPanelDataSource>
{
    NSArray * _arrSelectedItem; // +0x70
    MMMVPlayer * _mvPlayer; // +0x78
    BOOL _bSeekingMusic; // +0x80
    BOOL _isInClearMode; // +0x81
    BOOL _isMVEdit; // +0x82
    BOOL _isShowExitConfirmActionSheet; // +0x83
    id /* block */ _closedBlock; // +0x88
    id /* block */ _publishReloadBlock; // +0x90
    unsigned long long _exitType; // +0x98
    MMMusicMVModel * _mvModel; // +0xa0
    MMMusicMVModel * _currMvModel; // +0xa8
    MMUIButton * _cancelBtn; // +0xb0
    MMUIButton * _doneBtn; // +0xb8
    UILabel * _titleLabel; // +0xc0
    MMMusicMVFlexClipEditBar * _editBar; // +0xc8
    CAGradientLayer * _grayLayer; // +0xd0
    UITapGestureRecognizer * _clearTapGestureRecognizer; // +0xd8
    MMMusicLiveCGIMgr * _cgiMgr; // +0xe0
    MMMusicFlexEditBarThumbLoader * _thumbLoader; // +0xe8
    NSMutableArray * _mutableArrSelectedItem; // +0xf0
    unsigned long long _curSelectedIndex; // +0xf8
    MMUIButton * _addButton; // +0x100
    WCDragDeleteBarView * _deleteBarView; // +0x108
    double _initialEditBarScale; // +0x110
    unsigned long long _initialEditBarTimeInterval; // +0x118
    MMMusicFlexEditBarTransitionPanel * _transitionPanel; // +0x120
    NSMutableArray * _transitionModelArr; // +0x128
    MMMusicMVModel * _mvModelHistory; // +0x130
}
- (id)initWithViewModel:(id)arg1 selectedItemArr:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)setupInitialBarScaleWithModel:(id)arg1;
- (void)setupInitialBarScaleWith:(double)arg1;
- (BOOL)hidesStatusBar;
- (void)initView;
- (id)transitionPanel;
- (void)viewDidLayoutSubviews;
- (void)OnReturn;
- (void)showReturnConfirmActionSheet;
- (void)realExitWithDiscardEditInfo:(BOOL)arg1;
- (void)OnDone;
- (void)onClear;
- (void)addButtonClicked:(id)arg1;
- (void)handleAddSelectedAssets:(id)arg1;
- (void)reloadData;
- (void)handleRemoveAssetsInIndex:(long long)arg1;
- (BOOL)isInSelectedMode;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapGestureRecognized:(id)arg1;
- (void)MVPlayer:(id)arg1 onMusicProgressUpdate:(double)arg2 totalDuration:(double)arg3;
- (void)MVPlayer:(id)arg1 onMusicStateChanged:(unsigned long long)arg2 musicInfo:(id)arg3 errorInfo:(id)arg4;
- (BOOL)mvPlayer:(id)arg1 shouldHandleFinishLoopTimeRange:(id)arg2;
- (double)mvFlexClipEditBarWidthPerSecond:(id)arg1;
- (void)onSelectCell:(unsigned long long)arg1;
- (void)setControlElemetnsHidden:(BOOL)arg1;
- (void)onDeselectCell:(unsigned long long)arg1;
- (void)mvFlexClipEditBar:(id)arg1 onDeselectCellWithDoneBtnClick:(unsigned long long)arg2;
- (void)mvFlexClipEditBar:(id)arg1 onDeselectCellWithCancelBtnClick:(unsigned long long)arg2;
- (void)mvFlexClipEditBar:(id)arg1 didChangeLongPressLocation:(CGPoint)arg2 cellIndex:(long long)arg3;
- (BOOL)mvFlexClipEditBar:(id)arg1 shouldHandleLongPressGestureEndAtPoint:(CGPoint)arg2 cellIndex:(long long)arg3;
- (void)mvFlexClipEditBar:(id)arg1 onPinchGestureRecognizerStateChanged:(long long)arg2;
- (BOOL)mvFlexClipEditBar:(id)arg1 shouldShowSelectedCellProgressLineWithIndex:(unsigned long long)arg2;
- (void)onMusicFlexClipEditBarDragSideBegin:(id)arg1;
- (void)onDragSideEnd;
- (void)onScrollEnd;
- (void)setCurrentDraggingMode:(BOOL)arg1;
- (void)onWillEnterSortMode;
- (void)onWillSortFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (void)onDidSortFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (long long)numberOfItems;
- (BOOL)mvFlexClipEditBarHasPlaceholderItem:(id)arg1;
- (double)mvFlexClipEditBar:(id)arg1 durationInSecondWithItemIndex:(unsigned long long)arg2;
- (double)mvFlexClipEditBar:(id)arg1 offsetInSecondWithItemIndex:(unsigned long long)arg2;
- (double)mvFlexClipEditBar:(id)arg1 maxDurationInSecondWithItemIndex:(unsigned long long)arg2;
- (BOOL)canDragSideWithIndex:(unsigned long long)arg1;
- (void)thumbImageForTimeSec:(double)arg1 cellIndex:(unsigned long long)arg2 blockOnGetThumbImage:(id /* block */)arg3;
- (void)onCellNeetUpdateOffset:(double)arg1 index:(unsigned long long)arg2;
- (void)onCellNeetUpdateWidth:(double)arg1 index:(unsigned long long)arg2;
- (void)refreshTimeOffsetInMv;
- (BOOL)mvFlexClipEditBarSupportTransitionSelection:(id)arg1;
- (BOOL)mvFlexClipEditBar:(id)arg1 isModifyTransitionWithPreIndex:(unsigned long long)arg2 andNextIndex:(unsigned long long)arg3;
- (void)mvFlexClipEditBar:(id)arg1 didTransitionCellClickedWithPreIndex:(unsigned long long)arg2 andNextIndex:(unsigned long long)arg3;
- (BOOL)mvFlexClipEditBarSupportGhostMaterial:(id)arg1;
- (id)mvFlexClipEditBarGetGhostIndexArr:(id)arg1;
- (id)getGhostIndexArr;
- (void)refreshGapTrackItemOffsetAndLength;
- (void)updateAfterDragAction;
- (void)didCorrectSeek;
- (id)thumbLoader;
- (void)onNeedReloadTrackItem:(id)arg1;
- (id)addButton;
- (id)deleteBarView;
- (void)showOrHideTransitionPanel;
- (void)startTransitionPreviewWithPreIndex:(unsigned long long)arg1 andNextIndex:(unsigned long long)arg2 transitionModel:(id)arg3;
- (void)finishTransitionPreviewWithPreIndex:(unsigned long long)arg1 andNextIndex:(unsigned long long)arg2 transitionModel:(id)arg3;
- (void)updateTransitionWhenSortFinishWithPreTrackItemArr:(id)arg1;
- (id)mvFlexEditBarTransitionPanelGetTransitionModelArr:(id)arg1;
- (id)mvFlexEditBarTransitionPanelGetCurTransitionId:(id)arg1;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didLoadCompleteWithCurTransitionModel:(id)arg2;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didBlankAreaClicked:(id)arg2;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didTransitionPanelCellClicked:(id)arg2;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didDoneBtnClicked:(id)arg2;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didCancelBtnClicked:(id)arg2;
- (void)mvFlexEditBarTransitionPanel:(id)arg1 didReplayBtnClicked:(id)arg2;
- (id /* block */)closedBlock;
- (void)setClosedBlock:(id /* block */)arg1;
- (id /* block */)publishReloadBlock;
- (void)setPublishReloadBlock:(id /* block */)arg1;
- (unsigned long long)exitType;
- (void)setExitType:(unsigned long long)arg1;
- (id)mvModel;
- (void)setMvModel:(id)arg1;
- (id)currMvModel;
- (void)setCurrMvModel:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)editBar;
- (void)setEditBar:(id)arg1;
- (id)grayLayer;
- (void)setGrayLayer:(id)arg1;
- (id)clearTapGestureRecognizer;
- (void)setClearTapGestureRecognizer:(id)arg1;
- (BOOL)isInClearMode;
- (void)setIsInClearMode:(BOOL)arg1;
- (id)cgiMgr;
- (void)setCgiMgr:(id)arg1;
- (void)setThumbLoader:(id)arg1;
- (id)mutableArrSelectedItem;
- (void)setMutableArrSelectedItem:(id)arg1;
- (unsigned long long)curSelectedIndex;
- (void)setCurSelectedIndex:(unsigned long long)arg1;
- (void)setAddButton:(id)arg1;
- (void)setDeleteBarView:(id)arg1;
- (double)initialEditBarScale;
- (void)setInitialEditBarScale:(double)arg1;
- (unsigned long long)initialEditBarTimeInterval;
- (void)setInitialEditBarTimeInterval:(unsigned long long)arg1;
- (void)setTransitionPanel:(id)arg1;
- (id)transitionModelArr;
- (void)setTransitionModelArr:(id)arg1;
- (BOOL)isMVEdit;
- (void)setIsMVEdit:(BOOL)arg1;
- (id)mvModelHistory;
- (void)setMvModelHistory:(id)arg1;
- (BOOL)isShowExitConfirmActionSheet;
- (void)setIsShowExitConfirmActionSheet:(BOOL)arg1;
- (void).cxx_destruct;
@end
