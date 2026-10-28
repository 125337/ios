@interface LiveHybridBlueGiftNativeApiFlutterPlugin : NSObject <MMFlutterPlugin, LiveHybridBlueGiftNativeApi>
{
    UIViewController * _viewController; // +0x8
}
- (void)onAttachedToViewController:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)currentFinderLiveTaskIfMatchMultiplatformTaskID:(id)arg1;
- (void)fetchBlueGiftCreateOrderID:(id)arg1 taskID:(id)arg2 completion:(id /* block */)arg3;
- (void)sendBlueGiftItemID:(id)arg1 taskID:(id)arg2 completion:(id /* block */)arg3;
- (void)showSendPrizesHistoryTaskID:(id)arg1 error:(id *)arg2;
- (void)rememberHaveSignedGiveBlueGiftUserAgreementTaskID:(id)arg1 error:(id *)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
