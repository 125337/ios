@interface WAReportJSEvaluateDetailItem : WAReportBaseItem
{
    BOOL _hasPreload; // +0x8
    BOOL _isDownloadCode; // +0x9
    BOOL _isPatch; // +0xa
    BOOL _isHeadlessLaunch; // +0xb
    unsigned int _launchCostTimeInMs; // +0xc
    unsigned int _codeCacheVersion; // +0x10
    unsigned int _preloadTop1FileSize; // +0x14
    unsigned int _preloadTop1FileCostTimeInMs; // +0x18
    unsigned int _preloadTop1FileUseCodeCache; // +0x1c
    unsigned int _preloadTop1FileCodeCacheSize; // +0x20
    unsigned int _preloadTop2FileSize; // +0x24
    unsigned int _preloadTop2FileCostTimeInMs; // +0x28
    unsigned int _preloadTop2FileUseCodeCache; // +0x2c
    unsigned int _preloadTop2FileCodeCacheSize; // +0x30
    unsigned int _preloadTop3FileSize; // +0x34
    unsigned int _preloadTop3FileCostTimeInMs; // +0x38
    unsigned int _preloadTop3FileUseCodeCache; // +0x3c
    unsigned int _preloadTop3FileCodeCacheSize; // +0x40
    unsigned int _launchTop1FileSize; // +0x44
    unsigned int _launchTop1FileCostTimeInMs; // +0x48
    unsigned int _launchTop1FileUseCodeCache; // +0x4c
    unsigned int _launchTop1FileCodeCacheSize; // +0x50
    unsigned int _launchTop2FileSize; // +0x54
    unsigned int _launchTop2FileCostTimeInMs; // +0x58
    unsigned int _launchTop2FileUseCodeCache; // +0x5c
    unsigned int _launchTop2FileCodeCacheSize; // +0x60
    unsigned int _launchTop3FileSize; // +0x64
    unsigned int _launchTop3FileCostTimeInMs; // +0x68
    unsigned int _launchTop3FileUseCodeCache; // +0x6c
    unsigned int _launchTop3FileCodeCacheSize; // +0x70
    unsigned int _preloadFileCount; // +0x74
    unsigned int _preloadFileHitCodeCacheCount; // +0x78
    unsigned int _preloadFileHitCodeCacheRatio; // +0x7c
    unsigned int _coldLaunchFileCount; // +0x80
    unsigned int _coldLaunchFileHitCodeCacheCount; // +0x84
    unsigned int _coldLaunchFileHitCodeCacheRatio; // +0x88
    unsigned int _webViewType; // +0x8c
    unsigned int _coldLaunchFileEvaluateTotalTime; // +0x90
    unsigned int _coldLaunchFileEvaluateTotalRatio; // +0x94
    unsigned int _coldLaunchFileSizeReachCodeCacheSizeDemandCount; // +0x98
    unsigned int _coldLaunchFileSizeReachCodeCacheSizeDemaindRatio; // +0x9c
    unsigned int _gcTimes; // +0xa0
    unsigned int _gcDuration; // +0xa4
    NSString * _preloadTop1File; // +0xa8
    NSString * _preloadTop2File; // +0xb0
    NSString * _preloadTop3File; // +0xb8
    NSString * _launchTop1File; // +0xc0
    NSString * _launchTop2File; // +0xc8
    NSString * _launchTop3File; // +0xd0
    NSString * _preloadAllFileEvaluateDetailBase64; // +0xd8
    NSString * _launchAllFileEvaluateDetailBase64; // +0xe0
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (BOOL)hasPreload;
- (void)setHasPreload:(BOOL)arg1;
- (unsigned int)launchCostTimeInMs;
- (void)setLaunchCostTimeInMs:(unsigned int)arg1;
- (unsigned int)codeCacheVersion;
- (void)setCodeCacheVersion:(unsigned int)arg1;
- (id)preloadTop1File;
- (void)setPreloadTop1File:(id)arg1;
- (unsigned int)preloadTop1FileSize;
- (void)setPreloadTop1FileSize:(unsigned int)arg1;
- (unsigned int)preloadTop1FileCostTimeInMs;
- (void)setPreloadTop1FileCostTimeInMs:(unsigned int)arg1;
- (unsigned int)preloadTop1FileUseCodeCache;
- (void)setPreloadTop1FileUseCodeCache:(unsigned int)arg1;
- (unsigned int)preloadTop1FileCodeCacheSize;
- (void)setPreloadTop1FileCodeCacheSize:(unsigned int)arg1;
- (id)preloadTop2File;
- (void)setPreloadTop2File:(id)arg1;
- (unsigned int)preloadTop2FileSize;
- (void)setPreloadTop2FileSize:(unsigned int)arg1;
- (unsigned int)preloadTop2FileCostTimeInMs;
- (void)setPreloadTop2FileCostTimeInMs:(unsigned int)arg1;
- (unsigned int)preloadTop2FileUseCodeCache;
- (void)setPreloadTop2FileUseCodeCache:(unsigned int)arg1;
- (unsigned int)preloadTop2FileCodeCacheSize;
- (void)setPreloadTop2FileCodeCacheSize:(unsigned int)arg1;
- (id)preloadTop3File;
- (void)setPreloadTop3File:(id)arg1;
- (unsigned int)preloadTop3FileSize;
- (void)setPreloadTop3FileSize:(unsigned int)arg1;
- (unsigned int)preloadTop3FileCostTimeInMs;
- (void)setPreloadTop3FileCostTimeInMs:(unsigned int)arg1;
- (unsigned int)preloadTop3FileUseCodeCache;
- (void)setPreloadTop3FileUseCodeCache:(unsigned int)arg1;
- (unsigned int)preloadTop3FileCodeCacheSize;
- (void)setPreloadTop3FileCodeCacheSize:(unsigned int)arg1;
- (id)launchTop1File;
- (void)setLaunchTop1File:(id)arg1;
- (unsigned int)launchTop1FileSize;
- (void)setLaunchTop1FileSize:(unsigned int)arg1;
- (unsigned int)launchTop1FileCostTimeInMs;
- (void)setLaunchTop1FileCostTimeInMs:(unsigned int)arg1;
- (unsigned int)launchTop1FileUseCodeCache;
- (void)setLaunchTop1FileUseCodeCache:(unsigned int)arg1;
- (unsigned int)launchTop1FileCodeCacheSize;
- (void)setLaunchTop1FileCodeCacheSize:(unsigned int)arg1;
- (id)launchTop2File;
- (void)setLaunchTop2File:(id)arg1;
- (unsigned int)launchTop2FileSize;
- (void)setLaunchTop2FileSize:(unsigned int)arg1;
- (unsigned int)launchTop2FileCostTimeInMs;
- (void)setLaunchTop2FileCostTimeInMs:(unsigned int)arg1;
- (unsigned int)launchTop2FileUseCodeCache;
- (void)setLaunchTop2FileUseCodeCache:(unsigned int)arg1;
- (unsigned int)launchTop2FileCodeCacheSize;
- (void)setLaunchTop2FileCodeCacheSize:(unsigned int)arg1;
- (id)launchTop3File;
- (void)setLaunchTop3File:(id)arg1;
- (unsigned int)launchTop3FileSize;
- (void)setLaunchTop3FileSize:(unsigned int)arg1;
- (unsigned int)launchTop3FileCostTimeInMs;
- (void)setLaunchTop3FileCostTimeInMs:(unsigned int)arg1;
- (unsigned int)launchTop3FileUseCodeCache;
- (void)setLaunchTop3FileUseCodeCache:(unsigned int)arg1;
- (unsigned int)launchTop3FileCodeCacheSize;
- (void)setLaunchTop3FileCodeCacheSize:(unsigned int)arg1;
- (id)preloadAllFileEvaluateDetailBase64;
- (void)setPreloadAllFileEvaluateDetailBase64:(id)arg1;
- (id)launchAllFileEvaluateDetailBase64;
- (void)setLaunchAllFileEvaluateDetailBase64:(id)arg1;
- (BOOL)isDownloadCode;
- (void)setIsDownloadCode:(BOOL)arg1;
- (BOOL)isPatch;
- (void)setIsPatch:(BOOL)arg1;
- (BOOL)isHeadlessLaunch;
- (void)setIsHeadlessLaunch:(BOOL)arg1;
- (unsigned int)preloadFileCount;
- (void)setPreloadFileCount:(unsigned int)arg1;
- (unsigned int)preloadFileHitCodeCacheCount;
- (void)setPreloadFileHitCodeCacheCount:(unsigned int)arg1;
- (unsigned int)preloadFileHitCodeCacheRatio;
- (void)setPreloadFileHitCodeCacheRatio:(unsigned int)arg1;
- (unsigned int)coldLaunchFileCount;
- (void)setColdLaunchFileCount:(unsigned int)arg1;
- (unsigned int)coldLaunchFileHitCodeCacheCount;
- (void)setColdLaunchFileHitCodeCacheCount:(unsigned int)arg1;
- (unsigned int)coldLaunchFileHitCodeCacheRatio;
- (void)setColdLaunchFileHitCodeCacheRatio:(unsigned int)arg1;
- (unsigned int)webViewType;
- (void)setWebViewType:(unsigned int)arg1;
- (unsigned int)coldLaunchFileEvaluateTotalTime;
- (void)setColdLaunchFileEvaluateTotalTime:(unsigned int)arg1;
- (unsigned int)coldLaunchFileEvaluateTotalRatio;
- (void)setColdLaunchFileEvaluateTotalRatio:(unsigned int)arg1;
- (unsigned int)coldLaunchFileSizeReachCodeCacheSizeDemandCount;
- (void)setColdLaunchFileSizeReachCodeCacheSizeDemandCount:(unsigned int)arg1;
- (unsigned int)coldLaunchFileSizeReachCodeCacheSizeDemaindRatio;
- (void)setColdLaunchFileSizeReachCodeCacheSizeDemaindRatio:(unsigned int)arg1;
- (unsigned int)gcTimes;
- (void)setGcTimes:(unsigned int)arg1;
- (unsigned int)gcDuration;
- (void)setGcDuration:(unsigned int)arg1;
- (void).cxx_destruct;
@end

