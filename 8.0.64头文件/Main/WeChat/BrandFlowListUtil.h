@interface BrandFlowListUtil : NSObject
+ (void)preloadArticleDataIfNeededWithUrls:(id)arg1;
+ (int)finderGetCommentScene;
+ (id)convertFlutterOpenParams2BrandFlowListModel:(id)arg1;
+ (id)converFlowListItemData2BrandFlowListModel:(id)arg1;
+ (id)convertJSApiImmerseItemList2BrandFlowListModel:(id)arg1;
+ (void)assignFeedContentVMForModels:(id)arg1 completion:(id /* block */)arg2;
+ (void)batchGetFinderObjectsWithExportIdsIfNeeded:(id)arg1 completion:(id /* block */)arg2;
+ (id)convertExportIds2finderRequestIds:(id)arg1;
+ (id)dataItemForExportId:(id)arg1 localResults:(id)arg2;
+ (id)genNeedSupplyModelWithUsrName:(id)arg1;
+ (BOOL)isNeedSupplyWithModels:(id)arg1;
+ (id)needSupplyUsrNamesWithModels:(id)arg1;
@end
