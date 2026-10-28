@interface WCFinderMembershipPaymentNoticeView : MMPageSheetBaseViewController <WCFinderMembershipPaymentNoticeDetailViewDelegate>
{
    WCFinderMembershipPaymentNoticeDetailView * _panelDetailView; // +0x70
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (double)contentHeaderHeight;
- (double)contentFooterHeight;
- (void)panelLayoutFinished;
- (void)panelDidClickLink:(id)arg1;
- (id)panelDetailView;
- (void)setPanelDetailView:(id)arg1;
- (void).cxx_destruct;
@end
