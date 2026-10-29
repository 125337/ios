@interface WCFinderApplyStorePromotionRightsCgi : WCFinderBaseCgi
{
    int _permissionType; // +0x8
    int _operationType; // +0xc
    NSString * _finderUsername; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithFinderUsername:(id)arg1 permissionType:(int)arg2 operationType:(int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (int)permissionType;
- (void)setPermissionType:(int)arg1;
- (int)operationType;
- (void)setOperationType:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
