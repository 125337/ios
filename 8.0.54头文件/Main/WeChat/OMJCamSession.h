@interface OMJCamSession : NSObject
{
    OMJCamSink * _camSink; // +0x8
    id <OMJCamSessionDelegate> _delegate; // +0x10
    SharedPtr<XMJCamSession> _backingSession; // +0x18
    shared_ptr<XMJRenderView> _backingRenderView; // +0x20
}
- (id)initWithBackingSession:(const void *)arg1;
- (void)dealloc;
- (void)setupRecordingDidFailCallback;
- (void)setupRecordingTimeDidChangeCallback;
- (void)setupFirstFrameDidPresentCallback;
- (void)setupBeginRequestAIGCCallback;
- (void)startPreviewingWithSettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startPreviewingWithTemplateID:(id)arg1 overridingParams:(id)arg2 settings:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)startPreviewingWithVideoRemixTemplateID:(id)arg1 videoRemixParams:(id)arg2 settings:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updateRenderAspectRatioWithWidth:(int)arg1 height:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)teardownWithCompletionHandler:(id /* block */)arg1;
- (long long)state;
- (void)beginUseTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)beginUseTemplateWithID:(id)arg1 overridingParams:(id)arg2 useTemplateCompletionHandler:(id /* block */)arg3;
- (void)clearTemplateWithCompletionHandler:(id /* block */)arg1;
- (void)clearTemplateWithOverridingParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginUseTemplateAndVideoRemixTemplateWithID:(id)arg1 videoRemixTemplateID:(id)arg2 overridingParams:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)beginUseVideoRemixTemplateWithID:(id)arg1 overridingParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearVideoRemixTemplateWithCompletionHandler:(id /* block */)arg1;
- (void)startRecordingWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startRecordingWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 auditCaptureSettings:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)stopRecordingWithShouldTeardownSession:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)exportPhotoWithVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(BOOL)arg3 outputFilePath:(id)arg4 shouldTeardownSession:(BOOL)arg5 useRenderAspectRatio:(BOOL)arg6 photoSettings:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)exportPhotoWithVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(BOOL)arg3 shouldTeardownSession:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (void)exportPhotoWithVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 clockwiseRotation:(int)arg2 isMirrored:(BOOL)arg3 shouldTeardownSession:(BOOL)arg4 useRenderAspectRatio:(BOOL)arg5 completionHandler:(id /* block */)arg6;
- (void)pausePreviewingWithCompletionHandler:(id /* block */)arg1;
- (void)resumePreviewingWithCompletionHandler:(id /* block */)arg1;
- (BOOL)connectToRenderView:(const void *)arg1 error:(id *)arg2;
- (id)renderView;
- (void)setBeautyAdjustmentWithDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearBeautyAdjustmentDescWithCompletionHandler:(id /* block */)arg1;
- (id)getBeautyAdjustmentDesc;
- (void)setFilterDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearFilterDescWithCompletionHandler:(id /* block */)arg1;
- (id)getFilterDesc;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginPlayBackgroundMusicWithDesc:(id)arg1 shouldRestartPreview:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)clearBackgroundMusicWithCompletionHandler:(id /* block */)arg1;
- (id)getCurrentBackgroundMusicDesc;
- (void)pauseBackgroundMusicWithCompletionHandler:(id /* block */)arg1;
- (void)resumeBackgroundMusicWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)getPreferredCameraDimensionLevel;
- (void)setAudioDeviceType:(long long)arg1;
- (void)toggleFaceGenderWithCompletionHandler:(id /* block */)arg1;
- (void)setLocationInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginUseAssetInputWithAssetInfo:(id)arg1 assetInputSettings:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)beginUseCameraInputWithCompletionHandler:(id /* block */)arg1;
- (void)startExportingVideoWithOutputFilePath:(id)arg1 recordingSettings:(id)arg2 auditCaptureSettings:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelExportingVideoWithCompletionHandler:(id /* block */)arg1;
- (void)updateAIGCResultWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)backingRenderViewCon;
- (id)getCamGestureRecognizerSettings;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)camSink;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (SharedPtr<XMJCamSession>)backingSession;
- (void)setBackingSession:(SharedPtr<XMJCamSession>)arg1;
- (shared_ptr<XMJRenderView>)backingRenderView;
- (void)setBackingRenderView:(shared_ptr<XMJRenderView>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

