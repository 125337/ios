@interface _TtC6WeChat26MagicEcsTLSubscribeService : MMUserService <MMServiceProtocol>
{
     biz; // +0x8
     cardHeightCachedMMKV; // +0x10
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)shouldPreLayoutWhenExpose;
- (long long)getDynamicCardType;
- (void)createBrandServiceBizWithScene:(long long)arg1;
- (void)recreateBrandServiceBizWithScene:(long long)arg1;
- (void)pause;
- (void)resume;
- (void)notifyStateChangeWithEventName:(id)arg1;
- (void)destroyBrandServiceBizWithScene:(long long)arg1;
- (id)getAppConfigWithBizName:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
