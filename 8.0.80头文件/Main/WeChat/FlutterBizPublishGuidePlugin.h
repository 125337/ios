@interface FlutterBizPublishGuidePlugin : NSObject <MMFlutterPlugin, BizPublishGuideApi>
{
    MMUIViewController * _viewController; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)openRegisterPageReq:(id)arg1 error:(id *)arg2;
- (void)handleNeedChangeCommentIdentityAfterCreated:(id)arg1 photoUsername:(id)arg2;
- (void)sendShareMsgReq:(id)arg1 error:(id *)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
