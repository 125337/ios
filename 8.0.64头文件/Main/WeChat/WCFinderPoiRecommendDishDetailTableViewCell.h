@interface WCFinderPoiRecommendDishDetailTableViewCell : UITableViewCell
{
    BOOL _isLastCell; // +0x8
    UIImageView * _imgView; // +0x10
    MMUILabel * _nameLabel; // +0x18
    MMUILabel * _priceLabel; // +0x20
    MMUIButton * _likeButton; // +0x28
    UIView * _separateLine; // +0x30
}
+ (double)heightForDishDetail:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)prepareForReuse;
- (void)updateWithDishDetail:(id)arg1 isLastCell:(BOOL)arg2;
- (void)updateLayout;
- (id)imgView;
- (id)nameLabel;
- (id)priceLabel;
- (id)likeButton;
- (id)separateLine;
- (BOOL)isLastCell;
- (void)setIsLastCell:(BOOL)arg1;
- (void)setImgView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPriceLabel:(id)arg1;
- (void)setLikeButton:(id)arg1;
- (void)setSeparateLine:(id)arg1;
- (void).cxx_destruct;
@end
