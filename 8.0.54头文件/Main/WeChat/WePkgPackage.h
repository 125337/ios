@interface WePkgPackage : MMObject
{
    BOOL _isCheckPackage; // +0x8
    NSString * _pkgId; // +0x10
    NSHashTable * _oUsingWebViews; // +0x18
    WePkgRegularConfig * _regularConfig; // +0x20
    WePkgMetaInfo * _metaInfo; // +0x28
    WePkgParser * _parser; // +0x30
    NSMutableDictionary * _dicRid2BigPackageIdx; // +0x38
    NSMutableDictionary * _dicRid2SingleFileInfo; // +0x40
    NSMutableDictionary * _dicRid2DataItem; // +0x48
    NSMutableDictionary * _dicRid2PreloadDataItem; // +0x50
}
+ (id)packageWithPkgId:(id)arg1;
+ (void)cleanPkgStatus;
+ (void)notifyPackageChanged:(id)arg1;
- (id)initWithPkgId:(id)arg1 andRegularConfig:(id)arg2;
- (id)pkgVersion;
- (BOOL)checkIfInFileIndex:(id)arg1;
- (id)getCacheDataForUrl:(id)arg1;
- (id)getCacheDataForRid:(id)arg1;
- (id)innerGetCacheDataForRid:(id)arg1;
- (id)getAllCode;
- (void)preloadResourceForUrl:(id)arg1;
- (void)releasePreloadResources;
- (id)getCurrentPkgKey;
- (BOOL)isValid;
- (int)checkIfPkgFileModified;
- (int)checkOneFileModified:(id)arg1 ExpectFileSize:(unsigned int)arg2 ExpectFileMd5:(id)arg3;
- (void)setupRid2Index;
- (void)setupSingleFileIndex:(id)arg1;
- (void)parseBigPackageFile;
- (void)updateLastUsedTime;
- (id)genRidFromUrl:(id)arg1;
- (void)releaseData;
- (BOOL)inUsing;
- (BOOL)containsWebView:(id)arg1;
- (void)addWebView:(id)arg1;
- (BOOL)removeWebView:(id)arg1;
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (id)oUsingWebViews;
- (void)setOUsingWebViews:(id)arg1;
- (id)regularConfig;
- (void)setRegularConfig:(id)arg1;
- (id)metaInfo;
- (void)setMetaInfo:(id)arg1;
- (id)parser;
- (void)setParser:(id)arg1;
- (BOOL)isCheckPackage;
- (void)setIsCheckPackage:(BOOL)arg1;
- (id)dicRid2BigPackageIdx;
- (void)setDicRid2BigPackageIdx:(id)arg1;
- (id)dicRid2SingleFileInfo;
- (void)setDicRid2SingleFileInfo:(id)arg1;
- (id)dicRid2DataItem;
- (void)setDicRid2DataItem:(id)arg1;
- (id)dicRid2PreloadDataItem;
- (void)setDicRid2PreloadDataItem:(id)arg1;
- (void).cxx_destruct;
@end

