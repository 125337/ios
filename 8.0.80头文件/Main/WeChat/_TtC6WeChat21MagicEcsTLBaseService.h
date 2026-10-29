@interface _TtC6WeChat21MagicEcsTLBaseService : MMUserService <MMServiceProtocol>
{
     biz; // +0x8
     $__lazy_storage_$_cardHeightCachedMMKV; // +0x10
     autoDestroySwitch; // +0x18
     currentAutoDestroyTask; // +0x20
     dispatchQueue; // +0x28
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)createBrandServiceBizWithScene:(long long)arg1;
- (void)recreateBrandServiceBizWithScene:(long long)arg1;
- (void)pause;
- (void)resume;
- (void)notifyStateChangeWithEventName:(id)arg1;
- (void)destroyBrandServiceBizWithScene:(long long)arg1;
- (void)requestPreLayoutWithFrameSetName:(id)arg1 frameSetData:(id)arg2;
- (id)getAppConfigWithBizName:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onAppWillSuspend;
- (id)init;
- (void).cxx_destruct;
@end
