@interface MMFinderLiveCreateLotteryCell : MMMultiMenuTableViewCell
{
    BOOL _bigCell; // +0x40
    int _prizeType; // +0x44
    MMFinderLiveCreateLotteryDataItem * _createlotteryDataItem; // +0x48
    id /* block */ _actionBlock; // +0x50
    UIView * _custemContentView; // +0x58
    MMUILabel * _prizeLabel; // +0x60
    MMUILabel * _prizeNumLabel; // +0x68
    MMUILabel * _prizeTimeLabel; // +0x70
    MMUILabel * _prizeJoinLabel; // +0x78
    MMUILabel * _prizeGiftDistributeLabel; // +0x80
    MMUIButton * _actionButton; // +0x88
    CAGradientLayer * _gradientLayer; // +0x90
    UIImageView * _goodsImageView; // +0x98
    MMLiveLotteryGiftPacketsView * _lotteryGiftPacketsView; // +0xa0
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setCreatelotteryDataItem:(id)arg1;
- (void)updateData;
- (BOOL)canShowActionButton;
- (void)createUI;
- (BOOL)bigCell;
- (void)layoutUI;
- (void)updateGradientLayer:(BOOL)arg1;
- (void)recreateActionButton;
- (id)custemContentView;
- (id)prizeLabel;
- (id)prizeNumLabel;
- (id)prizeTimeLabel;
- (id)prizeJoinLabel;
- (id)prizeGiftDistributeLabel;
- (void)actionButtonClick;
- (id)getGradientLayer:(CGRect)arg1;
- (id)goodsImageView;
- (id)lotteryGiftPacketsView;
- (id)createlotteryDataItem;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setCustemContentView:(id)arg1;
- (void)setPrizeLabel:(id)arg1;
- (void)setPrizeNumLabel:(id)arg1;
- (void)setPrizeTimeLabel:(id)arg1;
- (void)setPrizeJoinLabel:(id)arg1;
- (void)setPrizeGiftDistributeLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void)setGoodsImageView:(id)arg1;
- (void)setLotteryGiftPacketsView:(id)arg1;
- (int)prizeType;
- (void)setPrizeType:(int)arg1;
- (void)setBigCell:(BOOL)arg1;
- (void).cxx_destruct;
@end

