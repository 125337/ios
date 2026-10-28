@interface WAJSEventHandler_baseTCPSocket : WAJSEventHandler_BaseEvent
+ (BOOL)removePairSocketId:(id)arg1 sockfd:(id)arg2;
+ (void)removeAllTcpSocketForAppId:(id)arg1;
+ (id)socketIdForTcpClient:(void *)arg1;
+ (void *)tcpClientForSocketId:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)handleJSEvent:(id)arg1 socketId:(id)arg2 tcpClient:(void *)arg3;
- (void)sendEvent:(id)arg1 param:(id)arg2;
- (void)addPairSocketId:(id)arg1 tcpClient:(void *)arg2;
@end
