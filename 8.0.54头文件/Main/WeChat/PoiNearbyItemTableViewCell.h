@interface PoiNearbyItemTableViewCell : MMUIView
{
    LbsRecommendPoiItem * _poiItem; // +0x8
    MMWebImageView * _iconView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subTitleLabel; // +0x20
    MMUILabel * _descLabel; // +0x28
    UIImageView * _remarkBKImage; // +0x30
    MMUILabel * _personalRemarkLabel; // +0x38
    NSMutableArray * _adIconViewList; // +0x40
}
- (id)initWithLbsRecommendPoiItem:(id)arg1 withSize:(CGSize)arg2;
- (void)initView;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end

