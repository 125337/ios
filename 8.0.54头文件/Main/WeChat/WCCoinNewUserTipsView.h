@interface WCCoinNewUserTipsView : MMPageSheetBaseViewController <WCCoinNewUserTipsDetailViewDelegate>
{
    WecoinNewUserTips * _tips; // +0x68
    WCCoinNewUserTipsDetailView * _tipsDetailView; // +0x70
}
- (id)initWithData:(id)arg1;
- (void)viewDidLoad;
- (void)didClickDone;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)tipsDetailView;
- (void)setTipsDetailView:(id)arg1;
- (void).cxx_destruct;
@end

