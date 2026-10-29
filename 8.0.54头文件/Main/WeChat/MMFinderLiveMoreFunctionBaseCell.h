@interface MMFinderLiveMoreFunctionBaseCell : UITableViewCell
{
    BOOL _showRedDot; // +0x8
    BOOL _layoutInFullWidth; // +0x9
    MMFinderLiveMoreFunctionItem * _item; // +0x10
    NSIndexPath * _indexPath; // +0x18
    unsigned long long _rectCorner; // +0x20
    id <MMFinderLiveMoreFunctionBaseCellDelegate> _delegate; // +0x28
}
+ (id)identifier;
- (void)updateCellWithItem:(id)arg1;
- (void)updateCellIndexPath:(id)arg1;
- (void)updateCellWithRectCorner:(unsigned long long)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (unsigned long long)rectCorner;
- (void)setRectCorner:(unsigned long long)arg1;
- (BOOL)showRedDot;
- (void)setShowRedDot:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)layoutInFullWidth;
- (void)setLayoutInFullWidth:(BOOL)arg1;
- (void).cxx_destruct;
@end

