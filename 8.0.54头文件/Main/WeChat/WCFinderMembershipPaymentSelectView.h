@interface WCFinderMembershipPaymentSelectView : MMPageSheetBaseViewController <WCFinderMembershipPaymentSelectDetailViewDelegate>
{
    id <WCFinderMembershipPaymentSelectViewDelegate> _delegate; // +0x68
    WCCoinConsumeParameter * _parameter; // +0x70
    WCFinderMembershipPaymentSelectDetailView * _panelDetailView; // +0x78
    UIImageView * _questionView; // +0x80
    WCFinderMembershipPaymentNoticeView * _noticeView; // +0x88
    NSArray * _memberPriceArray; // +0x90
}
- (id)initWithParameter:(id)arg1 memberPriceArray:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (double)contentHeaderHeight;
- (double)contentFooterHeight;
- (void)panelLayoutFinished;
- (void)panelDidClickConsume:(unsigned long long)arg1;
- (void)panelDidClickLink:(id)arg1;
- (void)panelDidClickQuestionView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)panelDetailView;
- (void)setPanelDetailView:(id)arg1;
- (id)questionView;
- (void)setQuestionView:(id)arg1;
- (id)noticeView;
- (void)setNoticeView:(id)arg1;
- (id)memberPriceArray;
- (void)setMemberPriceArray:(id)arg1;
- (void).cxx_destruct;
@end

