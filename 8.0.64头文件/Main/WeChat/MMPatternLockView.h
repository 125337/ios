@interface MMPatternLockView : UIView
{
    id <MMPatternLockViewDelegate> _delegate; // +0x8
    MMLockCircle * _selectedCell; // +0x10
    MMLockOverlayView * _overLay; // +0x18
    long long _oldCellIndex; // +0x20
    long long _currentCellIndex; // +0x28
    NSMutableDictionary * _drawnLines; // +0x30
    NSMutableArray * _finalLines; // +0x38
    NSMutableArray * _cellsInOrder; // +0x40
}
+ (double)heightOfLockView;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpTheView;
- (void)calculateCirclePosition;
- (void)resetView;
- (void)initData;
- (void)onPwdError;
- (void)onPwdCorrect;
- (long long)indexForPoint:(CGPoint)arg1;
- (long long)indexForCell:(id)arg1;
- (id)cellAtIndex:(long long)arg1;
- (id)uniqueLineIdForLineJoiningPoint:(long long)arg1 AndPoint:(long long)arg2;
- (void)endPattern;
- (void)addGestureRecognizer;
- (void)gestured:(id)arg1;
- (void)handlePanAtPoint:(CGPoint)arg1;
- (void)handleCircleSkip;
- (void)highlightSelectCell:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedCell;
- (void)setSelectedCell:(id)arg1;
- (id)overLay;
- (void)setOverLay:(id)arg1;
- (long long)oldCellIndex;
- (void)setOldCellIndex:(long long)arg1;
- (long long)currentCellIndex;
- (void)setCurrentCellIndex:(long long)arg1;
- (id)drawnLines;
- (void)setDrawnLines:(id)arg1;
- (id)finalLines;
- (void)setFinalLines:(id)arg1;
- (id)cellsInOrder;
- (void)setCellsInOrder:(id)arg1;
- (void).cxx_destruct;
@end
