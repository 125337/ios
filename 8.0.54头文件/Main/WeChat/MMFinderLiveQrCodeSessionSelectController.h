@interface MMFinderLiveQrCodeSessionSelectController : SessionSelectController
{
    UINavigationController * _navVC; // +0x68
    NSString * _qrCodeUri; // +0x70
}
- (void)callbackDelegate;
- (void)sendVisibilityOrChargeSettingsReq:(id)arg1 selectChatroomArr:(id)arg2 selectUserNameArr:(id)arg3;
- (void)getQrSelectiveGoInfoFailWithErrorCode:(unsigned int)arg1 errorMsg:(id)arg2;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (id)qrCodeUri;
- (void)setQrCodeUri:(id)arg1;
- (void).cxx_destruct;
@end

