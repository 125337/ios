@interface _TtC9WeAppCore22WAConcurrentJSEventMgr : MMUserService <MMServiceProtocol>
{
     arrConcurrentWaitingEvent; // +0x8
     dicConcurrentRunningEventForAppId; // +0x10
     $__lazy_storage_$_wxDataMaxRequestConcurrentPerAppID; // +0x18
     kTotalMaxRequestConcurrentCount; // +0x28
     kDefaultTimeout; // +0x30
     lastTimeoutCheckTimestamp; // +0x38
}
- (void)addConcurrentUserAccountJSEvent:(id)arg1 forAppId:(id)arg2 param:(id)arg3;
- (void)removeConcurrentUserAccountJSEvent:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
