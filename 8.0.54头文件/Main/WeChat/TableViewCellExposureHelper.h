@interface TableViewCellExposureHelper : MMObject
{
    double m_navBarAndStatusBarHeight; // +0x8
    UITableView * m_tableView; // +0x10
    NSMutableArray * m_cellViewIndexPaths; // +0x18
    NSMutableSet * m_sectionIndexSet; // +0x20
    double m_lastOffset; // +0x28
    unsigned int _minScrollingThreshold; // +0x30
    id <TableViewCellExposureDelegate> _delegate; // +0x38
    id <UITableViewDelegate> _tableViewDelegate; // +0x40
}
- (id)initWithTableView:(id)arg1;
- (void)dealloc;
- (void)hookUITableView;
- (void)startCalculateItemCellViewExposure;
- (void)startCalculateSectionExposure;
- (CGRect)tableViewVisibleRect;
- (id)calculateItemCellViewAndGetExposureInfo:(id)arg1;
- (id)calculateSectionAndGetExposureInfo:(unsigned long long)arg1;
- (id)hookTagForSelector:(SEL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableViewDelegate;
- (void)setTableViewDelegate:(id)arg1;
- (unsigned int)minScrollingThreshold;
- (void)setMinScrollingThreshold:(unsigned int)arg1;
- (void).cxx_destruct;
@end

