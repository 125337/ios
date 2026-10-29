@interface WCFinderLivePersonalCenterCreatorFunctionSectionCell : UICollectionViewCell
{
    BOOL _joinsStartLiveSection; // +0x8
    id <WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate> _actionDelegate; // +0x10
    WCTableViewManager * _tableViewManager; // +0x18
    FinderLiveCreatorFunctions * _functions; // +0x20
}
+ (double)cellHeightWithFunctions:(id)arg1;
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)setup;
- (void)updateWithFunctions:(id)arg1;
- (void)reloadTableView;
- (id)createHistoryLiveCellWithRedDot:(id)arg1;
- (id)getRightViewByRightRedDot:(id)arg1;
- (id)getRightViewByTitle:(id)arg1;
- (void)didClickCell:(id)arg1 indexPath:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)joinsStartLiveSection;
- (void)setJoinsStartLiveSection:(BOOL)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)functions;
- (void)setFunctions:(id)arg1;
- (void).cxx_destruct;
@end
