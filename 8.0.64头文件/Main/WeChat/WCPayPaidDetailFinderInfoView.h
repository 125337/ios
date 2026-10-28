@interface WCPayPaidDetailFinderInfoView : UIView
{
    WCPayPaidDetailFinderInfoViewData * _viewData; // +0x8
    id <WCPayPaidDetailFinderInfoViewDelegate> _delegate; // +0x10
}
- (id)initFinderInfoViewWithViewData:(id)arg1 delegate:(id)arg2;
- (void)setupContentView;
- (void)coverBtnClick;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
