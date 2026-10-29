@interface WCFinderNearbyTableViewCell : UITableViewCell
{
    id <WCFinderNearbyTableViewCellDelegate> _delegate; // +0x8
    UIView * _mBackgroundView; // +0x10
    UIImageView * _poiImageView; // +0x18
    UILabel * _poiTipsLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
}
+ (double)getNearbyTableViewCellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)mBackgroundView;
- (void)shouldHiddenSubViews:(BOOL)arg1;
- (id)poiImageView;
- (id)poiTipsLabel;
- (id)arrowImageView;
- (void)onClickNearbyCellAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setMBackgroundView:(id)arg1;
- (void)setPoiImageView:(id)arg1;
- (void)setPoiTipsLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

