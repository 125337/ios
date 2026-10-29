@interface CBTMDTableView : UIView <CBTMDTableDataControllerDelegate>
{
    BOOL _isUpdatingSize; // +0x8
    id <CBTMDTableViewDelegate> _tableDelegate; // +0x10
    CBTMDTableDataController * _dataController; // +0x18
    UICollectionView * _collectionView; // +0x20
    CBTMDTableLayout * _tableLayout; // +0x28
    UIView * _collectionContainerView; // +0x30
    UIView * _headerView; // +0x38
    UILabel * _headerLabel; // +0x40
    CAGradientLayer * _fadeGradientMask; // +0x48
    unsigned long long _lastFadeState; // +0x50
}
- (id)initWithDataController:(id)arg1;
- (void)initBorder;
- (void)setupSubviews;
- (void)setupGradientMasks;
- (void)layoutSubviews;
- (void)appendCell:(id)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (void)appendCell:(id)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3 isHeader:(BOOL)arg4;
- (void)startNewRow;
- (void)reloadData;
- (void)setColumnAlignment:(int)arg1 forColumn:(unsigned long long)arg2;
- (id)footnoteDefInfoListForTableDataController:(id)arg1;
- (void)tableDataController:(id)arg1 didChangeHeight:(double)arg2;
- (void)tableDataControllerNeedsUpdateGradientMasks:(id)arg1 contentOffsetX:(double)arg2;
- (void)tableDataController:(id)arg1 didClickLink:(id)arg2;
- (void)updateGradientMasksWithOffsetX:(double)arg1;
- (void)updateSize;
- (id)tableDelegate;
- (void)setTableDelegate:(id)arg1;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)tableLayout;
- (void)setTableLayout:(id)arg1;
- (id)collectionContainerView;
- (void)setCollectionContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (id)fadeGradientMask;
- (void)setFadeGradientMask:(id)arg1;
- (BOOL)isUpdatingSize;
- (void)setIsUpdatingSize:(BOOL)arg1;
- (unsigned long long)lastFadeState;
- (void)setLastFadeState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
