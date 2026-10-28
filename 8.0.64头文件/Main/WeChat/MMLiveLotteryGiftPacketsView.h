@interface MMLiveLotteryGiftPacketsView : UIView
{
    NSArray * _giftViews; // +0x8
    NSArray * _viewModels; // +0x10
    MMLiveLotteryGiftConfit * _config; // +0x18
}
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithViewModels:(id)arg1 config:(id)arg2;
- (void)sizeToFit;
- (void)clearAll;
- (id)giftViews;
- (void)setGiftViews:(id)arg1;
- (id)viewModels;
- (void)setViewModels:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
