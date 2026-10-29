@interface WCNotificationCenterMgr : MMObject <INewSyncPluginExt>
{
    WCDataItem * m_lastDataItem; // +0x8
    MyWCDB * m_database; // +0x10
    int m_unReadCount; // +0x18
    id <WCNotificationCenterMgrDelegate> m_delegate; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)saveSetting;
- (void)NotifyCheckSelector;
- (void)NotifyCmd:(id)arg1;
- (id)getLastWCObject;
- (unsigned int)getUnReadMessageCount;
- (id)getLastUnReadMessage;
- (id)getLatestReadMessage;
- (id)getUnReadMessages;
- (id)getUnReadMessagesLimit:(int)arg1;
- (id)getAllMessages;
- (id)getMessageFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (BOOL)addNewRawMessage:(id)arg1 hasRead:(BOOL)arg2;
- (void)markMessageRead:(id)arg1;
- (void)markMessageListRead:(id)arg1;
- (void)markMessageAllReadBeginWithMessage:(id)arg1;
- (void)deleteAllMessages;
- (void)deleteMessage:(id)arg1;
- (void)deleteMessageByFeedId:(id)arg1;
- (void)rptReceSnsRedDot:(id)arg1;
- (id)m_database;
- (void)setM_database:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

