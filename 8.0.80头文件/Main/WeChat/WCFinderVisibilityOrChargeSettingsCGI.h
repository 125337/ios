@interface WCFinderVisibilityOrChargeSettingsCGI : WCFinderBaseCgi
{
    NSString * _qrCodeUrl; // +0x8
    NSMutableArray * _selectChatroomArr; // +0x10
    NSMutableArray * _selectUserNameArr; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failureBlock; // +0x28
}
- (id)initWithFinderQrCode:(id)arg1 selectChatroomArr:(id)arg2 selectUserNameArr:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)qrCodeUrl;
- (void)setQrCodeUrl:(id)arg1;
- (id)selectChatroomArr;
- (void)setSelectChatroomArr:(id)arg1;
- (id)selectUserNameArr;
- (void)setSelectUserNameArr:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
