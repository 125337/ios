@interface MMLiveInteractionGiftRenderLogic : NSObject
{
    BOOL _isRenderWillEnd; // +0x8
    MMLiveInteractionGiftMaterialRenderLogic * _materialRenderLogic; // +0x10
    MMLiveInteractionGiftLuaScriptRenderLogic * _luaScriptRenderLogic; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    long long _currentRenderType; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultData;
- (void)createMaterialRenderLogic;
- (void)createLuaScriptRenderLogic;
- (BOOL)startInteractionGiftWithResPath:(id)arg1;
- (id)getCurInteractionResourceIdVector;
- (void)removeInteractionResource:(id)arg1;
- (id)liveTask;
- (BOOL)isGiftResourcePlaying;
- (long long)checkInteractionGiftRenderType:(id)arg1;
- (void)logForInteractionGiftRes:(id)arg1;
- (void)onCurrRenderEnd;
- (id)materialRenderLogic;
- (void)setMaterialRenderLogic:(id)arg1;
- (id)luaScriptRenderLogic;
- (void)setLuaScriptRenderLogic:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)currentRenderType;
- (void)setCurrentRenderType:(long long)arg1;
- (BOOL)isRenderWillEnd;
- (void)setIsRenderWillEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end
