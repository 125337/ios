@interface MMLiveInteractionGiftMaterialRenderLogic : NSObject
{
    BOOL _isGiftResourcePlaying; // +0x8
    unsigned int _resourcePlayTime; // +0xc
    id /* block */ _beginCallback; // +0x10
    id /* block */ _endCallback; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    long long _currentResourceObjectId; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)startMaterialRenderWithResPath:(id)arg1;
- (id)getMaterialResourceIdVector;
- (void)removeMaterialResource:(id)arg1;
- (void)setupAnimationCallback:(id)arg1;
- (id)liveTask;
- (BOOL)isGiftResourcePlaying;
- (void)setIsGiftResourcePlaying:(BOOL)arg1;
- (id /* block */)beginCallback;
- (void)setBeginCallback:(id /* block */)arg1;
- (id /* block */)endCallback;
- (void)setEndCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (long long)currentResourceObjectId;
- (void)setCurrentResourceObjectId:(long long)arg1;
- (unsigned int)resourcePlayTime;
- (void)setResourcePlayTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

