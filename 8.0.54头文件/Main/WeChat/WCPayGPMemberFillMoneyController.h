@interface WCPayGPMemberFillMoneyController : WCPayBaseViewController
{
    BOOL _bIsAmountInvalid; // +0x90
    id <WCPayGPMemberFillMoneyControllerDelegate> _delegate; // +0x98
    WCPayGPMemberFillMoneyView * _contentView; // +0xa0
    WCPayGPLaunchParamInvalidTipsView * _paramInvalidTipsView; // +0xa8
}
- (void)viewDidLoad;
- (void)setupReportData;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setupContentView;
- (void)setDelegate:(id)arg1;
- (void)refreshMemberFillMoneyControllerWithSelectedContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (id)contentView;
- (id)paramInvalidTipsView;
- (void)cancelSelectMember;
- (void)finishSelectMember;
- (void)handleContentViewCancelSelectMember;
- (void)handleContentViewFinishSelectMember:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)handleContentViewSelectMemberChange:(id)arg1;
- (void)showInvalidTipsViewWithContent:(id)arg1;
- (void)hideInvalipTipsView;
- (id)delegate;
- (void)setContentView:(id)arg1;
- (void)setParamInvalidTipsView:(id)arg1;
- (BOOL)bIsAmountInvalid;
- (void)setBIsAmountInvalid:(BOOL)arg1;
- (void).cxx_destruct;
@end

