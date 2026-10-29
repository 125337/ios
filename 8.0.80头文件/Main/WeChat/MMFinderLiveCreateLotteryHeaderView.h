@interface MMFinderLiveCreateLotteryHeaderView : MMUIView
{
    MMFinderLivePrizeConfigItem * _configItem; // +0x8
    MMUIImageView * _prizeImageView; // +0x10
    MMUILabel * _prizeLabel; // +0x18
    MMUILabel * _prizeStateLabel; // +0x20
    UIView * _sepelateLine; // +0x28
}
- (void)updatePrizeConfigItem:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)prizeImageView;
- (id)prizeLabel;
- (id)prizeStateLabel;
- (id)sepelateLine;
- (id)configItem;
- (void)setConfigItem:(id)arg1;
- (void)setPrizeImageView:(id)arg1;
- (void)setPrizeLabel:(id)arg1;
- (void)setPrizeStateLabel:(id)arg1;
- (void)setSepelateLine:(id)arg1;
- (void).cxx_destruct;
@end
