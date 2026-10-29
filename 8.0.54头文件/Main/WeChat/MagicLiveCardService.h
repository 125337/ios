@interface MagicLiveCardService : MMUserService <MMServiceProtocol>
{
    _TtC6WeChat16MagicLiveCardBiz * _biz; // +0x8
}
- (void)updateData:(id)arg1 frameSetName:(id)arg2 rootId:(id)arg3;
- (void)onServiceInit;
- (void)start;
- (void)pause;
- (void)resume;
- (id)frameSetViewForId:(id)arg1;
- (BOOL)isFrameSetRootIdExist:(id)arg1;
- (void)destroyFrameSetRoot:(id)arg1;
- (void)destroyAllFrameSetRoot;
- (void)bindFrameSetView:(id)arg1 withRootId:(id)arg2;
- (void)stopIfNoFrameSetRoot;
- (void)stopDirectly;
- (id)addFrameSetRootWithLiveTask:(id)arg1 extParams:(id)arg2 type:(long long)arg3 context:(id)arg4;
- (void)checkPkgUpdate;
- (id)getBizPkgVersion;
- (id)getBizPkgInfo;
- (id)biz;
- (void)setBiz:(id)arg1;
- (void).cxx_destruct;
@end

