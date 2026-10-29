@interface MMFinderLiveCreateLotteryCell : MMMultiMenuTableViewCell
{
    MMFinderLivePrizeConfigItem * _configItem; // +0x40
    id /* block */ _actionBlock; // +0x48
    id /* block */ _hoverBlock; // +0x50
    UIView * _custemContentView; // +0x58
    MMFinderLiveCreateLotteryHeaderView * _headerView; // +0x60
    MMFinderLiveCreateLotteryFooterView * _footerView; // +0x68
    MMArrayConverter * _linesConverter; // +0x70
    MMUILabel * _tipLabel; // +0x78
    UIImageView * _goodsImageView; // +0x80
    MMLiveLotteryGiftPacketsView * _lotteryGiftPacketsView; // +0x88
    MMUILabel * _titleLabel; // +0x90
    MMUILabel * _descLabel; // +0x98
    CAGradientLayer * _gradientLayer; // +0xa0
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updatePrizeConfigItem:(id)arg1;
- (void)updateData;
- (void)updateGoodImageViewWithImgUrl:(id)arg1;
- (void)createUI;
- (void)layoutUI;
- (void)layoutLotteryPrizeTypeWithCustomUI;
- (void)layoutLotteryPrizeTypeWithGiftUI;
- (void)layoutLotteryPrizeTypeWithShopProductUI;
- (void)layoutLotteryPrizeTypeWithGameTeamUpUI;
- (void)layoutGiftPrizeTypeUI;
- (void)layoutBigImageUI;
- (void)updateGradientLayer:(BOOL)arg1;
- (id)headerView;
- (id)footerView;
- (id)custemContentView;
- (id)titleLabel;
- (id)descLabel;
- (id)addLine;
- (void)actionButtonClick;
- (id)getGradientLayer:(CGRect)arg1;
- (id)goodsImageView;
- (id)lotteryGiftPacketsView;
- (id)configItem;
- (void)setConfigItem:(id)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id /* block */)hoverBlock;
- (void)setHoverBlock:(id /* block */)arg1;
- (void)setCustemContentView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (id)linesConverter;
- (void)setLinesConverter:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (void)setGoodsImageView:(id)arg1;
- (void)setLotteryGiftPacketsView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
