@interface MMLiveInteractionGiftLuaScriptRenderLogic : NSObject
{
    BOOL _isGiftResourcePlaying; // +0x8
    BOOL _isRenderStart; // +0x9
    id /* block */ _beginCallback; // +0x10
    id /* block */ _endCallback; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    unsigned long long _renderSeq; // +0x28
    NSMutableDictionary * _renderScriptDict; // +0x30
    NSMutableDictionary * _resourcePinningTokens; // +0x38
}
+ (id)baseResourceDir;
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultData;
- (BOOL)startLuaScriptRenderWithResPath:(id)arg1;
- (id)getLuaScriptResourceIdVector;
- (void)removeLuaScriptResource:(id)arg1;
- (BOOL)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (id)liveTask;
- (void)increaseRenderSeq;
- (void)startRenderWithResPath:(id)arg1;
- (void)addRenderScriptWithResPath:(id)arg1 completion:(id /* block */)arg2;
- (void)removeLuaScriptResourceWithClearSrc:(long long)arg1;
- (void)onScriptBegin:(long long)arg1;
- (void)onScriptEnd:(long long)arg1 withResult:(long long)arg2 renderSeq:(unsigned long long)arg3;
- (BOOL)checkIsCurrRender:(unsigned long long)arg1;
- (void)clearTags;
- (void)registerRenderScriptId:(long long)arg1 withResPath:(id)arg2 renderSeq:(unsigned long long)arg3;
- (void)unRegisterRenderScriptId:(long long)arg1;
- (BOOL)isContainRenderScriptId:(long long)arg1;
- (id)getRenderTaskWithScriptId:(long long)arg1;
- (id)getAllRenderScriptIds;
- (void)createActualResPathWithInitialResPath:(id)arg1 completion:(id /* block */)arg2;
- (id)createActualResPathWithSuffix:(id)arg1;
- (id)getScriptResourcePath:(id)arg1;
- (void)removeResPath:(id)arg1;
- (id)getLocalResourcePath;
- (BOOL)isGiftResourcePlaying;
- (void)setIsGiftResourcePlaying:(BOOL)arg1;
- (id /* block */)beginCallback;
- (void)setBeginCallback:(id /* block */)arg1;
- (id /* block */)endCallback;
- (void)setEndCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isRenderStart;
- (void)setIsRenderStart:(BOOL)arg1;
- (unsigned long long)renderSeq;
- (void)setRenderSeq:(unsigned long long)arg1;
- (id)renderScriptDict;
- (void)setRenderScriptDict:(id)arg1;
- (id)resourcePinningTokens;
- (void)setResourcePinningTokens:(id)arg1;
- (void).cxx_destruct;
@end
