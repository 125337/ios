@interface MJTemplateCamoSession : MJTemplateSession
{
    OMJCamoSession * _camoSession; // +0x8
}
- (BOOL)canBeginUseTemplate;
- (BOOL)createMaasSession;
- (BOOL)_createMaasCameraSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_tearDownCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_destroyCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_registerWeVisionModelInfo;
- (void)_enableBeautySkinSegFromXExpr;
- (void)_enableAlgoGenderNewStrategy;
- (void)_enableGanSmooth;
- (void)_enableGanMarker;
- (void)_setGanInferenceType;
- (void)_setFAMaxFrameSize;
- (void)_setBeatySeparatedOcc;
- (void)_enableBeautyScript;
- (id)camoSession;
- (void)setCamoSession:(id)arg1;
- (void).cxx_destruct;
@end
