@interface EcsActionHandler_shareTimeline : EcsActionHandler_Base <EcsShareTimelineResultDelegate>
- (void)handleAction:(id)arg1;
- (void)shareTimeline:(id)arg1;
- (id)testJumpInfoBase64;
- (void)onFailWithErrMsg:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)onCancelCommitForCommitView:(id)arg1 isSaveDraft:(BOOL)arg2;
- (void)onDoneCommitForCommitView:(id)arg1;
@end
