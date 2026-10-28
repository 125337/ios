@interface MMTableViewMultipleReorder : NSObject <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    BOOL _showCancelButton; // +0x8
    BOOL _enableAutoScroll; // +0x9
    BOOL _isMultipleReordering; // +0xa
    BOOL _hasSpaceCell; // +0xb
    BOOL _previousShowsVerticalScrollIndicator; // +0xc
    BOOL _isAutoScrolling; // +0xd
    double _groupedCellsScaleFactor; // +0x10
    NSString * _groupedCellsAccessibilityLabel; // +0x18
    double _minimumPressDuration; // +0x20
    double _spaceCellHeight; // +0x28
    double _gradientBackgroundHeight; // +0x30
    NSString * _tipsText; // +0x38
    NSString * _spaceCellTipsText; // +0x40
    double _autoScrollStartTopInset; // +0x48
    UITableView * _tableView; // +0x50
    id <MMTableViewMultipleReorderDelegate> _delegate; // +0x58
    id <MMTableViewMultipleReorderDataSource> _dataSource; // +0x60
    NSArray * _indexPathsToMove; // +0x68
    NSArray * _rowsOfSectionsToMove; // +0x70
    NSArray * _dicOriginalRowToFilteredRowOfSections; // +0x78
    NSArray * _dicFilteredRowToOriginalRowOfSections; // +0x80
    MMGroupedCellsView * _groupedCellsView; // +0x88
    UIView * _cancelMoveIndicatorView; // +0x90
    UIView * _gradientBackgroundView; // +0x98
    MMUILabel * _tipsLabel; // +0xa0
    MMUIButton * _cancelButton; // +0xa8
    UILongPressGestureRecognizer * _longPressGesture; // +0xb0
    NSIndexPath * _spaceCellIndexPath; // +0xb8
    UITableViewCell * _spaceCell; // +0xc0
    long long _numberOfMovesToDo; // +0xc8
    double _previousEstimatedRowHeight; // +0xd0
    UIImpactFeedbackGenerator * _impactFeedbackGenerator; // +0xd8
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator; // +0xe0
    double _scrollStep; // +0xe8
    MMTimer * _autoScrollTimer; // +0xf0
    CGPoint _currentPosition; // +0xf8
    UIEdgeInsets _previousContentInset; // +0x108
}
- (id)initWithTableView:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;
- (void)initView;
- (void)startMultipleReorderWithIndexPaths:(id)arg1;
- (void)endMultipleReorder;
- (id)filteredIndexPathForIndexPath:(id)arg1;
- (id)indexPathForFilteredIndexPath:(id)arg1;
- (long long)filteredNumberOfRowsInSection:(long long)arg1;
- (BOOL)isSpaceCell:(id)arg1;
- (void)prepareMultipleReorderData;
- (void)cancelMultipleReorder;
- (void)onCancel;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onLongPressGesture:(id)arg1;
- (void)onReorderBeginPosition:(CGPoint)arg1;
- (void)onReorderChangePosition:(CGPoint)arg1;
- (void)moveCellIfNeeded:(CGPoint)arg1;
- (void)onReorderEndPosition:(CGPoint)arg1;
- (void)removeRowOfSpaceCell;
- (BOOL)shouldCancelMoveAtPosition:(CGPoint)arg1;
- (double)getFixedSpaceCellHeight;
- (void)handleAutoScrollAtPosition:(CGPoint)arg1;
- (void)startAutoScroll;
- (void)stopAutoScroll;
- (void)fireTableViewScroll;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)makeSpaceCell:(id)arg1;
- (void)setSpaceCellLabelHidden:(BOOL)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(CGPoint)arg3;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)showCancelButton;
- (void)setShowCancelButton:(BOOL)arg1;
- (double)groupedCellsScaleFactor;
- (void)setGroupedCellsScaleFactor:(double)arg1;
- (id)groupedCellsAccessibilityLabel;
- (void)setGroupedCellsAccessibilityLabel:(id)arg1;
- (double)minimumPressDuration;
- (void)setMinimumPressDuration:(double)arg1;
- (double)spaceCellHeight;
- (void)setSpaceCellHeight:(double)arg1;
- (double)gradientBackgroundHeight;
- (void)setGradientBackgroundHeight:(double)arg1;
- (id)tipsText;
- (void)setTipsText:(id)arg1;
- (id)spaceCellTipsText;
- (void)setSpaceCellTipsText:(id)arg1;
- (BOOL)enableAutoScroll;
- (void)setEnableAutoScroll:(BOOL)arg1;
- (double)autoScrollStartTopInset;
- (void)setAutoScrollStartTopInset:(double)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)isMultipleReordering;
- (void)setIsMultipleReordering:(BOOL)arg1;
- (id)indexPathsToMove;
- (void)setIndexPathsToMove:(id)arg1;
- (id)rowsOfSectionsToMove;
- (void)setRowsOfSectionsToMove:(id)arg1;
- (id)dicOriginalRowToFilteredRowOfSections;
- (void)setDicOriginalRowToFilteredRowOfSections:(id)arg1;
- (id)dicFilteredRowToOriginalRowOfSections;
- (void)setDicFilteredRowToOriginalRowOfSections:(id)arg1;
- (id)groupedCellsView;
- (void)setGroupedCellsView:(id)arg1;
- (id)cancelMoveIndicatorView;
- (void)setCancelMoveIndicatorView:(id)arg1;
- (id)gradientBackgroundView;
- (void)setGradientBackgroundView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (CGPoint)currentPosition;
- (void)setCurrentPosition:(CGPoint)arg1;
- (id)spaceCellIndexPath;
- (void)setSpaceCellIndexPath:(id)arg1;
- (BOOL)hasSpaceCell;
- (void)setHasSpaceCell:(BOOL)arg1;
- (id)spaceCell;
- (void)setSpaceCell:(id)arg1;
- (long long)numberOfMovesToDo;
- (void)setNumberOfMovesToDo:(long long)arg1;
- (UIEdgeInsets)previousContentInset;
- (void)setPreviousContentInset:(UIEdgeInsets)arg1;
- (double)previousEstimatedRowHeight;
- (void)setPreviousEstimatedRowHeight:(double)arg1;
- (BOOL)previousShowsVerticalScrollIndicator;
- (void)setPreviousShowsVerticalScrollIndicator:(BOOL)arg1;
- (id)impactFeedbackGenerator;
- (void)setImpactFeedbackGenerator:(id)arg1;
- (id)selectionFeedbackGenerator;
- (void)setSelectionFeedbackGenerator:(id)arg1;
- (BOOL)isAutoScrolling;
- (void)setIsAutoScrolling:(BOOL)arg1;
- (double)scrollStep;
- (void)setScrollStep:(double)arg1;
- (id)autoScrollTimer;
- (void)setAutoScrollTimer:(id)arg1;
- (void).cxx_destruct;
@end
