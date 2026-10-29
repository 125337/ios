@interface MJTemplateCameraSession : MJTemplateSession
{
    OMJCamSession * _maasCameraSession; // +0x8
}
- (BOOL)canBeginUseTemplate;
- (id)camResourceManager;
- (BOOL)createMaasSession;
- (BOOL)_createMaasCameraSession;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_tearDownCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_destroyCameraSessionWithCompletionHandler:(id /* block */)arg1;
- (id)maasCameraSession;
- (void)setMaasCameraSession:(id)arg1;
- (void).cxx_destruct;
@end
