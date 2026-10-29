@interface WCPayBypMsgMgr : MMUserService <IExptServiceExt, IMsgExt, MMKernelExt, MMServiceProtocol>
{
    BOOL _enbalePayByp; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onAuthOK;
- (void)checkAndReportBypPayMsg:(id)arg1;
- (void)onExptItemListChange;
- (void)reportSyncPayBusinessMsgIfNecessary:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)reportBypMsgWithMsgWrap:(id)arg1 reportScene:(unsigned int)arg2;
- (BOOL)enbalePayByp;
- (void)setEnbalePayByp:(BOOL)arg1;
@end

