@interface WCFinderPoiGroupBuyTableViewCell : UITableViewCell <WCFinderPoiGroupBuyViewDelegate>
{
    id <WCFinderPoiGroupBuyTableViewCellDelegate> _delegate; // +0x8
    WCFinderPoiGroupBuyView * _groupBuyView; // +0x10
    UIView * _seperateLine; // +0x18
}
+ (double)heightForGroupBuyCoupon:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)prepareForReuse;
- (void)updateWithGroupBuyCoupon:(id)arg1 isLastCell:(BOOL)arg2;
- (void)updateLayout:(BOOL)arg1;
- (id)groupBuyView;
- (id)seperateLine;
- (void)groupBuyViewActionButtonDidClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setGroupBuyView:(id)arg1;
- (void)setSeperateLine:(id)arg1;
- (void).cxx_destruct;
@end

