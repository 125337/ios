@interface EcsGiftEventMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _openEcsEventActionMap; // +0x8
}
- (void)onServiceInit;
- (id)registerEcsOpenEventActionId:(id /* block */)arg1;
- (void)triggerEcsOpenEventActionWithId:(id)arg1 type:(int)arg2 info:(id)arg3;
- (id)openEcsEventActionMap;
- (void)setOpenEcsEventActionMap:(id)arg1;
- (void).cxx_destruct;
@end
