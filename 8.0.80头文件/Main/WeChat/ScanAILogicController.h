@interface ScanAILogicController : NSObject <IStreamVoiceInputExt>
{
    BOOL _voiceTransEndReceivedForCurrentRequest; // +0x8
    BOOL _voiceImageFallbackReadyForCurrentRequest; // +0x9
    BOOL _shouldStopVoiceAfterInputReady; // +0xa
    BOOL _imageIntentRecognitionEnabled; // +0xb
    BOOL _waitingImageIntentForCurrentRequest; // +0xc
    unsigned int _currentVoiceInputId; // +0x10
    id <ScanAILogicControllerDelegate> _delegate; // +0x18
    long long _state; // +0x20
    unsigned long long _currentRequestId; // +0x28
    ScanQRCodeLogicController * _scanQRCodeLogicController; // +0x30
    NSObject<OS_dispatch_queue> * _imageProcessQueue; // +0x38
    ScanAIReporter * _reporter; // +0x40
    long long _currentTriggerType; // +0x48
    unsigned long long _snapshotRequestId; // +0x50
    NSString * _currentImagePath; // +0x58
    NSString * _currentQuestionText; // +0x60
    NSString * _latestVoiceText; // +0x68
    ScanAITimingProfile * _timingProfile; // +0x70
    StreamVoiceInputLogic * _voiceInputLogic; // +0x78
    unsigned long long _voiceActiveRequestId; // +0x80
    ScanAIImageIntentFacade * _imageIntentFacade; // +0x88
    ScanAIIntentResult * _currentImageIntentResult; // +0x90
    double _imageIntentStartTime; // +0x98
    double _clickInteractionTime; // +0xa0
    unsigned long long _clickInteractionRequestId; // +0xa8
}
+ (double)imageJPEGQuality;
+ (CGSize)cameraPreviewSize:(CGSize)arg1 forImageOrientation:(long long)arg2;
+ (id)centerCroppedImage:(id)arg1 targetAspectRatio:(double)arg2;
- (id)initWithScanQRCodeLogicController:(id)arg1;
- (void)dealloc;
- (BOOL)isRunning;
- (void)recordClickInteractionForRequestId:(unsigned long long)arg1;
- (QBarSnapshot)latestQBarSnapshot;
- (unsigned long long)startClickRequest;
- (unsigned long long)startClickRequestWithSourceImage:(id)arg1;
- (unsigned long long)startLongPressRequest;
- (void)startVoiceForLongPressRequestIfNeeded:(unsigned long long)arg1;
- (void)finishLongPressRequest;
- (void)cancelCurrentRequest;
- (void)prepareNewRequestWithTriggerType:(long long)arg1;
- (void)resetCurrentRequestPayload;
- (void)prewarmVoice;
- (void)startVoiceForCurrentRequest;
- (void)stopVoiceForCurrentRequest;
- (void)cancelVoiceForRequestId:(unsigned long long)arg1;
- (void)teardownVoice;
- (void)resetVoiceRequestState;
- (BOOL)shouldHandleVoiceCallbackWithInputId:(unsigned int)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)onVoiceTransError:(unsigned int)arg1 errorCode:(long long)arg2;
- (void)onVoiceSilentTooLong:(unsigned int)arg1;
- (void)startSnapshotForCurrentRequest;
- (void)startSourceImageForCurrentRequest:(id)arg1;
- (void)handleCapturedImageResult:(id)arg1 requestId:(unsigned long long)arg2;
- (void)dispatchCapturedPreviewImage:(id)arg1 requestId:(unsigned long long)arg2;
- (void)startImageIntentRecognitionIfNeededWithImage:(id)arg1 requestId:(unsigned long long)arg2;
- (void)handleImageIntentResult:(id)arg1 requestId:(unsigned long long)arg2 startTime:(double)arg3;
- (void)finishImageIntentWithFallbackForRequestId:(unsigned long long)arg1 reason:(id)arg2 startTime:(double)arg3;
- (void)tryDispatchReadyResultForRequestId:(unsigned long long)arg1;
- (void)dispatchReadyResultWithImagePath:(id)arg1 questionText:(id)arg2 requestId:(unsigned long long)arg3;
- (void)failCurrentRequestWithDescription:(id)arg1 code:(long long)arg2 stage:(id)arg3 detail:(id)arg4 requestId:(unsigned long long)arg5;
- (void)handleCaptureErrorWithDescription:(id)arg1 requestId:(unsigned long long)arg2;
- (void)imageCaptureResultFromScannerSnapshotWithRequestId:(unsigned long long)arg1 imageOrientation:(long long)arg2 cameraPreviewSize:(CGSize)arg3 completion:(id /* block */)arg4;
- (void)imageCaptureResultFromSourceImage:(id)arg1 requestId:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)resetTimingProfileForCurrentRequestWithTriggerType:(long long)arg1 interactionTime:(double)arg2;
- (double)timingNow;
- (double)timingCostFrom:(double)arg1 to:(double)arg2;
- (void)recordTimingProfileStage:(id)arg1 requestId:(unsigned long long)arg2 costMS:(double)arg3 detail:(id)arg4;
- (void)flushTimingProfileForRequestId:(unsigned long long)arg1;
- (void)recordExternalTimingStageNow:(id)arg1 requestId:(unsigned long long)arg2 detail:(id)arg3;
- (void)flushExternalTimingProfileForRequestId:(unsigned long long)arg1;
- (void)transitionToState:(long long)arg1 requestId:(unsigned long long)arg2;
- (id)stateName:(long long)arg1;
- (id)triggerTypeName:(long long)arg1;
- (void)prepareImageIntentFacadeIfNeeded;
- (id)imageIntentFacade;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (unsigned long long)currentRequestId;
- (void)setCurrentRequestId:(unsigned long long)arg1;
- (id)scanQRCodeLogicController;
- (void)setScanQRCodeLogicController:(id)arg1;
- (id)imageProcessQueue;
- (void)setImageProcessQueue:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (long long)currentTriggerType;
- (void)setCurrentTriggerType:(long long)arg1;
- (unsigned long long)snapshotRequestId;
- (void)setSnapshotRequestId:(unsigned long long)arg1;
- (id)currentImagePath;
- (void)setCurrentImagePath:(id)arg1;
- (id)currentQuestionText;
- (void)setCurrentQuestionText:(id)arg1;
- (id)latestVoiceText;
- (void)setLatestVoiceText:(id)arg1;
- (BOOL)voiceTransEndReceivedForCurrentRequest;
- (void)setVoiceTransEndReceivedForCurrentRequest:(BOOL)arg1;
- (BOOL)voiceImageFallbackReadyForCurrentRequest;
- (void)setVoiceImageFallbackReadyForCurrentRequest:(BOOL)arg1;
- (id)timingProfile;
- (void)setTimingProfile:(id)arg1;
- (id)voiceInputLogic;
- (void)setVoiceInputLogic:(id)arg1;
- (unsigned long long)voiceActiveRequestId;
- (void)setVoiceActiveRequestId:(unsigned long long)arg1;
- (unsigned int)currentVoiceInputId;
- (void)setCurrentVoiceInputId:(unsigned int)arg1;
- (BOOL)shouldStopVoiceAfterInputReady;
- (void)setShouldStopVoiceAfterInputReady:(BOOL)arg1;
- (BOOL)imageIntentRecognitionEnabled;
- (void)setImageIntentRecognitionEnabled:(BOOL)arg1;
- (void)setImageIntentFacade:(id)arg1;
- (id)currentImageIntentResult;
- (void)setCurrentImageIntentResult:(id)arg1;
- (BOOL)waitingImageIntentForCurrentRequest;
- (void)setWaitingImageIntentForCurrentRequest:(BOOL)arg1;
- (double)imageIntentStartTime;
- (void)setImageIntentStartTime:(double)arg1;
- (double)clickInteractionTime;
- (void)setClickInteractionTime:(double)arg1;
- (unsigned long long)clickInteractionRequestId;
- (void)setClickInteractionRequestId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
