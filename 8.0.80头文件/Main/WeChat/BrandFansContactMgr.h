@interface BrandFansContactMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    BOOL _isUpdating; // +0x8
    BrandFansContactStorage * _contactStorage; // +0x10
    NSMutableDictionary * _contactUpdateTimes; // +0x18
    NSMutableDictionary * _contactDetailUpdateTimes; // +0x20
    NSMutableDictionary * _updateQueue; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)notifyContactUpdated:(id)arg1;
- (id)getContact:(id)arg1;
- (id)getContact:(id)arg1 bizUin:(id)arg2;
- (void)forceUpdateProfileForUsrName:(id)arg1 bizUin:(id)arg2 bizType:(int)arg3;
- (void)updateProfileForUsrNames:(id)arg1 bizUin:(id)arg2 bizType:(int)arg3;
- (void)checkQueue;
- (void)batchRequestUsernames:(id)arg1 bizUin:(id)arg2 bizType:(int)arg3;
- (void)onReceiveBatchResponse:(id)arg1 bizUin:(id)arg2 bizType:(int)arg3;
- (void)fetchContactDetailInfo:(id)arg1 bizUin:(id)arg2 bizType:(int)arg3;
- (void)fetchContactDetailInfo:(id)arg1 bizUin:(id)arg2 bizType:(int)arg3 completion:(id /* block */)arg4;
- (void)fetchContactDetailInfoIfNeeded:(id)arg1 bizUin:(id)arg2 bizType:(int)arg3 completion:(id /* block */)arg4;
- (void)fetchInteractiveUserDetailInfo:(id)arg1 userType:(unsigned int)arg2 bizUin:(id)arg3 bizType:(int)arg4;
- (void)fetchInteractiveUserDetailInfo:(id)arg1 userType:(unsigned int)arg2 bizUin:(id)arg3 bizType:(int)arg4 openID:(id)arg5;
- (void)fetchInteractiveUserDetailInfo:(id)arg1 userType:(unsigned int)arg2 bizUin:(id)arg3 bizType:(int)arg4 openID:(id)arg5 completion:(id /* block */)arg6;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)blockContact:(id)arg1 bizuin:(id)arg2 bizType:(int)arg3 completion:(id /* block */)arg4;
- (void)unblockContact:(id)arg1 bizuin:(id)arg2 bizType:(int)arg3 completion:(id /* block */)arg4;
- (void)setBlock:(BOOL)arg1 contact:(id)arg2 bizuin:(id)arg3 bizType:(int)arg4 completion:(id /* block */)arg5;
- (void)blockInteractiveUser:(id)arg1 userType:(unsigned int)arg2 bizuin:(id)arg3 bizType:(int)arg4 completion:(id /* block */)arg5;
- (void)unblockInteractiveUser:(id)arg1 userType:(unsigned int)arg2 bizuin:(id)arg3 bizType:(int)arg4 completion:(id /* block */)arg5;
- (void)setBlock:(BOOL)arg1 interactiveUser:(id)arg2 userType:(unsigned int)arg3 bizuin:(id)arg4 bizType:(int)arg5 completion:(id /* block */)arg6;
- (void)setBlock:(BOOL)arg1 identityName:(id)arg2 identityType:(unsigned int)arg3 bizuin:(id)arg4 bizType:(int)arg5 completion:(id /* block */)arg6;
- (BOOL)markInvited:(id)arg1 bizType:(int)arg2 inviteStatus:(unsigned int)arg3;
- (id)contactStorage;
- (void)setContactStorage:(id)arg1;
- (id)contactUpdateTimes;
- (void)setContactUpdateTimes:(id)arg1;
- (id)contactDetailUpdateTimes;
- (void)setContactDetailUpdateTimes:(id)arg1;
- (BOOL)isUpdating;
- (void)setIsUpdating:(BOOL)arg1;
- (id)updateQueue;
- (void)setUpdateQueue:(id)arg1;
- (void).cxx_destruct;
@end
