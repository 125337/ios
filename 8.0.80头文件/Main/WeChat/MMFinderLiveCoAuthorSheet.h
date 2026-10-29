@interface MMFinderLiveCoAuthorSheet : MMPageSheetBaseView <MMFinderLiveCoAuthorCellDelegate, WCFinderContactExt>
{
    BOOL _disableFollowing; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    WCTableViewManager * _tableViewManager; // +0x18
}
+ (id)showWithDataItem:(id)arg1;
+ (id)showWithDataItem:(id)arg1 disableFollowing:(BOOL)arg2;
+ (BOOL)handleSourceLabelClickForShareItem:(id)arg1;
- (id)initWithDataItem:(id)arg1 disableFollowing:(BOOL)arg2;
- (void)setupPageSheetConfig;
- (void)leftButtonAction;
- (void)setupSubviews;
- (void)layoutSubviews;
- (double)fixedHeight;
- (void)layoutUI;
- (void)configureOptionTableView;
- (void)addCoAuthorSection;
- (id)makeHeaderViewWith:(id)arg1 topPading:(double)arg2;
- (void)onCoAuthorCellFollow:(id)arg1;
- (void)onCoAuthorCellContentTap:(id)arg1;
- (void)refresh;
- (void)registerExtensions;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (double)tableCellHeight;
- (double)tableWidth;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)disableFollowing;
- (void)setDisableFollowing:(BOOL)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (void).cxx_destruct;
@end
