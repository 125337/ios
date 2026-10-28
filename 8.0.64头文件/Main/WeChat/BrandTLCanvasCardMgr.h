@interface BrandTLCanvasCardMgr : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _mappedKV; // +0x8
}
+ (BOOL)isAdCardOpen;
+ (BOOL)isHighFreshOpen;
+ (BOOL)isAdRequestOpen;
+ (BOOL)isAdvanceLaunchJSCoreOpen;
+ (BOOL)isPkgMgrUseDebugAppId;
+ (double)delayTimeForAdvanceLaunchJsEngine;
+ (BOOL)isAdRecConflicCheckABTestClose;
- (BOOL)isPreviewModeOpen;
- (void)onServiceInit;
- (id)mappedKV;
- (void)handleBizAdNotifyNewXml:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)reportMonitorIdKey:(unsigned int)arg1;
- (void)setMappedKV:(id)arg1;
- (void).cxx_destruct;
@end
