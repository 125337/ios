@interface MMFinderLivePIPRenderSpaceObject : NSObject
{
    long long _space; // +0x8
    NSMutableArray * _renderList; // +0x10
    NSString * _staticFirstRenderId; // +0x18
    NSString * _staticLastRenderId; // +0x20
    MMFinderLivePIPCustomHandleLogic * _rootHandleLogic; // +0x28
}
+ (id)createRenderSpaceObject:(long long)arg1;
- (BOOL)innerInsertRenderId:(id)arg1 belowAnyRenderObjWithBusinessNames:(id)arg2;
- (BOOL)innerInsertRenderId:(id)arg1 aboveAnyRenderObjWithBusinessNames:(id)arg2;
- (BOOL)innerInsertRenderId:(id)arg1 belowRenderObjWithBusinessIds:(id)arg2;
- (BOOL)innerInsertRenderId:(id)arg1 aboveRenderObjWithBusinessIds:(id)arg2;
- (BOOL)innerInsertStaticFirstRenderId:(id)arg1;
- (BOOL)innerAddStaticLastRenderId:(id)arg1;
- (BOOL)innerInsertRenderId:(id)arg1;
- (BOOL)innerAddRenderId:(id)arg1;
- (BOOL)innerRemoveRenderId:(id)arg1;
- (BOOL)innerClearAllRenderIds;
- (id)innerGetRenderIdListDescription;
- (BOOL)innerClearUnValidRenderIdList;
- (BOOL)isContainerRenderId:(id)arg1;
- (void)safeInsertRenderId:(id)arg1 atIndex:(long long)arg2;
- (void)safeRemoveRenderId:(id)arg1;
- (void)safeAddRenderId:(id)arg1;
- (void)removeAllRenderId;
- (BOOL)checkIndexOverLimit:(long long)arg1;
- (void)checkStaticRenderIdAffectedByNewRenderId:(id)arg1;
- (id)getLastRenderIdWithLiveViewName:(id)arg1;
- (long long)space;
- (void)setSpace:(long long)arg1;
- (id)renderList;
- (void)setRenderList:(id)arg1;
- (id)staticFirstRenderId;
- (void)setStaticFirstRenderId:(id)arg1;
- (id)staticLastRenderId;
- (void)setStaticLastRenderId:(id)arg1;
- (id)rootHandleLogic;
- (void)setRootHandleLogic:(id)arg1;
- (void).cxx_destruct;
@end
