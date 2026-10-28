@interface _TtC6WeChat17MagicBrandService : _TtC6WeChat21MagicBrandBaseService
- (BOOL)shouldPreLayoutWhenExpose;
- (long long)getDynamicCardType;
- (void)createBrandServiceBizWithScene:(long long)arg1;
- (void)pause;
- (void)resume;
- (void)notifyStateChangeWithEventName:(id)arg1;
- (void)notifyFrameSetInfoWithMsgId:(double)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)destroyBrandServiceBizWithScene:(long long)arg1;
- (id)init;
@end
