@interface WAFlutterMgr : MMRootService <MMServiceProtocol>
{
    NSMutableArray * _skylineRuntimeArr; // +0x8
}
- (id)init;
- (void)dealloc;
- (id)ensureEngineGroup;
- (id)makeSkylineEngine:(id)arg1;
- (void)destroySkylineEngine:(id)arg1;
- (void)addSkylineRuntime:(id)arg1;
- (void)removeSkylineRuntime:(id)arg1;
- (id)skylineRuntimeArr;
- (void)setSkylineRuntimeArr:(id)arg1;
- (void).cxx_destruct;
@end

