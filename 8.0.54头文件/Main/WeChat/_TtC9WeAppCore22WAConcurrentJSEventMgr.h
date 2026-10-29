@interface _TtC9WeAppCore22WAConcurrentJSEventMgr : MMUserService <MMServiceProtocol>
{
     arrConcurrentWaitingEvent; // +0x8
     arrConcurrentRunningEvent; // +0x10
     runningEventCountByAppId; // +0x18
     $__lazy_storage_$_wxDataMaxRequestConcurrentPerAppID; // +0x20
     kTotalMaxRequestConcurrentCount; // +0x30
}
- (void)addConcurrentUserAccountJSEvent:(id)arg1 forAppId:(id)arg2 param:(id)arg3;
- (void)removeConcurrentUserAccountJSEvent:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

