@interface JumpToBizWebviewLogicHelper : MMObject <PBMessageObserverDelegate>
{
    id <JumpToBizWebviewLogicHelperDelegate> _delegate; // +0x8
}
- (void)dealloc;
- (void)jumpToBizWebview:(id)arg1;
- (void)handleJumpToBizWebviewResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

