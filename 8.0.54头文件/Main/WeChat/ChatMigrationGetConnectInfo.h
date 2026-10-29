@interface ChatMigrationGetConnectInfo : MMObject <PBMessageObserverDelegate>
{
    id <ChatMigrationGetConnectInfoDelegate> m_delegate; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)getConnectInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

