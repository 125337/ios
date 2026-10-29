@interface MonoServiceMsgHistory : NSObject
{
    NSMutableDictionary * m_msgHistoryDic; // +0x8
}
- (id)init;
- (BOOL)hasHistoryMsg:(id)arg1;
- (BOOL)hasCancelMsgWithRoomID:(unsigned long long)arg1 serviceType:(id)arg2;
- (id)getHistoryMsg:(id)arg1;
- (id)msgsWithServiceType:(id)arg1 key:(id)arg2;
- (void)addHistoryWithMsg:(id)arg1;
- (id)m_msgHistoryDic;
- (void)setM_msgHistoryDic:(id)arg1;
- (void).cxx_destruct;
@end
