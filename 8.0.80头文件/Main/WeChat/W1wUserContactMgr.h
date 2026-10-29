@interface W1wUserContactMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isUpdating; // +0x8
    W1wUserContactStorage * _contactStorage; // +0x10
    NSMutableDictionary * _contactUpdateTimes; // +0x18
    NSMutableArray * _updateQueue; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getContact:(id)arg1;
- (void)forceUpdateContactForUsrName:(id)arg1;
- (void)updateUserNames:(id)arg1;
- (void)checkQueue;
- (void)batchFetchContactDetailInfo:(id)arg1 isInQueue:(BOOL)arg2;
- (void)fetchContactDetailInfo:(id)arg1;
- (void)onReceiveResponse:(id)arg1 isInQueue:(BOOL)arg2;
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
