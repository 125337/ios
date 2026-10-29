@interface MMLiveLotteryGiftPacketsView : UIView
{
    NSArray * _giftViews; // +0x8
    NSArray * _viewModels; // +0x10
}
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithViewModels:(id)arg1;
- (void)sizeToFit;
- (void)clearAll;
- (id)giftViews;
- (void)setGiftViews:(id)arg1;
- (id)viewModels;
- (void)setViewModels:(id)arg1;
- (void).cxx_destruct;
@end

