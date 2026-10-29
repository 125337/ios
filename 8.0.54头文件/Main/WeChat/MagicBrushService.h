@interface MagicBrushService : NSObject
{
    NSMutableDictionary * _extDict; // +0x8
    MBBizSystem * _bizSystem; // +0x10
    id <IMBReportProxy> _reportProxy; // +0x18
}
- (void)registerJsEventImplWithEventName:(id)arg1 impl:(id)arg2;
- (void)unRegisterJsEventImplWithEventName:(id)arg1;
- (void)registerEventWithEventName:(id)arg1 instanceName:(id)arg2 block:(id /* block */)arg3;
- (void)unRegisterEventWithEventName:(id)arg1 instanceName:(id)arg2;
- (void)onSendEventWithEventName:(id)arg1 extData:(id)arg2;
- (id)init;
- (id)initWithProxy:(id)arg1 pluginProxy:(id)arg2 reportProxy:(id)arg3;
- (id)newBiz:(id)arg1;
- (void)report:(int)arg1 logStr:(id)arg2;
- (void)runCodeInMBThread:(id /* block */)arg1;
- (void)runCodeInMBThreadSync:(id /* block */)arg1;
- (id)getReportExtraDictionary:(id)arg1 publicServices:(id)arg2;
- (void)forceStop:(id)arg1 withAllConnectedBizes:(BOOL)arg2;
- (id)extDict;
- (void)setExtDict:(id)arg1;
- (id)bizSystem;
- (void)setBizSystem:(id)arg1;
- (id)reportProxy;
- (void)setReportProxy:(id)arg1;
- (void).cxx_destruct;
@end

