@interface CBTAsstBoardLegacyRenderRegistry : NSObject
+ (id)pluginClassArray;
+ (void)registerPluginClass:(Class)arg1;
+ (void)registerAllBuiltInPlugins;
+ (id)probeWithItemType:(id)arg1 cardWrap:(id)arg2 pageMode:(long long)arg3;
+ (id)buildRenderNodeWithItemType:(id)arg1 cardWrap:(id)arg2 pageMode:(long long)arg3 viewModelDelegate:(id)arg4 cellDelegate:(id)arg5 width:(double)arg6;
+ (id)contextWithItemType:(id)arg1 cardWrap:(id)arg2 pageMode:(long long)arg3;
@end
