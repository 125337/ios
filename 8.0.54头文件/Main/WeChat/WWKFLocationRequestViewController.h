@interface WWKFLocationRequestViewController : MMPageSheetBaseViewController <WWKFLocationRequestViewDelegate, WWKFReportLocationMgrExt>
{
    CContact * _contact; // +0x68
    WWKFLocationRequestView * _contentView; // +0x70
}
- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)setContact:(id)arg1;
- (void)onWWKFLocationRequestReject;
- (void)onWWKFLocationRequestApprove;
- (void)onWWKFLocationRequestLearnMore;
- (void)onSetAllowReportLocation:(id)arg1 allowReport:(BOOL)arg2 success:(BOOL)arg3;
- (id)contact;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end

