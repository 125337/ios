@interface WCAudioInputMuteControl : NSObject
{
    id /* block */ _invalidateHandler; // +0x8
    id /* block */ _updateSceneHandler; // +0x10
}
- (id)initWithInvalidateHandler:(id /* block */)arg1 updateSceneHandler:(id /* block */)arg2;
- (void)updateScene:(int)arg1;
- (void)invalidate;
- (void)dealloc;
- (id /* block */)invalidateHandler;
- (void)setInvalidateHandler:(id /* block */)arg1;
- (id /* block */)updateSceneHandler;
- (void)setUpdateSceneHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
