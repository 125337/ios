@interface WCFinderFlutterDislikePlugin : NSObject <MMFlutterPlugin, FinderDislikeNativeAPI, WCFinderFeedContentVMExt>
{
    BOOL _dislikeCancellable; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    FinderDislikeFlutterAPI * _flutterAPI; // +0x18
    NSArray * _pendingReasonList; // +0x20
    NSString * _pendingReasonText; // +0x28
}
- (id)initWithContentVM:(id)arg1;
- (id)flutterHalfVC;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)submitFeedDislikeReasonsSelectedReasons:(id)arg1 reasonText:(id)arg2 error:(id *)arg3;
- (void)retryFetchDislikeReasonsWithError:(id *)arg1;
- (void)onDislikePanelDismissDismissType:(unsigned long long)arg1 error:(id *)arg2;
- (id)getPlayPercentWithError:(id *)arg1;
- (void)submitDislikeWithSelectedReasons:(id)arg1 notInterestedReason:(id)arg2;
- (void)onFeedContentFeedbackReasonChanged:(id)arg1;
- (void)onFeedContentFeedbackReasonFetchFail:(id)arg1;
- (void)_updateDislikeReasonFetchResultWithContentVM:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)flutterAPI;
- (void)setFlutterAPI:(id)arg1;
- (BOOL)dislikeCancellable;
- (void)setDislikeCancellable:(BOOL)arg1;
- (id)pendingReasonList;
- (void)setPendingReasonList:(id)arg1;
- (id)pendingReasonText;
- (void)setPendingReasonText:(id)arg1;
- (void).cxx_destruct;
@end
