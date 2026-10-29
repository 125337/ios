@interface WeEffectBaseAdapter : NSObject
{
    NSDictionary * _param; // +0x8
    MMWeEffectManager * _weeffectManager; // +0x10
    NSString * _appID; // +0x18
    NSString * _baseURL; // +0x20
    NSObject<WeEffectBaseAdapterDelegate> * _delegate; // +0x28
    NSMutableArray * _imgFetchArray; // +0x30
    NSMutableArray * _zipFetchArray; // +0x38
    NSOperationQueue * _queueCustomEffect; // +0x40
}
+ (id)weeffectType;
- (id)initWithAppID:(id)arg1 baseURL:(id)arg2 param:(id)arg3 weeffectManager:(id)arg4 delegate:(id)arg5;
- (void)load;
- (void)interrupt;
- (id)queueCustomEffect;
- (id)imgFetchArray;
- (id)zipFetchArray;
- (void)onImageFetchDone:(BOOL)arg1;
- (void)onZipFetchDoneWithPath:(id)arg1;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)addImageFetchWithName:(id)arg1 urlString:(id)arg2 md5:(id)arg3;
- (id)getImagePathWithName:(id)arg1;
- (void)addZipFetchWithStickerInfo:(id)arg1;
- (id)getDefaultDirectoryWithUsage:(id)arg1 dirName:(id)arg2;
- (id)getRootDirectory;
- (id)getDefaultDirectory;
- (id)getSystemTemporaryDirectory;
- (void)endWithErrorMessage:(id)arg1;
- (void)doImageFetch;
- (void)doZipFetch;
- (void)writeJsonToDefaultDir:(id)arg1;
- (void)writeJson:(id)arg1 toPath:(id)arg2;
- (id)convertHexColorToRGBArray:(id)arg1;
- (void)fetchZipWithParam:(id)arg1 toTargetDirectory:(id)arg2;
- (void)unzipFileWithPath:(id)arg1 targetDirectory:(id)arg2 param:(id)arg3;
- (BOOL)isZipDirValid:(id)arg1 param:(id)arg2;
- (void)loadImagePathWithURL:(id)arg1 md5:(id)arg2;
- (BOOL)copyFileWithPath:(id)arg1 toPath:(id)arg2;
- (void)setImagePathWithURL:(id)arg1 path:(id)arg2;
- (id)param;
- (void)setParam:(id)arg1;
- (id)weeffectManager;
- (void)setWeeffectManager:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)baseURL;
- (void)setBaseURL:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setImgFetchArray:(id)arg1;
- (void)setZipFetchArray:(id)arg1;
- (void)setQueueCustomEffect:(id)arg1;
- (void).cxx_destruct;
@end
