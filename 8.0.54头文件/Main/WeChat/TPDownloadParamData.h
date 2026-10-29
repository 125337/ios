@interface TPDownloadParamData : NSObject
{
    BOOL _isCharge; // +0x8
    BOOL _needEncryptCache; // +0x9
    BOOL _isOffline; // +0xa
    BOOL _disableExpandDownloadUrl; // +0xb
    BOOL _isCacheCopyFirst; // +0xc
    BOOL _isNeedFlowControl; // +0xd
    NSString * _url; // +0x10
    NSArray * _backUrl; // +0x18
    long long _dlType; // +0x20
    long long _taskType; // +0x28
    NSString * _downloadFileID; // +0x30
    NSString * _vid; // +0x38
    NSArray * _urlCdnIDList; // +0x40
    NSArray * _urlCdnIDHttpHeaderList; // +0x48
    long long _urlExpireTime; // +0x50
    long long _fileSize; // +0x58
    long long _fileDuration; // +0x60
    NSString * _playDefinition; // +0x68
    NSString * _currentFormat; // +0x70
    long long _currentFormatID; // +0x78
    NSDictionary * _formatInfo; // +0x80
    long long _starTimeMS; // +0x88
    long long _endTimeMS; // +0x90
    long long _clipCount; // +0x98
    long long _clipNo; // +0xa0
    NSString * _fileMD5; // +0xa8
    NSString * _base; // +0xb0
    NSString * _linkVid; // +0xb8
    NSString * _m3u8; // +0xc0
    long long _tm; // +0xc8
    long long _fp2p; // +0xd0
    NSString * _testId; // +0xd8
    NSString * _flowId; // +0xe0
    long long _preloadSize; // +0xe8
    long long _preloadDuration; // +0xf0
    NSString * _savePath; // +0xf8
    long long _exceptDelayMs; // +0x100
    NSString * _nonce; // +0x108
    NSString * _deckey; // +0x110
    NSString * _random; // +0x118
    NSArray * _defInfoList; // +0x120
    NSArray * _secondaryM3u8List; // +0x128
    long long _bandwidthLevel; // +0x130
    NSDictionary * _extInfoMap; // +0x138
    NSString * _sceneId; // +0x140
    NSString * _pcdnChargeId; // +0x148
    long long _preloadHttpStartTimeMs; // +0x150
}
- (id)initWithDownloadFileID:(id)arg1;
- (id)initWithDownloadFileID:(id)arg1 downloadType:(long long)arg2;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)backUrl;
- (void)setBackUrl:(id)arg1;
- (long long)dlType;
- (void)setDlType:(long long)arg1;
- (long long)taskType;
- (void)setTaskType:(long long)arg1;
- (id)downloadFileID;
- (void)setDownloadFileID:(id)arg1;
- (id)vid;
- (void)setVid:(id)arg1;
- (id)urlCdnIDList;
- (void)setUrlCdnIDList:(id)arg1;
- (id)urlCdnIDHttpHeaderList;
- (void)setUrlCdnIDHttpHeaderList:(id)arg1;
- (long long)urlExpireTime;
- (void)setUrlExpireTime:(long long)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (long long)fileDuration;
- (void)setFileDuration:(long long)arg1;
- (id)playDefinition;
- (void)setPlayDefinition:(id)arg1;
- (id)currentFormat;
- (void)setCurrentFormat:(id)arg1;
- (long long)currentFormatID;
- (void)setCurrentFormatID:(long long)arg1;
- (id)formatInfo;
- (void)setFormatInfo:(id)arg1;
- (BOOL)isCharge;
- (void)setIsCharge:(BOOL)arg1;
- (BOOL)needEncryptCache;
- (void)setNeedEncryptCache:(BOOL)arg1;
- (long long)starTimeMS;
- (void)setStarTimeMS:(long long)arg1;
- (long long)endTimeMS;
- (void)setEndTimeMS:(long long)arg1;
- (long long)clipCount;
- (void)setClipCount:(long long)arg1;
- (long long)clipNo;
- (void)setClipNo:(long long)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (id)base;
- (void)setBase:(id)arg1;
- (id)linkVid;
- (void)setLinkVid:(id)arg1;
- (id)m3u8;
- (void)setM3u8:(id)arg1;
- (long long)tm;
- (void)setTm:(long long)arg1;
- (long long)fp2p;
- (void)setFp2p:(long long)arg1;
- (id)testId;
- (void)setTestId:(id)arg1;
- (id)flowId;
- (void)setFlowId:(id)arg1;
- (long long)preloadSize;
- (void)setPreloadSize:(long long)arg1;
- (long long)preloadDuration;
- (void)setPreloadDuration:(long long)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (BOOL)isOffline;
- (void)setIsOffline:(BOOL)arg1;
- (long long)exceptDelayMs;
- (void)setExceptDelayMs:(long long)arg1;
- (id)nonce;
- (void)setNonce:(id)arg1;
- (id)deckey;
- (void)setDeckey:(id)arg1;
- (id)random;
- (void)setRandom:(id)arg1;
- (id)defInfoList;
- (void)setDefInfoList:(id)arg1;
- (id)secondaryM3u8List;
- (void)setSecondaryM3u8List:(id)arg1;
- (long long)bandwidthLevel;
- (void)setBandwidthLevel:(long long)arg1;
- (BOOL)disableExpandDownloadUrl;
- (void)setDisableExpandDownloadUrl:(BOOL)arg1;
- (id)extInfoMap;
- (void)setExtInfoMap:(id)arg1;
- (id)sceneId;
- (void)setSceneId:(id)arg1;
- (id)pcdnChargeId;
- (void)setPcdnChargeId:(id)arg1;
- (BOOL)isCacheCopyFirst;
- (void)setIsCacheCopyFirst:(BOOL)arg1;
- (BOOL)isNeedFlowControl;
- (void)setIsNeedFlowControl:(BOOL)arg1;
- (long long)preloadHttpStartTimeMs;
- (void)setPreloadHttpStartTimeMs:(long long)arg1;
- (void).cxx_destruct;
@end

