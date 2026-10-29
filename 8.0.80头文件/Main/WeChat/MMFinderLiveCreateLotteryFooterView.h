@interface MMFinderLiveCreateLotteryFooterView : MMUIView
{
    MMUIButton * _actionButton; // +0x8
    id /* block */ _actionBlock; // +0x10
    MMFinderLivePrizeConfigItem * _configItem; // +0x18
}
- (void)updatePrizeConfigItem:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)actionButton;
- (void)actionButtonClick:(id)arg1;
- (void)setActionButton:(id)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)configItem;
- (void)setConfigItem:(id)arg1;
- (void).cxx_destruct;
@end
