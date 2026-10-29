@interface EcsJsApiInnerLogic_shareTimeline : EcsJsApiInnerLogic <WCCommitViewResultDelegate, WCBaseCommitViewResultDelegate>
- (void)jumpShareTimelineWithInfo:(id)arg1 shareExtInfo:(id)arg2 currentVC:(id)arg3;
- (void)jumpShareVideoToTimelineWithInfo:(id)arg1 shareExtInfo:(id)arg2 currentVC:(id)arg3;
- (void)jumpShareImageToTimelineWithInfo:(id)arg1 shareExtInfo:(id)arg2 currentVC:(id)arg3;
- (id)arrMMImageForShareInfo:(id)arg1 shareExtInfo:(id)arg2;
- (id)genWCTimelineExtBean:(id)arg1 shareExtInfo:(id)arg2;
- (id)genUploadTaskWithVideoPath:(id)arg1 withThumbPath:(id)arg2;
- (void)jumpShareH5ToTimelineWithInfo:(id)arg1 shareExtInfo:(id)arg2 currentVC:(id)arg3;
- (void)onFailWithErrMsg:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)onCancelCommitForCommitView:(id)arg1 isSaveDraft:(BOOL)arg2;
- (void)onDoneCommitForCommitView:(id)arg1;
@end
