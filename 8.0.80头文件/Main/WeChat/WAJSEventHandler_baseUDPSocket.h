@interface WAJSEventHandler_baseUDPSocket : WAJSEventHandler_BaseEvent
+ (void)removePairSocketId:(id)arg1;
+ (void)removeAllUdpSocketForAppId:(id)arg1;
+ (id)socketIdForUdpClient:(void *)arg1;
+ (void *)udpClientForSocketId:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)handleJSEvent:(id)arg1 socketId:(id)arg2 udpClient:(void *)arg3;
- (void)sendEvent:(id)arg1 param:(id)arg2;
- (void)addPairSocketId:(id)arg1 udpClient:(void *)arg2;
@end
