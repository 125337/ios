@interface QVisCacheManager : NSObject
{
    NSString * _configPath; // +0x8
    NSString * _key; // +0x10
}
- (BOOL)checkIsLayerAuthen:(id)arg1;
- (void)saveLocalData:(id)arg1 layer:(id)arg2;
- (void)writeData:(id)arg1 layer:(id)arg2;
- (id)getLayerCacheData:(id)arg1;
- (void)saveVisualLayerConfig:(id)arg1;
- (id)getLayersDictionaryFromConfigData:(id)arg1;
- (void)saveModelLayerData:(id)arg1 layer:(id)arg2;
- (id)extractModelIDFromDictionary:(id)arg1;
- (id)getModelLayerDataID:(id)arg1;
- (BOOL)validateCacheConfigVersion:(id)arg1 dataVer:(id)arg2 layer:(id)arg3;
- (id)createIdentifier;
- (id)createCommonVector:(id)arg1;
- (void)createInfoFolder:(id)arg1;
- (id)getLayerCachePath:(id)arg1;
- (id)getVisLayerFileName:(id)arg1;
- (void)getLayerCacheDataVerAndSytleVer:(id)arg1 verStruct:(struct *)arg2;
- (id)getModelLayerCachePath:(id)arg1;
- (id)configPath;
- (void)setConfigPath:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end

