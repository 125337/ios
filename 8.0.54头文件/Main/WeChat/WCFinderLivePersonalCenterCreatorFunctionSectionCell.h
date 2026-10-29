@interface WCFinderLivePersonalCenterCreatorFunctionSectionCell : UICollectionViewCell
{
    id <WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate> _actionDelegate; // +0x8
    WCTableViewManager * _tableViewManager; // +0x10
    FinderLiveCreatorFunctions * _functions; // +0x18
}
+ (double)cellHeightWithFunctions:(id)arg1;
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)setup;
- (void)updateWithFunctions:(id)arg1;
- (void)reloadTableView;
- (void)didClickCell:(id)arg1 indexPath:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)functions;
- (void)setFunctions:(id)arg1;
- (void).cxx_destruct;
@end

