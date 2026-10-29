@interface MPPageMessageMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    WCEliminatedSlotMMKV * _messageSlotMMKV; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearData;
- (void)openBrandController:(id)arg1 navigationController:(id)arg2 modelModel:(unsigned int)arg3 pageIdentityInfo:(id)arg4 referMsg:(id)arg5;
- (unsigned int)referMsgExpireTime;
- (unsigned int)lastMsgExpireTime;
- (BOOL)hasSendReferMsgToPage:(id)arg1 withinTime:(unsigned int)arg2;
- (void)markLastReferMsgSendToPage:(id)arg1 msgWrap:(id)arg2;
- (unsigned int)getFirstMsgSendTimeToPage:(id)arg1;
- (void)markFirstMsgSendTimeToPage:(id)arg1 msgWrap:(id)arg2;
- (unsigned int)getLastMsgSendTimeToPage:(id)arg1;
- (void)markLastMsgSendTimeToPage:(id)arg1 msgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)messageSlotMMKV;
- (void)setMessageSlotMMKV:(id)arg1;
- (void).cxx_destruct;
@end

