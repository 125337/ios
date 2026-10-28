@interface WCFinderCustomPaging : NSObject
{
    BOOL _magicAdjustDecelerating; // +0x8
    BOOL _footerViewDisplayed; // +0x9
    id <WCFinderCustomPagingDelegate> _delegate; // +0x10
    UITableView * _tableView; // +0x18
    NSIndexPath * _beginDraggingIndexPath; // +0x20
    CGPoint _targetContentOffset; // +0x28
}
- (id)initWithTableView:(id)arg1;
- (void)tableViewWillBeginDragging;
- (BOOL)isTableViewFooterViewDisplayed;
- (void)tableViewWillEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(CGPoint *)arg2;
- (CGRect)targetFrameForSlideUp;
- (CGRect)targetFrameForSlideDown;
- (CGRect)targetFrameForSlideStop;
- (BOOL)_isSplitCellAtIdx:(long long)arg1;
- (BOOL)isAnimating;
- (void)tableViewBeginDecelerating;
- (void)tableViewBeginDeceleratingWithSpeed:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (CGPoint)targetContentOffset;
- (void)setTargetContentOffset:(CGPoint)arg1;
- (BOOL)magicAdjustDecelerating;
- (void)setMagicAdjustDecelerating:(BOOL)arg1;
- (BOOL)footerViewDisplayed;
- (void)setFooterViewDisplayed:(BOOL)arg1;
- (id)beginDraggingIndexPath;
- (void)setBeginDraggingIndexPath:(id)arg1;
- (void).cxx_destruct;
@end
