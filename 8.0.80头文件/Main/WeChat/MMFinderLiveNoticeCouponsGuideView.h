@interface MMFinderLiveNoticeCouponsGuideView : UIView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveCouponViewDelegate>
{
    NSArray * _coupons; // +0x8
    NSArray * _notices; // +0x10
    NSString * _anchor; // +0x18
    UITableView * _couponsTable; // +0x20
}
- (id)initWithNotices:(id)arg1 anchor:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onActionButtonClicked:(id)arg1 view:(id)arg2;
- (UIEdgeInsets)couponCellsPadding;
- (id)coupons;
- (void)setCoupons:(id)arg1;
- (id)notices;
- (void)setNotices:(id)arg1;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (id)couponsTable;
- (void)setCouponsTable:(id)arg1;
- (void).cxx_destruct;
@end
