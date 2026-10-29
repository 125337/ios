@interface TingAIMvGeneratorServiceCpp : UnitRCObjcBaseProxyClass <TingAIMvGeneratorService>
- (id)createMvGenerator;
- (id)getMvGeneratorByListenId:(id)arg1;
- (id)getAllMvGenerators;
- (BOOL)addMvServiceListener:(id)arg1;
- (BOOL)removeMvServiceListener:(id)arg1;
- (void)onMvStatusChanged:(id)arg1 mvInfo:(id)arg2;
@end
