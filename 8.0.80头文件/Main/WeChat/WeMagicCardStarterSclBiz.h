@interface WeMagicCardStarterSclBiz : MagicBaseBiz
{
     TAG; // +0x30
     config; // +0x40
     isActive; // +0x48
    unsigned long long bizId; // +0x50
    void * onWillDestroy; // +0x58
}
- (unsigned long long)bizId;
- (void)setBizId:(unsigned long long)arg1;
- (id /* block */)onWillDestroy;
- (void)setOnWillDestroy:(id /* block */)arg1;
- (id)initWithConfig:(id)arg1;
- (void)activate;
- (void)deactivate;
- (void)pause;
- (void)resume;
- (id)bindFrameSetViewWithRootConfig:(id)arg1 containerView:(id)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4 callback:(id /* block */)arg5;
- (void)removeFrameSetViewWithRootConfig:(id)arg1 frameSetName:(id)arg2;
- (void)removeAllFrameSetViewWithRootConfig:(id)arg1;
- (void)notifyJsEvent:(id)arg1;
- (void)onDestroy;
- (id)initWithBizName:(id)arg1;
- (void).cxx_destruct;
@end
