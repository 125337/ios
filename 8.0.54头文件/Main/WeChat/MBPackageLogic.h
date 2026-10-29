@interface MBPackageLogic : NSObject
{
    NSMutableDictionary * dicCacheFileInfo; // +0x8
    id /* block */ onFinishDownloadPkgBlock; // +0x10
    BOOL _downloadFinished; // +0x18
    unsigned int _version; // +0x1c
    int _debugModeType; // +0x20
    unsigned int _devUin; // +0x24
    NSString * _appId; // +0x28
    NSURL * _wxapkgPathUrl; // +0x30
}
- (void)dealloc;
- (id)initWithAppid:(id)arg1 version:(unsigned int)arg2 debugMode:(unsigned long long)arg3 devUin:(unsigned int)arg4;
- (void)setupDownloadFinishedBlock:(id /* block */)arg1;
- (void)download;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)setupFileInfoByWxaPkgPath:(id)arg1;
- (BOOL)hasLocalCacheDataWithFullUrl:(id)arg1;
- (id)getCacheFileInfoWithFullUrl:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1;
- (id)getLocalCacheDataWithFullUrl:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)unpackPkgWithFilePath:(id)arg1 unpackLib:(void *)arg2;
- (id)getCheckSumMD5:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (int)debugModeType;
- (void)setDebugModeType:(int)arg1;
- (unsigned int)devUin;
- (void)setDevUin:(unsigned int)arg1;
- (BOOL)downloadFinished;
- (void)setDownloadFinished:(BOOL)arg1;
- (id)wxapkgPathUrl;
- (void)setWxapkgPathUrl:(id)arg1;
- (void).cxx_destruct;
@end

