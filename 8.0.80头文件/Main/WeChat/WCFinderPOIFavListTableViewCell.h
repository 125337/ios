@interface WCFinderPOIFavListTableViewCell : UITableViewCell <WCFinderLBSCardContentViewDelegate>
{
    id <WCFinderPOIFavListTableViewCellDelegate> _delegate; // +0x8
    WCFinderLBSCardContentView * _lbsCard; // +0x10
    double _layoutWidth; // +0x18
    WCFinderFavPoiItem * _favPOIItem; // +0x20
}
+ (double)heightWithStyle:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;
- (void)updateWithFavPOIItem:(id)arg1;
- (void)lbsCardLayoutHeightChanged;
- (void)lbsCardDidClickCard;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lbsCard;
- (void)setLbsCard:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (id)favPOIItem;
- (void)setFavPOIItem:(id)arg1;
- (void).cxx_destruct;
@end
