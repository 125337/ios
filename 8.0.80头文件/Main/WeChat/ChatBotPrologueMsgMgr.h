@interface ChatBotPrologueMsgMgr : MMUserService <CBTPrologueMsgNativeHelperBase, MMServiceProtocol>
{
    CBTPrologueMsgNativeHelper * _nativeHelper; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)onPrologueMsgUpdateAsync:(unsigned long long)arg1 addMsgList:(id)arg2 updateMsgList:(id)arg3;
- (void)onDeletePrologueMsgAsync:(unsigned long long)arg1 delMsgList:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)markMsgAsExposedWithMsgIdList:(id)arg1;
- (id)getPrologueMsgTypeMetaInfo;
- (void)syncMsgWithScene:(int)arg1;
- (id)getAllMsgFromDB;
- (id)getAllNewMsgFromDB;
- (void)recvNotify:(id)arg1;
- (id)nativeHelper;
- (void)setNativeHelper:(id)arg1;
- (void).cxx_destruct;
@end
