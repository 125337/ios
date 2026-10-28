@interface WCPayOfflineBlockTipsView : MMUIView <ILinkEventExt>
{
    id <WCPayOfflinePayBlockTipsViewDelegate> _delegate; // +0x8
    WCPayOfflinePayBlockLayer * _viewData; // +0x10
    UIButton * _confirmBtn; // +0x18
}
- (id)initBlockTipsViewWithFrame:(CGRect)arg1 delegate:(id)arg2 viewData:(id)arg3;
- (void)setupContentView;
- (void)startCountDownBtn;
- (void)confirmBtnClick;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (void).cxx_destruct;
@end
