@interface MMFinderLiveGoodsLikeCell : MMTableViewCell <MMFinderLiveTagsLabelDelegate>
{
    MMWebImageView * _goodsImageView; // +0x8
    MMUILabel * _serialNumLabel; // +0x10
    CAShapeLayer * _shapeLayer; // +0x18
    UIView * _promotingBgView; // +0x20
    UIImageView * _promotingIconView; // +0x28
    MMUILabel * _promotingLabel; // +0x30
    MMUIButton * _actionButton; // +0x38
    MMFinderLiveTagsLabel * _goodsTitleLabel; // +0x40
    UIView * _topSeparatorLine; // +0x48
    UIView * _bottomSeparatorLine; // +0x50
}
+ (id)identifier;
+ (id)titleFont;
+ (double)titleSpacing;
+ (CGSize)defaultTagSize;
+ (double)getCellHeight;
+ (double)getPromotingCellHeight;
+ (double)imageWidthForCellWidth:(double)arg1;
- (void)prepareForReuse;
- (void)addGoodsImageView;
- (void)addPromotingViews;
- (void)addActionButton;
- (void)addGoodsTitleLabel;
- (void)addSeparatorLine;
- (void)setActionButtonPromotingState:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setIsPromoting:(BOOL)arg1;
- (BOOL)isPromotingShow;
- (void)onWebImageGetDifferentSize;
- (id)goodsImageView;
- (void)setGoodsImageView:(id)arg1;
- (id)serialNumLabel;
- (void)setSerialNumLabel:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)promotingBgView;
- (void)setPromotingBgView:(id)arg1;
- (id)promotingIconView;
- (void)setPromotingIconView:(id)arg1;
- (id)promotingLabel;
- (void)setPromotingLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)goodsTitleLabel;
- (void)setGoodsTitleLabel:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end

