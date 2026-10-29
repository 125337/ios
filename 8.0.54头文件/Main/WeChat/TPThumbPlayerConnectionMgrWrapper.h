@interface TPThumbPlayerConnectionMgrWrapper : NSObject
{
    ITPPlayerConnectionMgr * _connectionMgr; // +0x8
}
- (id)init;
- (void)dealloc;
- (int)addConnectionWithPlayer1:(id)arg1 actions1:(TPPlayerConnectionNode)arg2 player2:(id)arg3 actions2:(TPPlayerConnectionNode)arg4;
- (int)addConnectionWithPlayerAddr1:(long long)arg1 actions1:(TPPlayerConnectionNode)arg2 playerAddr2:(long long)arg3 actions2:(TPPlayerConnectionNode)arg4;
- (void)removeConnection:(int)arg1;
- (int)activeConnection:(int)arg1;
- (int)activeAllConnections;
- (void)deactiveConnection:(int)arg1;
- (void)deactiveAllConnections;
- (ITPPlayerConnectionMgr *)connectionMgr;
- (void)setConnectionMgr:(ITPPlayerConnectionMgr *)arg1;
@end

