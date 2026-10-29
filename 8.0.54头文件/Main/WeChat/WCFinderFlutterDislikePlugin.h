@interface WCFinderFlutterDislikePlugin : NSObject <MMFlutterPlugin, FinderDislikeNativeAPI, WCFinderFeedContentVMExt>
{
    BOOL _dislikeV2Enabled; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    FinderDislikeFlutterAPI * _flutterAPI; // +0x18
}
- (id)initWithContentVM:(id)arg1;
- (id)flutterHalfVC;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)submitFeedDislikeReasonsSelectedReasons:(id)arg1 error:(id *)arg2;
- (void)retryFetchDislikeReasonsWithError:(id *)arg1;
- (void)submitDislikeWithSelectedReasons:(id)arg1;
- (void)onFeedContentFeedbackReasonChanged:(id)arg1;
- (void)onFeedContentFeedbackReasonFetchFail:(id)arg1;
- (void)_updateDislikeReasonFetchResultWithContentVM:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)flutterAPI;
- (void)setFlutterAPI:(id)arg1;
- (BOOL)dislikeV2Enabled;
- (void)setDislikeV2Enabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

