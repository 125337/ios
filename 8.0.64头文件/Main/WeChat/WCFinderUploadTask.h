@interface WCFinderUploadTask : NSObject <PBCoding>
{
    BOOL _preUploadTask; // +0x8
    BOOL _isRetrying; // +0x9
    BOOL _startCdnUpload; // +0xa
    BOOL _bCgiPosting; // +0xb
    BOOL _shouldFileDumpItem; // +0xc
    BOOL _isMusicMVClip; // +0xd
    BOOL _doubleCheckPostAction; // +0xe
    unsigned int _createTime; // +0x10
    unsigned int _retryCount; // +0x14
    unsigned int _enterQueueTime; // +0x18
    unsigned int _firstFailTime; // +0x1c
    unsigned int _lastFailTime; // +0x20
    int _retCode; // +0x24
    int _cgiRetCode; // +0x28
    WCFinderPostSessionModel * _postSession; // +0x30
    unsigned long long _mediaType; // +0x38
    long long _videoMediaHash; // +0x40
    unsigned long long _cdnHeaderParamType; // +0x48
    NSString * _clientId; // +0x50
    long long _totalsize; // +0x58
    unsigned long long _startUploadTimeMs; // +0x60
    unsigned long long _finishUploadTimeMs; // +0x68
    unsigned long long _preUploadTaskStartTimeMs; // +0x70
    unsigned long long _preUploadTaskFinishTimeMs; // +0x78
    long long _errorType; // +0x80
    NSArray * _mediaArray; // +0x88
    unsigned long long _currentUploadingCDNIndex; // +0x90
    NSString * _remoteUrl; // +0x98
    id /* block */ _uploadSuccessBlock; // +0xa0
    id /* block */ _uploadFailBlock; // +0xa8
    id /* block */ _uploadCoverSucBlock; // +0xb0
    id /* block */ _uploadCoverFailBlock; // +0xb8
    FinderMVInfo * _musicMVInfo; // +0xc0
    FinderPostOriginInfo * _originInfo; // +0xc8
    CGSize _thumbSize; // +0xd0
    CGSize _coverSize; // +0xe0
}
+ (void)PBArrayAdd_clientId;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_totalsize;
+ (void)PBArrayAdd_isRetrying;
+ (void)PBArrayAdd_startCdnUpload;
+ (void)PBArrayAdd_bCgiPosting;
+ (void)PBArrayAdd_enterQueueTime;
+ (void)PBArrayAdd_startUploadTimeMs;
+ (void)PBArrayAdd_finishUploadTimeMs;
+ (void)PBArrayAdd_firstFailTime;
+ (void)PBArrayAdd_lastFailTime;
+ (void)PBArrayAdd_retCode;
+ (void)PBArrayAdd_cgiRetCode;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_errorType;
+ (void)PBArrayAdd_mediaArray;
+ (void)PBArrayAdd_currentUploadingCDNIndex;
+ (void)PBArrayAdd_musicMVInfo;
+ (void)PBArrayAdd_isMusicMVClip;
+ (void)PBArrayAdd_postSession;
+ (void)PBArrayAdd_preUploadTaskStartTimeMs;
+ (void)PBArrayAdd_preUploadTaskFinishTimeMs;
+ (void)PBArrayAdd_thumbSize;
+ (void)PBArrayAdd_coverSize;
+ (void)PBArrayAdd_cdnHeaderParamType;
+ (void)PBArrayAdd_videoMediaHash;
+ (void)initialize;
+ (id)finderTaskWithPostSession:(id)arg1;
+ (id)generateClientIdWithDataItem:(id)arg1;
+ (id)generateFinderCommonClientId;
+ (unsigned long long)getNanoSecondTimestamp;
+ (id)_genUploadTaskWithPostSession:(id)arg1;
+ (id)buildUploadMediaTaskWithCDNIndex:(long long *)arg1;
+ (id)createShareCoverMeidaUploadTask:(id)arg1 bindToMediaTask:(id)arg2 task:(id)arg3 clientId:(id)arg4 uploadCDNIndex:(long long *)arg5;
+ (id)createLivePhotoVideoTaskWithInfo:(id)arg1 bindToMediaTask:(id)arg2 taskClientID:(id)arg3 uploadCDNIndex:(long long *)arg4;
+ (id)createCoverMeidaUploadTask:(id)arg1 bindToMediaTask:(id)arg2 task:(id)arg3 clientId:(id)arg4 uploadCDNIndex:(long long *)arg5;
+ (id)genCoverTaskWithPostSession:(id)arg1;
- (id)getPBPropertyTable;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (id)postSession;
- (BOOL)shouldStopRetry;
- (unsigned long long)currentUploadSuccessSize;
- (int)getVideoTypeWithResultPath:(id)arg1;
- (int)getVideoDynamicRangeTypeWithResultPath:(id)arg1;
- (id)genObjectDesc;
- (id)genAttachmentList;
- (id)genAttahcmentFromDataItem:(id)arg1;
- (id)genPostTraceInfo;
- (void)fillCoverUrlToDataItem;
- (id)currentMediaTask;
- (BOOL)isValidMusicMVInfo;
- (BOOL)directCGIPost;
- (id)megaVideoId;
- (id)megaVideoNonceId;
- (void)filledUploadCDNURLToDataItem;
- (id)dataItem;
- (unsigned long long)mediaType;
- (BOOL)isLiveUploadTask;
- (BOOL)isMemberShipQAUploadTask;
- (void)setPostSession:(id)arg1;
- (void)setMediaType:(unsigned long long)arg1;
- (BOOL)preUploadTask;
- (void)setPreUploadTask:(BOOL)arg1;
- (long long)videoMediaHash;
- (void)setVideoMediaHash:(long long)arg1;
- (unsigned long long)cdnHeaderParamType;
- (void)setCdnHeaderParamType:(unsigned long long)arg1;
- (id)clientId;
- (void)setClientId:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (long long)totalsize;
- (void)setTotalsize:(long long)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (CGSize)thumbSize;
- (void)setThumbSize:(CGSize)arg1;
- (CGSize)coverSize;
- (void)setCoverSize:(CGSize)arg1;
- (BOOL)isRetrying;
- (void)setIsRetrying:(BOOL)arg1;
- (BOOL)startCdnUpload;
- (void)setStartCdnUpload:(BOOL)arg1;
- (BOOL)bCgiPosting;
- (void)setBCgiPosting:(BOOL)arg1;
- (unsigned int)enterQueueTime;
- (void)setEnterQueueTime:(unsigned int)arg1;
- (unsigned long long)startUploadTimeMs;
- (void)setStartUploadTimeMs:(unsigned long long)arg1;
- (unsigned long long)finishUploadTimeMs;
- (void)setFinishUploadTimeMs:(unsigned long long)arg1;
- (unsigned int)firstFailTime;
- (void)setFirstFailTime:(unsigned int)arg1;
- (unsigned int)lastFailTime;
- (void)setLastFailTime:(unsigned int)arg1;
- (unsigned long long)preUploadTaskStartTimeMs;
- (void)setPreUploadTaskStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)preUploadTaskFinishTimeMs;
- (void)setPreUploadTaskFinishTimeMs:(unsigned long long)arg1;
- (int)retCode;
- (void)setRetCode:(int)arg1;
- (int)cgiRetCode;
- (void)setCgiRetCode:(int)arg1;
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
- (id)mediaArray;
- (void)setMediaArray:(id)arg1;
- (unsigned long long)currentUploadingCDNIndex;
- (void)setCurrentUploadingCDNIndex:(unsigned long long)arg1;
- (BOOL)shouldFileDumpItem;
- (void)setShouldFileDumpItem:(BOOL)arg1;
- (id)remoteUrl;
- (void)setRemoteUrl:(id)arg1;
- (id /* block */)uploadSuccessBlock;
- (void)setUploadSuccessBlock:(id /* block */)arg1;
- (id /* block */)uploadFailBlock;
- (void)setUploadFailBlock:(id /* block */)arg1;
- (id /* block */)uploadCoverSucBlock;
- (void)setUploadCoverSucBlock:(id /* block */)arg1;
- (id /* block */)uploadCoverFailBlock;
- (void)setUploadCoverFailBlock:(id /* block */)arg1;
- (id)musicMVInfo;
- (void)setMusicMVInfo:(id)arg1;
- (BOOL)isMusicMVClip;
- (void)setIsMusicMVClip:(BOOL)arg1;
- (BOOL)doubleCheckPostAction;
- (void)setDoubleCheckPostAction:(BOOL)arg1;
- (id)originInfo;
- (void)setOriginInfo:(id)arg1;
- (void).cxx_destruct;
@end
