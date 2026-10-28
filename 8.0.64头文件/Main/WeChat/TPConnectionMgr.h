@interface TPConnectionMgr : NSObject <ITPConnectionMgr>
{
    TPThumbPlayerConnectionMgrWrapper * _connectionMgrWrapper; // +0x8
}
- (id)init;
- (int)activeAllConnections;
- (int)activeConnection:(int)arg1;
- (int)addConnectionWithPlayer1:(id)arg1 actions1:(id)arg2 player2:(id)arg3 actions2:(id)arg4;
- (void)deactiveAllConnections;
- (void)deactiveConnection:(int)arg1;
- (void)removeConnection:(int)arg1;
- (id)connectionMgrWrapper;
- (void)setConnectionMgrWrapper:(id)arg1;
- (void).cxx_destruct;
@end
