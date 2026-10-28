@interface CameraScanCombineModelGetter : NSObject
+ (unsigned int)ffeSdkVersion;
+ (id)pathOfModelTmpDir;
+ (id)pathOfModelTmpFolderDir;
+ (id)pathOfModelTmpConfigFile;
+ (id)pathOfModelRootDir;
+ (id)pathOfModelDirWithResVer:(long long)arg1;
+ (id)pathOfModelConfigFileWithResVer:(long long)arg1;
+ (id)resourceNameWithoutFileExt:(id)arg1;
- (id)fetchBundleModelInfo;
- (id)fetchMMResModelInfoWithResVersion:(long long)arg1;
- (id)readLocalModelConfigForXNet;
- (id)fetchXNetModelInfoFromWeVision;
- (BOOL)isModelInfoValid:(id)arg1;
- (BOOL)tryCreateMMResModelInfo:(id)arg1 version:(unsigned int)arg2;
- (void)clearLowerVersionResFileWithResVer:(long long)arg1;
- (id)genFileIndexFromConfig:(id)arg1;
- (BOOL)checkModelFileValid:(id)arg1 fileIndex:(id)arg2;
@end
