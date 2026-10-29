@interface MMFinderLiveCameraCastVerifyViewController : MMAcceptAgreementBaseViewController <IMMFinderLiveCameraCastMgrExt>
{
    unsigned long long _castState; // +0x70
    UIButton * _actionBtn; // +0x78
    UIButton * _confirmBtn; // +0x80
    MMAcceptAgreementCommonHeadView * _commonHeadView; // +0x88
    MMUILabel * _cancelCastLabel; // +0x90
    NSString * _castTicket; // +0x98
    NSString * _headTitleMessage; // +0xa0
}
- (id)initWithCastTicket:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)layoutCommonHeadView;
- (void)layoutActionBtn;
- (void)layoutCancelCastLabel;
- (void)onCancelCastLabelTapped;
- (void)onCameraCastResult:(long long)arg1 message:(id)arg2;
- (void)onCancel;
- (void)doAction;
- (void)doConfirm;
- (unsigned long long)castState;
- (void)setCastState:(unsigned long long)arg1;
- (id)actionBtn;
- (void)setActionBtn:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)commonHeadView;
- (void)setCommonHeadView:(id)arg1;
- (id)cancelCastLabel;
- (void)setCancelCastLabel:(id)arg1;
- (id)castTicket;
- (void)setCastTicket:(id)arg1;
- (id)headTitleMessage;
- (void)setHeadTitleMessage:(id)arg1;
- (void).cxx_destruct;
@end
