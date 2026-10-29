@interface WCProxyServer : GCDWebServer
{
    NSMutableArray * _arrGuests; // +0x8
}
+ (id)shareInstance;
- (void)dealloc;
- (id)init;
- (BOOL)wx_tryStart:(id)arg1;
- (void)wx_tryStop:(id)arg1;
- (BOOL)start;
- (void)stop;
- (id)handleHevcRequest:(id)arg1;
- (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
- (void)setResponseHeaderFor:(id)arg1 from:(id)arg2;
- (int)convertPicType:(id)arg1;
- (void).cxx_destruct;
@end

