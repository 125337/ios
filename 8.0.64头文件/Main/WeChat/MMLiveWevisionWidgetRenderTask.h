@interface MMLiveWevisionWidgetRenderTask : NSObject
{
    BOOL _isStartRender; // +0x8
    BOOL _isEnding; // +0x9
    int _prior; // +0xc
    unsigned int _renderVersion; // +0x10
    MMLiveWevisionWidgetObj * _widget; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    NSString * _renderTaskId; // +0x28
    unsigned long long _renderState; // +0x30
    long long _renderScriptId; // +0x38
    id /* block */ _endCompletion; // +0x40
    MMLiveStorageCleanupPinningToken * _resourcePinningToken; // +0x48
}
+ (id)baseResourceDir;
- (id)initWithWidget:(id)arg1 prior:(int)arg2 taskId:(id)arg3;
- (void)updateAttributesFromWidget:(id)arg1;
- (void)updatePrior:(int)arg1;
- (void)render;
- (void)endRender:(id /* block */)arg1;
- (void)createResources:(id /* block */)arg1;
- (void)addRenderScript:(id /* block */)arg1;
- (void)sendRenderMessage:(id /* block */)arg1;
- (void)removeRenderScript:(id /* block */)arg1;
- (void)clearResources:(id /* block */)arg1;
- (void)setRenderState:(unsigned long long)arg1;
- (void)increaseRenderVersion;
- (BOOL)checkNeedRender;
- (BOOL)checkIsEnding;
- (void)endComplete;
- (BOOL)isCurrentRenderStateInPre;
- (BOOL)clearResourcesIfNeeded;
- (BOOL)adjustRenderJsonConfig;
- (id)getTemplateResourcePath;
- (id)getActualResourcePath;
- (id)getRenderJsonConfigFilePath;
- (id)getRenderFrameDirPath;
- (id)getRenderFrameTextureFileName;
- (id)liveTask;
- (id)instanceId;
- (id)widget;
- (void)setWidget:(id)arg1;
- (int)prior;
- (void)setPrior:(int)arg1;
- (BOOL)isStartRender;
- (void)setIsStartRender:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)renderTaskId;
- (void)setRenderTaskId:(id)arg1;
- (unsigned long long)renderState;
- (long long)renderScriptId;
- (void)setRenderScriptId:(long long)arg1;
- (unsigned int)renderVersion;
- (void)setRenderVersion:(unsigned int)arg1;
- (BOOL)isEnding;
- (void)setIsEnding:(BOOL)arg1;
- (id /* block */)endCompletion;
- (void)setEndCompletion:(id /* block */)arg1;
- (id)resourcePinningToken;
- (void)setResourcePinningToken:(id)arg1;
- (void).cxx_destruct;
@end
