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
- (id)camoSession;
- (void)setCamoSession:(id)arg1;
- (void).cxx_destruct;
@end

