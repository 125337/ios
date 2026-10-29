@interface CBTAsstBoardLegacyCellRegistry : NSObject
+ (id)registeredCellMap;
+ (void)registerCellClass:(Class)arg1 forReuseId:(id)arg2;
+ (void)registerAllBoardLegacyCells;
+ (Class)cellClassForReuseId:(id)arg1;
+ (id)buildCellWithReuseId:(id)arg1 viewModel:(id)arg2 delegate:(id)arg3 width:(double)arg4;
@end
