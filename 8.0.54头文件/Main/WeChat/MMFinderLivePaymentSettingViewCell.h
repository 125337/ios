@interface MMFinderLivePaymentSettingViewCell : MMTableViewCell
{
    BOOL _forceDarkMode; // +0x8
    unsigned int _priceInWecoin; // +0xc
    UIImageView * _selectionIndicatorView; // +0x10
    UIImageView * _wecoinIconView; // +0x18
    MMCPLabel * _priceInWecoinNameLabel; // +0x20
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithPriceInWecoin:(unsigned int)arg1 optionName:(id)arg2 isSelected:(BOOL)arg3 forceDarkMode:(BOOL)arg4;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)selectionIndicatorView;
- (void)setSelectionIndicatorView:(id)arg1;
- (id)wecoinIconView;
- (void)setWecoinIconView:(id)arg1;
- (id)priceInWecoinNameLabel;
- (void)setPriceInWecoinNameLabel:(id)arg1;
- (unsigned int)priceInWecoin;
- (void)setPriceInWecoin:(unsigned int)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

