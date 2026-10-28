@interface MassSendContentLogicController : BaseMsgContentLogicController <MultiSelectContactsViewControllerDelegate, IUiUtilExt>
{
    UIImageView * _toolView; // +0xe0
}
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)UnRegister;
- (void)Register;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)OpenDetailInfo;
- (void)initToolView;
- (void)handleToolView;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)StopPlaying;
- (void)onNewMassSend:(id)arg1;
- (void)ViewWillInit;
- (void)ViewDidInit;
- (void)onMassSendSendAgain:(id)arg1;
- (void)onPopFromNavigationController;
- (void)onTopBarFrameChanged;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)onDeleteMsg:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void).cxx_destruct;
@end
