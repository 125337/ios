@interface TingAudioClassifyUtils : NSObject
+ (unsigned int)recognizeAudio:(id)arg1 relativePath:(id)arg2;
+ (unsigned int)_realRecognizeAudio:(id)arg1 relativePath:(id)arg2;
+ (BOOL)_safeCall:(id /* block */)arg1;
+ (id)crashProtectMMKV;
+ (id)classifyCacheMMKV;
+ (unsigned int)_readCacheType:(id)arg1;
+ (void)_writeCacheType:(unsigned int)arg1 forRelativePath:(id)arg2;
+ (id)_cacheKeyForPath:(id)arg1 modelVersion:(id)arg2;
+ (id)modelVersion;
+ (id)genReportExtraData:(id)arg1;
+ (void)commReport:(unsigned int)arg1;
+ (void)commReport:(unsigned int)arg1 extraData:(id)arg2;
@end

