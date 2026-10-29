@interface EcsShopWinShareLogic : MMObject
{
    MMFinderLiveECShopWindowShareTask * _task; // +0x8
}
- (void)loadShareItem:(id)arg1 entranceGMsgID:(id)arg2 completion:(id /* block */)arg3;
- (id)task;
- (void)setTask:(id)arg1;
- (void).cxx_destruct;
@end
