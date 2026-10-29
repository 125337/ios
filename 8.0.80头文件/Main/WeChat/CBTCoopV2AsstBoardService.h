@interface CBTCoopV2AsstBoardService : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _pluginClassArray; // +0x8
    NSMutableDictionary * _horizontalPluginCache; // +0x10
}
- (Class)pluginClassForViewModel:(id)arg1;
- (id)moduleIdentifierForPluginClass:(Class)arg1;
- (void)reportParsingForCardWrap:(id)arg1 result:(id)arg2 latencyMs:(long long)arg3 viewModel:(id)arg4;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setupPlugin:(Class)arg1;
- (void)setupCellsForTableView:(id)arg1;
- (id)horizontalCardGroupIdentifierForViewModel:(id)arg1;
- (CGSize)horizontalCardItemSizeForViewModel:(id)arg1 availableWidth:(double)arg2;
- (Class)horizontalCardCellViewClassForViewModel:(id)arg1;
- (id)viewModelForCardWrap:(id)arg1 delegate:(id)arg2;
- (id)cellViewForViewModel:(id)arg1;
- (id)cellViewForCardWrap:(id)arg1 delegate:(id)arg2;
- (id)pluginClassArray;
- (void)setPluginClassArray:(id)arg1;
- (id)horizontalPluginCache;
- (void)setHorizontalPluginCache:(id)arg1;
- (void).cxx_destruct;
@end
