@interface NewArrivalCountMgr : MMUserService <MMServiceProtocol, IMsgExt>
{
    NewArrivalCountData * m_data; // +0x8
}
- (id)getPath;
- (BOOL)loadData;
- (void)callSXExt;
- (void)callExt:(id)arg1;
- (void)zeroSXNewArrivalMsgItem;
- (id)init;
- (unsigned int)getSXNewArrivalCount;
- (BOOL)zeroSXNewArrivalCount;
- (void)lastMessageChange:(id)arg1 msgid:(unsigned int)arg2 msg:(id)arg3;
- (void)lastMessageChange:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void).cxx_destruct;
@end

