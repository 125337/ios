@interface EcsNativeApiFlutterPlugin : NSObject <IWCAddressControlLogic, SessionSelectControllerDelegate, MMFlutterPlugin, EcsNativeApi>
{
    MMFlutterViewController * _viewController; // +0x8
    id /* block */ _selectAddressCallback; // +0x10
    id /* block */ _selectContactCallback; // +0x18
    UIView * _parentEmbedContainerView; // +0x20
    UIView * _embedContainerView; // +0x28
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)openUrlUrl:(id)arg1 error:(id *)arg2;
- (void)selectAddressFromGiver:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)selectContactWithCompletion:(id /* block */)arg1;
- (void)callPayPayInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)launchSearchExtData:(id)arg1 completion:(id /* block */)arg2;
- (id)getSearchtExtraSessionDataWithError:(id *)arg1;
- (void)onAddressEditEnd:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)launchMiniProgramBundle:(id)arg1 completion:(id /* block */)arg2;
- (void)sendLocalGiftMessageMsgXml:(id)arg1 recipientUserName:(id)arg2 completion:(id /* block */)arg3;
- (void)enableGiftPageSwipeWithError:(id *)arg1;
- (void)handleChangeSkuResp:(id)arg1 completion:(id /* block */)arg2;
- (void)handleChangeEndpointResp:(id)arg1 completion:(id /* block */)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id /* block */)selectAddressCallback;
- (void)setSelectAddressCallback:(id /* block */)arg1;
- (id /* block */)selectContactCallback;
- (void)setSelectContactCallback:(id /* block */)arg1;
- (id)parentEmbedContainerView;
- (void)setParentEmbedContainerView:(id)arg1;
- (id)embedContainerView;
- (void)setEmbedContainerView:(id)arg1;
- (void).cxx_destruct;
@end

