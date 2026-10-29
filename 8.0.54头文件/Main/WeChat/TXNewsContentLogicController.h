@interface TXNewsContentLogicController : BaseMsgContentLogicController
{
    BOOL m_bNeedIntroView; // +0xd8
}
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OpenDetailInfo;
- (void)reloadIntroView;
- (void)initIntroView;
- (BOOL)CanReportShowInfo;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ViewWillInit;
- (void)ViewDidInit;
- (BOOL)isNeedCached;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)onEnterRoom;
- (BOOL)mainSwitch_shouldHandleAppmsg;
@end

