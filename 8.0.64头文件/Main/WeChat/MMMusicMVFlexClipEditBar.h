@interface MMMusicMVFlexClipEditBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMMusicFlexEditBarCellDelegate, MMMusicFlexEditBarSortHelperDelegate, MMMusicFlexEditBarTransitionCellDelegate>
{
    UIScrollView * _timeScrollView; // +0x8
    UIScrollView * _thumbScrollView; // +0x10
    UIView * _centerVerticalLine; // +0x18
    NSMutableArray * _arrItemView; // +0x20
    MMMusicFlexEditBarCell * _placeHolderItemView; // +0x28
    MMUIButton * _dragLeftBtn; // +0x30
    MMUIButton * _dragRightBtn; // +0x38
    UIView * _dragTopLine; // +0x40
    UIView * _dragBottomLine; // +0x48
    MMUIButton * _cancelButton; // +0x50
    MMUIButton * _doneButton; // +0x58
    unsigned int _musicDurationMs; // +0x60
    unsigned long long _selectedCellIndex; // +0x68
    BOOL _bDragging; // +0x70
    BOOL _bDragLeftOrRight; // +0x71
    double _dragInitialX; // +0x78
    double _dragCurX; // +0x80
    double _dragInitialCellOffset; // +0x88
    double _dragInitialCellWidth; // +0x90
    double _dragCellOffsetForReset; // +0x98
    BOOL _bScrolling; // +0xa0
    MMMusicFlexEditBarSortHelper * _sortHelper; // +0xa8
    BOOL _isInPinchMode; // +0xb0
    BOOL _hasPlaceholderItem; // +0xb1
    unsigned long long _currentTimeInterval; // +0xb8
    NSArray * _availableTimeItemIntervals; // +0xc0
    id <MMMusicMVFlexClipEditBarDataSource> _dataSource; // +0xc8
    id <MMMusicMVFlexClipEditBarDelegate> _delegate; // +0xd0
    NSMutableArray * _timeCellArr; // +0xd8
    UIView * _progressLine; // +0xe0
    double _pinchModeCurTimeSec; // +0xe8
    UIPinchGestureRecognizer * _pinchGR; // +0xf0
    double _curScale; // +0xf8
    NSMutableArray * _transitionCellArr; // +0x100
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 dataSource:(id)arg3 musicDurationMs:(unsigned int)arg4 initialTimeItemInterval:(unsigned long long)arg5;
- (void)customInit;
- (void)reloadTransitionCellView;
- (void)initScrollView;
- (void)updatePlaceHolderItemView;
- (void)reloadItemView;
- (double)currentMaxWidth;
- (void)initDragView;
- (void)initTimeView;
- (void)reloadData;
- (void)initCenterVerticalLine;
- (void)initProgressLine;
- (void)layoutSubviews;
- (void)updateDragSideStatusWithCellIndex:(unsigned long long)arg1 bSeekToCellStart:(BOOL)arg2;
- (void)updateDragSideViewFrame;
- (double)musicDurationInSeconds;
- (BOOL)shouldAllowScale:(double)arg1;
- (unsigned long long)timeIntervalWithScale:(double)arg1 currentTimeInterval:(unsigned long long)arg2;
- (void)reloadTimeScrollView;
- (void)regenerateTimeScrollViewItemIfNeeded;
- (void)updateTimeScrollView;
- (void)layoutScrollViewAndSubViews;
- (double)getContentInsetRight;
- (double)minDragWidth;
- (CGSize)timeListViewCellSize;
- (BOOL)isDragingSide;
- (BOOL)isScrolling;
- (BOOL)isCellSelected;
- (BOOL)bSortMode;
- (BOOL)isEditBarInPinchMode;
- (void)seekToTimeSec:(double)arg1;
- (void)seekToIndexStart:(unsigned long long)arg1;
- (void)seekToOffsetX:(double)arg1;
- (void)seekByOffsetX:(double)arg1;
- (double)curOffsetX;
- (double)curTimeSec;
- (void)reloadCell:(unsigned long long)arg1;
- (void)updateProgressLineWithMusicTime:(double)arg1;
- (BOOL)shouldShowSelectedCellProgressLine;
- (double)widthPerSecondFromDataSource;
- (double)widthPerSecond;
- (void)updateScale:(double)arg1;
- (BOOL)supportTransitionSelection;
- (BOOL)isTransitionCellArrValid;
- (BOOL)isModifyTransitionWithPreIndex:(unsigned long long)arg1 andNextIndex:(unsigned long long)arg2;
- (void)setTransitionCellArrHidden:(BOOL)arg1;
- (BOOL)updateTransitionCellArr;
- (BOOL)isGhostMaterialWithIndex:(unsigned long long)arg1;
- (BOOL)hasGhostMaterials;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onTapCell:(unsigned long long)arg1;
- (void)cellThumbImageForTimeSec:(double)arg1 cellIndex:(unsigned long long)arg2 blockOnGetThumbImage:(id /* block */)arg3;
- (double)cellOffsetForIndex:(unsigned long long)arg1;
- (double)cellWidthForIndex:(unsigned long long)arg1;
- (BOOL)mvFlexEditBarCell:(id)arg1 isGhostCell:(unsigned long long)arg2;
- (BOOL)mvFlexEditBarCell:(id)arg1 isInSortMode:(unsigned long long)arg2;
- (double)mvFlexEditBarCellWidthPerSecond:(id)arg1;
- (void)mvFlexEditBarTransitionCell:(id)arg1 didTapWithPreIndex:(unsigned long long)arg2 nextIndex:(unsigned long long)arg3;
- (BOOL)canSortSubView:(id)arg1;
- (BOOL)canEnterSortModeWithLocationInSelf:(CGPoint)arg1 locateView:(id)arg2;
- (void)onWillEnterSortModeWithLocationInSelf:(CGPoint)arg1 locationInSuper:(CGPoint)arg2 locateView:(id)arg3;
- (void)updateViewStatausWithIsDragging:(BOOL)arg1;
- (void)onDidExitSortModeFromCellIndex:(unsigned long long)arg1 toCellIndex:(unsigned long long)arg2;
- (void)editBarSortHelper:(id)arg1 didChangeLongPressLocation:(CGPoint)arg2 cellIndex:(long long)arg3;
- (BOOL)editBarSortHelper:(id)arg1 shouldHanldeGestureEndWithLocation:(CGPoint)arg2 cellIndex:(long long)arg3;
- (void)onDragGes:(id)arg1;
- (void)editBarDidPinch:(id)arg1;
- (void)onClickCancelBtn;
- (void)cancelCurrentSelected;
- (void)onClickDoneBtn;
- (unsigned long long)currentTimeInterval;
- (void)setCurrentTimeInterval:(unsigned long long)arg1;
- (id)availableTimeItemIntervals;
- (void)setAvailableTimeItemIntervals:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)timeCellArr;
- (void)setTimeCellArr:(id)arg1;
- (id)progressLine;
- (void)setProgressLine:(id)arg1;
- (BOOL)isInPinchMode;
- (void)setIsInPinchMode:(BOOL)arg1;
- (double)pinchModeCurTimeSec;
- (void)setPinchModeCurTimeSec:(double)arg1;
- (id)pinchGR;
- (void)setPinchGR:(id)arg1;
- (double)curScale;
- (void)setCurScale:(double)arg1;
- (id)transitionCellArr;
- (void)setTransitionCellArr:(id)arg1;
- (BOOL)hasPlaceholderItem;
- (void)setHasPlaceholderItem:(BOOL)arg1;
- (void).cxx_destruct;
@end
