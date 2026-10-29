@interface EcsNativeApiFlutterPlugin : NSObject <IWCAddressControlLogic, SessionSelectControllerDelegate, WCAddressLogicMgrExt, MMFlutterPlugin, EcsNativeApi>
{
    MMFlutterViewController * _viewController; // +0x8
    id /* block */ _selectContactCallback; // +0x10
    id /* block */ _getAllAddressCallback; // +0x18
    id /* block */ _editAddressCallback; // +0x20
    WCAddressControlLogic * _currentLogic; // +0x28
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)openUrlUrl:(id)arg1 error:(id *)arg2;
- (void)selectAddressFromGiver:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)selectContactWithCompletion:(id /* block */)arg1;
- (void)callAppPayPayInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)launchSearchExtData:(id)arg1 completion:(id /* block */)arg2;
- (id)getSearchtExtraSessionDataWithError:(id *)arg1;
- (void)onEcsGiftResendCompletedResult:(id)arg1 error:(id *)arg2;
- (void)onAddressEditEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)sendLocalGiftMessageMsgXml:(id)arg1 recipientUserName:(id)arg2 completion:(id /* block */)arg3;
- (void)enableGiftPageSwipeWithError:(id *)arg1;
- (void)publishEscGiftNotifyEventEventType:(long long)arg1 eventData:(id)arg2 error:(id *)arg3;
- (void)markBoxUnwrapGiftMsgId:(id)arg1 sendType:(long long)arg2 error:(id *)arg3;
- (void)publishEcsGiftOpenEventEventType:(long long)arg1 eventId:(id)arg2 eventData:(id)arg3 completion:(id /* block */)arg4;
- (void)updateEcsGiftMsgStatusGiftMsgId:(id)arg1 statusInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)getEcsGiftImgCacheDirectoryWithError:(id *)arg1;
- (void)nativeRouterRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllAddressFromGiver:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)addNewAddressFromGiver:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)editAddressAddress:(id)arg1 fromGiver:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)AddressInfoCancel;
- (void)notifyAddress:(id)arg1;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)OnModifyAddress:(id)arg1 Error:(id)arg2;
- (id)WCAddress2EcsAddress:(id)arg1;
- (void)getPoiInfoWithCompletion:(id /* block */)arg1;
- (id)getUseAotForChangeSkuWithError:(id *)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id /* block */)selectContactCallback;
- (void)setSelectContactCallback:(id /* block */)arg1;
- (id /* block */)getAllAddressCallback;
- (void)setGetAllAddressCallback:(id /* block */)arg1;
- (id /* block */)editAddressCallback;
- (void)setEditAddressCallback:(id /* block */)arg1;
- (id)currentLogic;
- (void)setCurrentLogic:(id)arg1;
- (void).cxx_destruct;
@end
