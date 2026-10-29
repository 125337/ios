@interface TemplateMsgExposeLogic : MMObject <PBMessageObserverDelegate>
{
    MMUIViewController * _vc; // +0x8
    WAContactGetter * _contactGetter; // +0x10
}
- (id)initWithVC:(id)arg1;
- (void)dealloc;
- (void)exposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)onExpose:(id)arg1 withMsg:(id)arg2 fromWeapp:(BOOL)arg3 extraData:(id)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onExposeMsgWithMsgId:(id)arg1 appId:(id)arg2 extraData:(id)arg3;
- (void)onExposeMsgWithMsgId:(id)arg1 username:(id)arg2 templateId:(id)arg3;
- (void)doOpenWebVcWithUrl:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)contactGetter;
- (void)setContactGetter:(id)arg1;
- (void).cxx_destruct;
@end
