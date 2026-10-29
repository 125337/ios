@interface WCFinderPersonalCenterRecentContactPageView : UICollectionViewCell
{
    NSArray * _itemList; // +0x8
    NSArray * _itemViews; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)createItems;
- (void)layoutSubviews;
- (void)setItemList:(id)arg1;
- (id)itemList;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (void).cxx_destruct;
@end
