@interface WCFinderUploadTask : NSObject <PBCoding>
{
    BOOL _preUploadTask; // +0x8
    BOOL _postRequested; // +0x9
    BOOL _backgroundTaskHeld; // +0xa
    BOOL _isRetrying; // +0xb
    BOOL _startCdnUpload; // +0xc
    BOOL _bCgiPosting; // +0xd
    BOOL _shouldFileDumpItem; // +0xe
    BOOL _isMusicMVClip; // +0xf
    BOOL _doubleCheckPostAction; // +0x10
    BOOL _templateCreationCGISuccess; // +0x11
    unsigned int _createTime; // +0x14
    unsigned int _retryCount; // +0x18
    unsigned int _enterQueueTime; // +0x1c
    unsigned int _firstFailTime; // +0x20
    unsigned int _lastFailTime; // +0x24
    int _retCode; // +0x28
    int _cgiRetCode; // +0x2c
    WCFinderPostSessionModel * _postSession; // +0x30
    WCFinderFeedDraft * _draft; // +0x38
    unsigned long long _mediaType; // +0x40
    long long _videoMediaHash; // +0x48
    NSString * _uploadPlanIdentifier; // +0x50
    unsigned long long _cdnHeaderParamType; // +0x58
    NSString * _clientId; // +0x60
    long long _totalsize; // +0x68
    unsigned long long _startUploadTimeMs; // +0x70
    unsigned long long _finishUploadTimeMs; // +0x78
    unsigned long long _preUploadTaskStartTimeMs; // +0x80
    unsigned long long _preUploadTaskFinishTimeMs; // +0x88
    long long _errorType; // +0x90
    NSArray * _mediaArray; // +0x98
    unsigned long long _currentUploadingCDNIndex; // +0xa0
    NSString * _remoteUrl; // +0xa8
    id /* block */ _uploadSuccessBlock; // +0xb0
    id /* block */ _uploadFailBlock; // +0xb8
    id /* block */ _uploadCoverSucBlock; // +0xc0
    id /* block */ _uploadCoverFailBlock; // +0xc8
    FinderMVInfo * _musicMVInfo; // +0xd0
    FinderPostOriginInfo * _originInfo; // +0xd8
    CGSize _thumbSize; // +0xe0
    CGSize _coverSize; // +0xf0
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
+ (void)PBArrayAdd_templateCreationCGISuccess;
+ (void)PBArrayAdd_preUploadTask;
+ (void)PBArrayAdd_postRequested;
+ (void)PBArrayAdd_uploadPlanIdentifier;
+ (void)PBArrayAdd_originInfo;
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
- (id)buildUploadPlanIdentifier;
- (BOOL)hasSameUploadPlanWithTask:(id)arg1;
- (int)getVideoTypeWithResultPath:(id)arg1;
- (int)getVideoDynamicRangeTypeWithResultPath:(id)arg1;
- (id)getEffectCreateContext;
- (id)genObjectDesc;
- (int)postInfoFollowType;
- (id)genAttachmentList;
- (id)genAttahcmentFromDataItem:(id)arg1;
- (id)genPostTraceInfo;
- (void)fillCoverUrlToDataItem;
- (id)currentMediaTask;
- (id)currentMediaInfo;
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
- (id)draft;
- (void)setDraft:(id)arg1;
- (void)setMediaType:(unsigned long long)arg1;
- (BOOL)preUploadTask;
- (void)setPreUploadTask:(BOOL)arg1;
- (BOOL)postRequested;
- (void)setPostRequested:(BOOL)arg1;
- (BOOL)backgroundTaskHeld;
- (void)setBackgroundTaskHeld:(BOOL)arg1;
- (long long)videoMediaHash;
- (void)setVideoMediaHash:(long long)arg1;
- (id)uploadPlanIdentifier;
- (void)setUploadPlanIdentifier:(id)arg1;
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
- (BOOL)templateCreationCGISuccess;
- (void)setTemplateCreationCGISuccess:(BOOL)arg1;
- (id)originInfo;
- (void)setOriginInfo:(id)arg1;
- (void).cxx_destruct;
@end
