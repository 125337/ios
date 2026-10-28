@interface OVBVPBridgeSDK : NSObject
+ (void)applicationDidEnterBackground;
+ (void)applicationWillEnterForeground;
+ (void)registerFont:(id)arg1 path:(id)arg2;
+ (id)registerSticker:(id)arg1 idSuffix:(id)arg2;
+ (id)stickerMaterialIDWithIDSuffix:(id)arg1;
+ (void)cleanupIntermediateFiles:(id /* block */)arg1;
+ (void)cleanupAssetsWithExcludedPHLocalIdentifiers:(id)arg1 excludedMoviePaths:(id)arg2 completion:(id /* block */)arg3;
+ (void)cleanupAssetsWithExcludedLocalIdentifiers:(id)arg1 completion:(id /* block */)arg2;
+ (void)deleteAssetsDirectoriesWithDir:(const void *)arg1 excludedAssetIds:(const void *)arg2;
+ (void)registerAllMaterialsUnderDirectory:(id)arg1;
+ (void)registerSingleMaterialWithDirectory:(id)arg1;
+ (void)registerSingleMaterialWithDirectory:(id)arg1 specifiedMaterialID:(id)arg2;
+ (void)registerAllMaterialsWithoutVersionCheckUnderDirectory:(id)arg1;
+ (void)registerSingleMaterialWithoutVersionCheckWithDirectory:(id)arg1;
+ (void)registerSingleMaterialWithoutVersionCheckWithDirectory:(id)arg1 specifiedMaterialID:(id)arg2;
+ (void)cleanupMaterialsWithIDs:(id)arg1;
+ (CGSize)calculateNormalizedLowerThirdContentSizeWithID:(id)arg1 lowerThirdBuildData:(id)arg2 aspecRatio:(unsigned long long)arg3;
+ (CGSize)calculateLowerThirdContentSizeWithID:(id)arg1 lowerThirdBuildData:(id)arg2;
+ (id)getFontNamesForLowerThirdWithID:(id)arg1;
+ (id)getTextLayerMetadatasForLowerThirdWithID:(id)arg1;
+ (id)getTextLayerMetadatasForLowerThirdWithID:(id)arg1 ltLayerID:(int)arg2;
+ (BOOL)shouldLivePhotoClipUseAsImageForPostProcs:(id)arg1;
+ (id)URLForLogDirectory;
+ (id)renderEngineEAGLContext;
@end
