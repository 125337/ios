@interface WCDragCollectionView : UICollectionView
{
    float _distGuesLocationWithCellCenterX; // +0x8
    float _distGuesLocationWithCellCenterY; // +0xc
    id <WCCollectionViewDataSource> _xd_dataSource; // +0x10
    id <WCCollectViewReorderDragDelegate> _xd_dragDelegate; // +0x18
    NSIndexPath * _originalIndexPath; // +0x20
    NSIndexPath * _moveIndexPath; // +0x28
    UIView * _tempMoveCell; // +0x30
}
- (BOOL)checkCanMoveItemAtIndexPath:(id)arg1;
- (BOOL)xd_beginInteractiveMovementForItemAtIndexPath:(id)arg1 gestureLocation:(CGPoint)arg2;
- (void)xd_updateInteractiveMovementTargetPosition:(CGPoint)arg1 gesture:(id)arg2;
- (void)xd_endInteractiveMovement;
- (void)xd_cancelInteractiveMovement;
- (void)xd_moveCell;
- (id)xd_dataSource;
- (void)setXd_dataSource:(id)arg1;
- (id)xd_dragDelegate;
- (void)setXd_dragDelegate:(id)arg1;
- (id)originalIndexPath;
- (void)setOriginalIndexPath:(id)arg1;
- (id)moveIndexPath;
- (void)setMoveIndexPath:(id)arg1;
- (id)tempMoveCell;
- (void)setTempMoveCell:(id)arg1;
- (float)distGuesLocationWithCellCenterX;
- (void)setDistGuesLocationWithCellCenterX:(float)arg1;
- (float)distGuesLocationWithCellCenterY;
- (void)setDistGuesLocationWithCellCenterY:(float)arg1;
- (void).cxx_destruct;
@end
