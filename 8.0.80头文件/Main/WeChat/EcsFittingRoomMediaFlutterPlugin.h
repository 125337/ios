@interface EcsFittingRoomMediaFlutterPlugin : NSObject <EcsFittingRoomMediaFlowCoordinatorDelegate, MMFlutterPlugin, FittingRoomMediaApi>
{
    MMFlutterViewController * _viewController; // +0x8
    FittingRoomMediaFlutterApi * _flutterApi; // +0x10
    EcsFittingRoomMediaFlowCoordinator * _flowCoordinator; // +0x18
    NSMutableArray * _pendingCompressReplies; // +0x20
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)compressForUploadRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)supportsRetainedCropFlowWithError:(id *)arg1;
- (void)startPhotoSelectionAndCropRequest:(id)arg1 error:(id *)arg2;
- (void)completePhotoProcessingWithError:(id *)arg1;
- (void)resumePhotoCroppingHint:(unsigned long long)arg1 message:(id)arg2 failureDetail:(id)arg3 error:(id *)arg4;
- (void)abortPhotoFlowWithError:(id *)arg1;
- (void)mediaFlowCoordinator:(id)arg1 didReceivePhoto:(id)arg2 completion:(id /* block */)arg3;
- (void)mediaFlowCoordinatorDidCancel:(id)arg1;
- (void)mediaFlowCoordinator:(id)arg1 didFail:(unsigned long long)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (id)flowCoordinator;
- (void)setFlowCoordinator:(id)arg1;
- (id)pendingCompressReplies;
- (void)setPendingCompressReplies:(id)arg1;
- (void).cxx_destruct;
@end
