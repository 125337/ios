@interface WCPayOfflineEnablePageTipsView : MMUIView
{
    id <WCPayOfflineEnablePageTipsViewDelegate> _delegate; // +0x8
    WCPayOfflinePayEnablePageData * _viewData; // +0x10
}
- (id)initTipsViewWithFrame:(CGRect)arg1 delegate:(id)arg2 viewData:(id)arg3;
- (void)setupContentView;
- (void)verifyBtnClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (void).cxx_destruct;
@end
