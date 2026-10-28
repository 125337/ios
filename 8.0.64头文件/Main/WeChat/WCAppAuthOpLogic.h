@interface WCAppAuthOpLogic : MMObject <PBMessageObserverDelegate>
{
    id <WCAppAuthOpLogicDelegate> _delegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (BOOL)modifyAppAllScope:(id)arg1 Scene:(unsigned int)arg2;
- (BOOL)modifyApp:(id)arg1 scope:(id)arg2 Scene:(unsigned int)arg3;
- (BOOL)deleteApp:(id)arg1 scene:(unsigned int)arg2;
- (void)handleModResp:(id)arg1;
- (void)handleDelResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
