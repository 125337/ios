@interface MJTimelineViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegate, MJTimelineViewDelegate, MJSegmentReusableViewDelegate, MJAudioSegmentCellDelegate, MJTileStripViewManager, MJTileStripViewDelegate, MJReusableTileLayersManager, UIGestureRecognizerDelegate>
{
    struct _scaleParams; // +0x8
    BOOL _shouldIgnoreScrollSignal; // +0x30
    BOOL _shouldAlwaysHideAddingButton; // +0x31
    BOOL _doneFirstLayout; // +0x32
    BOOL _isManualJumping; // +0x33
    BOOL _isAutoTriming; // +0x34
    BOOL _isMovingSegment; // +0x35
    id <MJTimelineViewControllerDelegate> _delegate; // +0x38
    MJTimelineViewModel * _timelineVM; // +0x40
    MJPlaybackViewModel * _playbackVM; // +0x48
    MJTimelineView * _timelineView; // +0x50
    UIPinchGestureRecognizer * _pinchGestureRecognizer; // +0x58
    MMUIButton * _addingButton; // +0x60
    MJSnapMarksView * _snapMarksView; // +0x68
    MJTimeRulerView * _timeRulerView; // +0x70
    MJTimeRulerViewLayout * _timeRulerViewLayout; // +0x78
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x80
    UITapGestureRecognizer * _doubleTapGestureRecognizer; // +0x88
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x90
    id /* block */ _onScrollAnimationComplete; // +0x98
    NSMapTable * _reusedTileStripViewsBySegmentIDs; // +0xa0
    NSMapTable * _visibleTileStripViewsBySegmentIDs; // +0xa8
    NSMutableSet * _reusedTileLayers; // +0xb0
    MJTimelineLayoutCalculator * _timelineLayoutCalc; // +0xb8
    MJTimelineCollectionViewLayout * _collectionViewLayout; // +0xc0
    MJSnapMarksViewLayout * _snapMarksViewLayout; // +0xc8
    UIView * _addingButtonContainer; // +0xd0
    MJSegmentTrimHandleReusableView * _trimHandleView; // +0xd8
    MJDashLine * _trimSnapline; // +0xe0
    MJSegmentTrimContext * _trimContext; // +0xe8
    NSTimer * _autoTrimTimer; // +0xf0
    double _trimmingOriginalWidth; // +0xf8
    MJSegmentMoveContext * _moveContext; // +0x100
    MJScrollViewAutoScroller * _autoScroller; // +0x108
    UIView * _playheadView; // +0x110
    UISelectionFeedbackGenerator * _feedbackGenerator; // +0x118
    MJDummyNarrationSegmentCell * _dummyNarrationCell; // +0x120
    MJDummyNarrationTextInputSegmentCell * _dummyTextInputNarrationCell; // +0x128
    struct _narrationStartTime; // +0x130
}
- (void)showTrimHandleForSegmentAtIndexPath:(id)arg1;
- (void)hideTrimHandle;
- (void)beginTrimmingWithGesture:(id)arg1;
- (void)updateTrimmingWithGesture:(id)arg1;
- (void)updateTrimmingWithTranslation:(CGPoint)arg1;
- (void)updateTrimmingWithDeltaTime:(struct)arg1;
- (void)updateTrimmingWithSnapInfo:(id)arg1;
- (void)onTrimHandleWillDisplay:(id)arg1;
- (void)onTrimHandleDidEndDisplaying:(id)arg1;
- (void)endTrimmingWithGesture:(id)arg1;
- (BOOL)canBeginTrimWithGesture:(id)arg1;
- (BOOL)shouldScrollDuringTrimming;
- (void)updateTrimHandleIfNeededWithMutationInfo:(id)arg1;
- (void)addSnaplineIfNeeded;
- (void)removeSnaplineIfNeeded;
- (void)refreshSnaplineDashColor;
- (void)addTrimSnapDecorationWithSnapInfo:(id)arg1;
- (void)removeTrimSnapDecoration;
- (id)getDecorationBoxTitlesWithSegmentID:(id)arg1;
- (BOOL)isGestureRecognizerEnteredAutoTrimArea:(id)arg1;
- (void)startAutoTrimmingWithPanGesture:(id)arg1;
- (void)stopAutoTrimTimer;
- (void)beginNarrationInputWithStartTime:(struct)arg1;
- (void)endNarrationInput;
- (void)updateNarrationIfNeededWithTime:(struct)arg1;
- (void)updateNarrationWithCaptionItems:(id)arg1;
- (void)updateNarrationWithDecibels:(const void *)arg1;
- (void)_beginSpeakNarrationWithStartTime:(struct)arg1;
- (void)_beginTextInputNarrationWithStartTime:(struct)arg1;
- (void)_endSpeakInputNarrationInput;
- (void)_endTextInputNarrationInput;
- (void)_updateSpeakNarrationIfNeededWithTime:(struct)arg1;
- (void)_updateTextInputNarrationIfNeededWithTime:(struct)arg1;
- (void)beginMovingSegmentWithGesture:(id)arg1;
- (void)updateMovingSegmentWithGesture:(id)arg1;
- (void)endMovingSegment;
- (BOOL)canBeginMoveWithGesture:(id)arg1;
- (void)addSnapshotForItemAtIndexPath:(id)arg1;
- (id)createSnapshotForItemAtIndexPath:(id)arg1;
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2 configuration:(id)arg3;
- (void)stopScrollImmediatelyAnimated:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupGestureRecognizers;
- (void)setupAutoFocus;
- (void)setupViews;
- (void)layoutViews;
- (void)viewDidLayoutSubviews;
- (void)bindViews;
- (BOOL)shouldHideAddingButton;
- (id)timelineTimeOffsetMapper;
- (void)showAdjacentTransitionSegmentCellsForSegmentAtIndexPath:(id)arg1;
- (void)hideAdjacentTransitionSegmentCellsForSegmentAtIndexPath:(id)arg1;
- (void)showTransitionSegmentCellWithSegmentVM:(id)arg1;
- (void)hideTransitionSegmentCellWithSegmentVM:(id)arg1;
- (void)showSegmentInfoOverlayForSegmentAtIndexPath:(id)arg1;
- (void)hideSegmentInfoOverlayForSegmentAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configSegmentCell:(id)arg1 atIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)segmentReusableViewDidTouchUpInside:(id)arg1;
- (void)audioSegmentCellDidLayout:(id)arg1;
- (void)timelineView:(id)arg1 didUpdateBounds:(CGRect)arg2 toBounds:(CGRect)arg3 contentSize:(CGSize)arg4 toContentSize:(CGSize)arg5;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)didEndScrubbingTimelineView;
- (void)autoFocusSegmentUnderPlayhead;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)canBeginReorderWithGesture:(id)arg1;
- (void)handleBackgroundTapGesture:(id)arg1;
- (BOOL)canBeginDoubleTapWithGesture:(id)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleSelectSegmentAtIndexPath:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)beginUpdatingTimeScale;
- (void)updateTimeScaleWithPinchGR:(id)arg1;
- (void)endUpdatingTimeScale;
- (BOOL)canUpdateTimeScale;
- (void)startAutoScroll;
- (void)stopAutoScroll;
- (void)handlePanGesture:(id)arg1;
- (void)tileStripViewDidCompleteInitialLayout:(id)arg1;
- (void)pruneTileStripViewsWithKeys:(id)arg1;
- (void)recycleAllReuseableTiles;
- (void)recycleAllReuseableTilesForceUpdate;
- (void)recycleReuseableTilesForSegmentVM:(id)arg1 withShiftingOffset:(double)arg2;
- (void)recycleReuseableTilesExcludedSegmentWithID:(id)arg1;
- (void)recycleReuseableTilesExcludedSegmentWithID:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)dequeueTileStripViewForSegmentVM:(id)arg1;
- (void)enqueueTileStripView:(id)arg1 forSegmentVM:(id)arg2;
- (id)dequeueReusableTileLayerForAttributes:(id)arg1;
- (void)enqueueReusableTileLayer:(id)arg1;
- (void)drawAudioWaveforms;
- (void)updatePlayheadTime;
- (CGPoint)playheadLocationInTimelineContentView;
- (BOOL)isPlayheadIntersectWithView:(id)arg1;
- (BOOL)canClipJumpBackward;
- (BOOL)canClipJumpForward;
- (void)clipJumpBackward:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)clipJumpForward:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)jumpToClipAfterSegmentWithID:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)scrollToOffsetX:(double)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)scrollToOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)scrollToTime:(struct)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)scrollToTime:(struct)arg1 frameAlignmentRequired:(BOOL)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)scrollToEdgeOfSegmentVM:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)scrollToHeadOfSegmentVM:(id)arg1 isManualJumping:(BOOL)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)scrollToTailOfSegmentVM:(id)arg1 isManualJumping:(BOOL)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)toggleOSTEnabled;
- (void)updateAfterInsertionWithMutationInfo:(id)arg1 targetPlayheadTime:(struct)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)updateAfterRemovalWithMutationInfo:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateWithOpDesc:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)handleRenderTouchOnSegmentWithID:(id)arg1;
- (id)contentOffsetXForTime:(struct)arg1 frameAlignmentRequired:(BOOL)arg2;
- (double)contentOffsetXWithSegmentOffsetX:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)timelineVM;
- (id)playbackVM;
- (id)timelineView;
- (BOOL)shouldIgnoreScrollSignal;
- (void)setShouldIgnoreScrollSignal:(BOOL)arg1;
- (id)pinchGestureRecognizer;
- (id)addingButton;
- (BOOL)shouldAlwaysHideAddingButton;
- (void)setShouldAlwaysHideAddingButton:(BOOL)arg1;
- (id)snapMarksView;
- (void)setSnapMarksView:(id)arg1;
- (id)timeRulerView;
- (void)setTimeRulerView:(id)arg1;
- (id)timeRulerViewLayout;
- (void)setTimeRulerViewLayout:(id)arg1;
- (BOOL)doneFirstLayout;
- (void)setDoneFirstLayout:(BOOL)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (id)doubleTapGestureRecognizer;
- (void)setDoubleTapGestureRecognizer:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id /* block */)onScrollAnimationComplete;
- (void)setOnScrollAnimationComplete:(id /* block */)arg1;
- (BOOL)isManualJumping;
- (void)setIsManualJumping:(BOOL)arg1;
- (id)reusedTileStripViewsBySegmentIDs;
- (void)setReusedTileStripViewsBySegmentIDs:(id)arg1;
- (id)visibleTileStripViewsBySegmentIDs;
- (void)setVisibleTileStripViewsBySegmentIDs:(id)arg1;
- (id)reusedTileLayers;
- (void)setReusedTileLayers:(id)arg1;
- (id)timelineLayoutCalc;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)snapMarksViewLayout;
- (id)addingButtonContainer;
- (id)trimHandleView;
- (void)setTrimHandleView:(id)arg1;
- (id)trimSnapline;
- (void)setTrimSnapline:(id)arg1;
- (id)trimContext;
- (void)setTrimContext:(id)arg1;
- (BOOL)isAutoTriming;
- (void)setIsAutoTriming:(BOOL)arg1;
- (id)autoTrimTimer;
- (void)setAutoTrimTimer:(id)arg1;
- (double)trimmingOriginalWidth;
- (void)setTrimmingOriginalWidth:(double)arg1;
- (BOOL)isMovingSegment;
- (void)setIsMovingSegment:(BOOL)arg1;
- (id)moveContext;
- (void)setMoveContext:(id)arg1;
- (id)autoScroller;
- (void)setAutoScroller:(id)arg1;
- (id)playheadView;
- (id)feedbackGenerator;
- (void)setFeedbackGenerator:(id)arg1;
- (id)dummyNarrationCell;
- (void)setDummyNarrationCell:(id)arg1;
- (id)dummyTextInputNarrationCell;
- (void)setDummyTextInputNarrationCell:(id)arg1;
- (struct)narrationStartTime;
- (void)setNarrationStartTime:(struct)arg1;
- (void).cxx_destruct;
@end
