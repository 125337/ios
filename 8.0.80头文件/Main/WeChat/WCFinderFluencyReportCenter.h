@interface WCFinderFluencyReportCenter : NSObject
{
    NSMutableDictionary * _sceneDict; // +0x8
    NSMutableDictionary * _sceneReportBlockDict; // +0x10
}
- (void)setReportBlock:(id /* block */)arg1 withSceneKey:(id)arg2;
- (void)addPhaseItem:(id)arg1 withPhaseKey:(id)arg2 andSceneKey:(id)arg3;
- (void)removeAllWithSceneKey:(id)arg1;
- (void)removePhaseItemWithPhaseKey:(id)arg1 andSceneKey:(id)arg2;
- (id)phaseItemWithPhaseKey:(id)arg1 andSceneKey:(id)arg2;
- (void)reportWithSceneKey:(id)arg1;
- (id)sceneDict;
- (id)sceneReportBlockDict;
- (void)setSceneDict:(id)arg1;
- (void)setSceneReportBlockDict:(id)arg1;
- (void).cxx_destruct;
@end
