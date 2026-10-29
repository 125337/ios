@interface _TtC6WeChat25MagicEcsNirvanaBizCreator : NSObject <_TtP25MagicCardStarterProtocols27IMagicCardStarterBizCreator_>
{
    void * bizName; // +0x8
    void * udrProjectId; // +0x18
    id <IMagicBaseDelegate> delegate; // +0x28
    id <_TtP25MagicCardStarterProtocols23MagicSimpleViewDelegate_> viewDelegate; // +0x30
    double autoDestroyTime; // +0x38
    BOOL useSkwasmMode; // +0x40
    BOOL enableJitNativeRender; // +0x41
    UIView * jitNativeRenderContainer; // +0x48
}
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)udrProjectId;
- (void)setUdrProjectId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (double)autoDestroyTime;
- (void)setAutoDestroyTime:(double)arg1;
- (BOOL)useSkwasmMode;
- (void)setUseSkwasmMode:(BOOL)arg1;
- (BOOL)enableJitNativeRender;
- (void)setEnableJitNativeRender:(BOOL)arg1;
- (id)jitNativeRenderContainer;
- (void)setJitNativeRenderContainer:(id)arg1;
- (id)initWithBizName:(id)arg1 udrProjectId:(id)arg2 delegate:(id)arg3 viewDelegate:(id)arg4 autoDestroyTime:(double)arg5 useSkwasmMode:(BOOL)arg6;
- (id)create;
- (id)init;
- (void).cxx_destruct;
@end
