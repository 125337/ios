@interface BypSendPCRemindMessageMgr : NSObject <MMPageSheetBottomViewDelegate>
{
    id <BypSendPCRemindMessageProtocol> _delegate; // +0x8
    BypSendPCRemindMessageModel * _model; // +0x10
    BypSendPCRemindSheetView * _sheetView; // +0x18
    long long _descType; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (void)initInfoWithModel:(id)arg1;
- (void)sendMsgEvent:(id)arg1 alertInController:(id)arg2;
- (void)showSheetAlert:(id)arg1 title:(id)arg2 iconUrl:(id)arg3 desc:(id)arg4;
- (id)checkIllegal;
- (BOOL)isEmpty:(id)arg1;
- (void)sendRequest:(id)arg1 domain:(id)arg2 sendTime:(id)arg3;
- (void)onSuccess;
- (void)onFailed:(int)arg1 errMsg:(id)arg2;
- (void)showSuccessToast;
- (void)showFailedToast;
- (id)getDesc:(long long)arg1;
- (id)getDescOnPc:(long long)arg1;
- (id)getDescNeedLogin:(long long)arg1;
- (id)getToastDesc:(long long)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)cancelCallback;
- (void)reportSheetClick:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (long long)descType;
- (void)setDescType:(long long)arg1;
- (void).cxx_destruct;
@end
