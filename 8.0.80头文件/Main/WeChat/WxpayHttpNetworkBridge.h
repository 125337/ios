@interface WxpayHttpNetworkBridge : NSObject
+ (id)client;
+ (id)registry;
+ (BOOL)startRequest:(id)arg1 callback:(id /* block */)arg2;
+ (void)cancelRequestId:(id)arg1;
+ (id)executeBlockingRequest:(id)arg1;
@end
