@interface WAJSContextPlugin_Camera : WAJSContextPluginBase <WAPluginComponent_CameraDelegate, WAJSContextPlugin_NativeViewsRootViewProtocol>
{
    BOOL _cameraOpened; // +0x8
    NSString * _appId; // +0x10
    WAPluginComponent_Camera * _cameraComponent; // +0x18
}
- (id)init;
- (unsigned int)insertCameraWithConfig:(id)arg1 pos:(CGRect)arg2 cameraId:(unsigned int)arg3 parentId:(unsigned int)arg4 size:(CGSize *)arg5;
- (void)resizeVideo:(unsigned int)arg1 frame:(CGRect)arg2;
- (void)operateCamera:(id)arg1 cameraId:(unsigned int)arg2 compelete:(id /* block */)arg3;
- (void)removeCamera;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (id)getChildView:(unsigned int)arg1;
- (BOOL)removeChildView:(unsigned int)arg1;
- (void)onCameraStateChanged:(BOOL)arg1;
- (id)cameraComponent;
- (void)setCameraComponent:(id)arg1;
- (void).cxx_destruct;
@end
