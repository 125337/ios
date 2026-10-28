@interface BrandFansContactMgr : MMUserService <PBMessageObserverDelegate, BizTlPersonalCenterMgrExt, MMServiceProtocol>
{
    BOOL _isUpdating; // +0x8
    NSString * _bizuin; // +0x10
    BrandFansContactStorage * _contactStorage; // +0x18
    NSMutableDictionary * _contactUpdateTimes; // +0x20
    NSMutableArray * _updateQueue; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getContact:(id)arg1;
- (void)forceUpdateProfileForUsrName:(id)arg1;
- (void)updateProfileForUsrNames:(id)arg1;
- (void)checkQueue;
- (void)batchRequestUsernames:(id)arg1;
- (void)onReceiveBatchResponse:(id)arg1;
- (void)fetchContactDetailInfo:(id)arg1;
- (void)fetchInteractiveUserDetailInfo:(id)arg1 userType:(unsigned int)arg2;
- (void)onBizPersonalCenterLoginBizUin:(id)arg1;
- (void)onBizPersonalCenterLogoutBizUin:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)blockContact:(id)arg1 bizuin:(id)arg2 completion:(id /* block */)arg3;
- (void)unblockContact:(id)arg1 bizuin:(id)arg2 completion:(id /* block */)arg3;
- (void)setBlock:(BOOL)arg1 contact:(id)arg2 bizuin:(id)arg3 completion:(id /* block */)arg4;
- (void)blockInteractiveUser:(id)arg1 userType:(unsigned int)arg2 bizuin:(id)arg3 completion:(id /* block */)arg4;
- (void)unblockInteractiveUser:(id)arg1 userType:(unsigned int)arg2 bizuin:(id)arg3 completion:(id /* block */)arg4;
- (void)setBlock:(BOOL)arg1 interactiveUser:(id)arg2 userType:(unsigned int)arg3 bizuin:(id)arg4 completion:(id /* block */)arg5;
- (void)setBlock:(BOOL)arg1 identityName:(id)arg2 identityType:(unsigned int)arg3 bizuin:(id)arg4 completion:(id /* block */)arg5;
- (id)bizuin;
- (void)setBizuin:(id)arg1;
- (id)contactStorage;
- (void)setContactStorage:(id)arg1;
- (id)contactUpdateTimes;
- (void)setContactUpdateTimes:(id)arg1;
- (BOOL)isUpdating;
- (void)setIsUpdating:(BOOL)arg1;
- (id)updateQueue;
- (void)setUpdateQueue:(id)arg1;
- (void).cxx_destruct;
@end
