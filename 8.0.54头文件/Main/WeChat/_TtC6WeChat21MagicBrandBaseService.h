@interface _TtC6WeChat21MagicBrandBaseService : MMUserService <MMServiceProtocol>
{
     brandServiceBiz; // +0x8
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
- (void)notifyFrameSetInfoWithMsgId:(double)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)requestPreLayoutWhenExposeWithStrategy:(long long)arg1;
- (void)destroyBrandServiceBizWithScene:(long long)arg1;
- (id)getAppConfigWithBizName:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

