@interface MJMovieComposingShootTemplateAssetBuilder : NSObject
+ (id)buildRecordedVideoAssetInfosWithViewModel:(id)arg1 error:(id *)arg2;
+ (BOOL)appendAssetInfosWithOriginAssets:(id)arg1 toAssetInfos:(id)arg2 error:(id *)arg3;
+ (void)fillError:(id *)arg1 code:(long long)arg2 description:(id)arg3 assetInfo:(id)arg4;
@end
