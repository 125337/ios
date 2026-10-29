@interface WAAgentSceneInstanceHandle : NSObject
{
    BOOL _valid; // +0x8
    NSString * _clientSessionId; // +0x10
    unsigned long long _scene; // +0x18
    WAAgentVisibilitySource * _visibilitySource; // +0x20
    id <WAAgentSceneInstanceDelegate> _delegate; // +0x28
    NSString * _debugName; // +0x30
    id <WAAgentSceneInstanceHandleLifecycleOwner> _lifecycleOwner; // +0x38
}
- (id)initWithClientSessionId:(id)arg1 scene:(unsigned long long)arg2 visibilitySource:(id)arg3 delegate:(id)arg4 debugName:(id)arg5 lifecycleOwner:(id)arg6;
- (void)setValid:(BOOL)arg1;
- (void)invalidate;
- (void)markInvalidatedByLifecycleOwner;
- (id)clientSessionId;
- (void)setClientSessionId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)visibilitySource;
- (void)setVisibilitySource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isValid;
- (id)debugName;
- (void)setDebugName:(id)arg1;
- (id)lifecycleOwner;
- (void)setLifecycleOwner:(id)arg1;
- (void).cxx_destruct;
@end
