@interface ACAppChannelServer : NSObject <GCDWebServerDelegate>
{
    NSMutableDictionary * _messageHandlers; // +0x8
    ACLifeKeeper * _lifeKeeper; // +0x10
    GCDWebServer * _gcdWebServer; // +0x18
    BOOL _isRunning; // +0x20
    ACAppChannelServerOptions * _options; // +0x28
}
- (void)WebServer_startWebServer;
- (void)WebServer_stopWebServer;
- (void)WebServer_asyncHandleMessageWithWSRequest:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)createACRequestFromWSRequest:(id)arg1;
- (id)createWSResponseFromACResponse:(id)arg1;
- (void)LifeKeeper_active;
- (void)LifeKeeper_deactive;
- (id)initWithOptions:(id)arg1;
- (void)startServer;
- (void)stopServer;
- (id)messageHandlers;
- (void)registerMessageHandler:(id)arg1;
- (void)unregisterMessageHandlerForName:(id)arg1;
- (void)handleMessageWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)options;
- (BOOL)isRunning;
- (void).cxx_destruct;
@end
