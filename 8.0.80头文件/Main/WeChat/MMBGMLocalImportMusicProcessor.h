@interface MMBGMLocalImportMusicProcessor : NSObject
+ (void)processSourceURL:(id)arg1 displayTitle:(id)arg2 sourceName:(id)arg3 identifierTag:(id)arg4 musicSelectSource:(unsigned long long)arg5 authorName:(id)arg6 feedId:(id)arg7 cacheDirectory:(id)arg8 completion:(id /* block */)arg9;
+ (void)processSourceURL:(id)arg1 displayTitle:(id)arg2 sourceName:(id)arg3 identifierTag:(id)arg4 musicSelectSource:(unsigned long long)arg5 authorName:(id)arg6 feedId:(id)arg7 cacheDirectory:(id)arg8 assetOptions:(id)arg9 fallbackMIMEIndex:(unsigned long long)arg10 completion:(id /* block */)arg11;
+ (void)tryFallbackWithSourceURL:(id)arg1 displayTitle:(id)arg2 sourceName:(id)arg3 identifierTag:(id)arg4 musicSelectSource:(unsigned long long)arg5 authorName:(id)arg6 feedId:(id)arg7 cacheDirectory:(id)arg8 fallbackMIMEIndex:(unsigned long long)arg9 error:(id)arg10 completion:(id /* block */)arg11;
+ (void)determineCompatibilityWithAsset:(id)arg1 sourceURL:(id)arg2 completion:(id /* block */)arg3;
+ (void)exportAudioAsset:(id)arg1 sourceURL:(id)arg2 displayTitle:(id)arg3 sourceName:(id)arg4 identifierTag:(id)arg5 musicSelectSource:(unsigned long long)arg6 authorName:(id)arg7 feedId:(id)arg8 cacheDirectory:(id)arg9 completion:(id /* block */)arg10;
+ (void)cleanExpiredAudioCacheInDirectory:(id)arg1;
+ (id)subtitleWithSourceName:(id)arg1 durationSec:(double)arg2;
+ (id)formattedDurationFromSeconds:(double)arg1;
+ (double)durationSecondsFromAsset:(id)arg1;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (void)completeWithData:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
@end
