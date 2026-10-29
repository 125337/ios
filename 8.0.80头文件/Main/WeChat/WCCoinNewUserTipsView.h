@interface WCCoinNewUserTipsView : MMPageSheetBaseViewController <WCCoinNewUserTipsDetailViewDelegate>
{
    WecoinNewUserTips * _tips; // +0x70
    WCCoinNewUserTipsDetailView * _tipsDetailView; // +0x78
}
- (id)initWithData:(id)arg1;
- (void)viewDidLoad;
- (double)pageSheetContentWidth;
- (void)viewDidTransitionToNewSize;
- (void)didClickDone;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)tipsDetailView;
- (void)setTipsDetailView:(id)arg1;
- (void).cxx_destruct;
@end
