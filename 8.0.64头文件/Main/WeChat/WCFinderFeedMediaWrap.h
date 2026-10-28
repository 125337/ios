@interface WCFinderFeedMediaWrap : WCPlayerHttpMediaWrap
{
    BOOL _isHLS; // +0x8
    BOOL _isPlayUnifiedURL; // +0x9
    BOOL _hotFlag; // +0xa
    BOOL _isOnPlayState; // +0xb
    BOOL _hadDownloadSuccessfulInLocal; // +0xc
    BOOL _hasCache; // +0xd
    BOOL _hasAddPreloadArray; // +0xe
    BOOL _isLowPriorityTask; // +0xf
    BOOL _ignoreMultiplePhase; // +0x10
    BOOL _preloadByIdleMonitor; // +0x11
    BOOL _isUseSystemPlayer; // +0x12
    int _videoPlayDuration; // +0x14
    int _preloadDuration; // +0x18
    int _qualityScore; // +0x1c
    int _useTransEnhanceInfo; // +0x20
    int _scene; // +0x24
    NSString * _mediaURL; // +0x28
    NSString * _thumbURL; // +0x30
    unsigned long long _mediaType; // +0x38
    NSString * _hashKey; // +0x40
    NSString * _thumbHashKey; // +0x48
    double _createTime; // +0x50
    NSString * _tid; // +0x58
    NSMutableArray * _specsArray; // +0x60
    NSMutableArray * _hlsSpecsArray; // +0x68
    NSMutableArray * _hdrSpecsArray; // +0x70
    NSString * _coverURL; // +0x78
    NSString * _coverHashKey; // +0x80
    NSString * _decodeKey; // +0x88
    NSString * _fullThumbURL; // +0x90
    NSString * _fullThumbHashKey; // +0x98
    NSMutableSet * _groupIDSet; // +0xa0
    NSString * _urlToken; // +0xa8
    NSString * _thumbUrlToken; // +0xb0
    NSString * _coverUrlToken; // +0xb8
    NSString * _fullThumbUrlToken; // +0xc0
    NSString * _fileFormat; // +0xc8
    NSString * _transEnhanceInfo; // +0xd0
    NSString * _encryptKey; // +0xd8
    NSString * _encryptIV; // +0xe0
    double _mediaWidth; // +0xe8
    double _mediaHeight; // +0xf0
    WCFinderFullScreenEditRectModel * _editRectModel; // +0xf8
    unsigned long long _currentMaxBitrate; // +0x100
    WCPlayerReporter * _reporter; // +0x108
    FinderMediaAndPlayerQoEInfo * _playerInfo; // +0x110
    unsigned long long _setMaxBitrate; // +0x118
    NSString * _currentVideoPath; // +0x120
    FinderObjectScalingInfo * _scalingInfo; // +0x128
    FinderLivePhotoMediaInfo * _livePhoto; // +0x130
    FinderMediaSpec * _suggestMediaSpec; // +0x138
    NSString * _currentLocalFileFormat; // +0x140
    unsigned long long _currentLocalFileDownloadPercent; // +0x148
    FinderMediaSpec * _currentLocalFileMediaSpec; // +0x150
    NSData * _finderCtrlInfo; // +0x158
    unsigned long long _preloadIndex; // +0x160
    NSString * _currentTempVideoPath; // +0x168
    FinderMediaSpec * _currentMediaSpec; // +0x170
    WCFinderVideoPreDownloadInfo * _currentLocalPreloadInfo; // +0x178
    WCFinderFeedPreloadObjectInfo * _feedPreloadObjectInfo; // +0x180
    NSMutableArray * _arrDataSource; // +0x188
    NSString * _targetSpecH266InfoStr; // +0x190
}
+ (id)mediaWrapOfContentVM:(id)arg1;
+ (id)mediaWrapOfContentVM:(id)arg1 codingFormatType:(id)arg2;
+ (id)mediaWrapWithMediaInfo:(id)arg1 scene:(int)arg2 codingFormatType:(id)arg3;
+ (id)mediaWrapWith:(id)arg1 scene:(int)arg2;
+ (id)mediaWrapForOfflinePreloadWith:(id)arg1 scene:(int)arg2;
+ (id)mediaWrapWith:(id)arg1 ignoreCache:(BOOL)arg2 scene:(int)arg3;
+ (id)mediaWrapWith:(id)arg1 currentMediaPath:(id)arg2 scene:(int)arg3;
+ (id)mediaWrapWith:(id)arg1 useSystemPlayer:(BOOL)arg2 scene:(int)arg3;
+ (id)mediaWrapWith:(id)arg1 liveCoverPreferredAspectRatio:(unsigned long long)arg2 scene:(int)arg3;
+ (id)mediaWrapWithParam:(id)arg1;
+ (void)checkShouldImmigratePreCache:(id)arg1;
+ (BOOL)moveMediaFileFromPath:(id)arg1 toPath:(id)arg2;
+ (id)hashStringWithKey:(id)arg1;
+ (id)hashStringWithMediaInfo:(id)arg1;
- (void)wcfSetImageLoadOperation:(id)arg1;
- (id)wcfImageLoadOperation;
- (void)wcfCancelCurrentImageLoad;
- (void)wcfStartDownloadWithPriority:(BOOL)arg1 isThumb:(BOOL)arg2;
- (void)wcfStartDownloadFullScreenThumbWithPriority:(BOOL)arg1;
- (void)wcfStartDownloadWithType:(long long)arg1;
- (void)wcfStopDownload;
- (BOOL)isLivePhoto;
- (id)getLivePhotoVideoPlayArgs;
- (id)livePhotoUrlWithToken;
- (id)livePhotoVideoPath;
- (id)livePhotoWrapIdentifier;
- (id)livePhotoDecodeKey;
- (id)codingFormatType;
- (id)genArrDataSourceWith:(id)arg1;
- (void)setPlayerExperimentalParameters:(id)arg1;
- (void)updateLutColorWithPlayerInfo:(id)arg1 colorLutType:(unsigned long long)arg2;
- (id)getPlayerIsMute:(BOOL)arg1 notExistPlayMode:(unsigned long long)arg2 andPlayerScene:(unsigned long long)arg3;
- (BOOL)getPIPSwitch;
- (BOOL)isUploadFinishFeed;
- (BOOL)needPreload;
- (id)getMediaWrapIdentifierHash;
- (id)getMediaWrapThumbHash;
- (id)getMediaWrapCoverHash;
- (id)getMediaWrapFullThumbHash;
- (BOOL)mediaWrapIdentifierHashIsEqual:(id)arg1;
- (BOOL)isFormatVideoExist;
- (long long)getDownloadVideoSize;
- (long long)getPreloadVideoSize;
- (BOOL)isDownloadH265File;
- (BOOL)isDownloadH266File;
- (id)description;
- (id)printMediaWrapInfo;
- (unsigned long long)currentDownloadBitrate;
- (double)fileFormatLocalDownloadPercent;
- (BOOL)checkFinishFirstFrameDownload;
- (unsigned long long)downloadPhase;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapThumbIdentifier;
- (id)getThumbIdentifier;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (unsigned int)getPreloadPercent;
- (unsigned int)preloadPercentByCurrentPreloadInfo;
- (id)getMediaWrapUrl;
- (id)downloadPreviewTempPath;
- (id)downloadFullScreenThumbTempPath;
- (id)downloadCoverTempPath;
- (id)downloadImageTempPath;
- (id)imageDownloadPathArray;
- (int)getQualityScore:(id)arg1;
- (BOOL)getMediaSpecHasLevelOrder;
- (unsigned long long)getH266MediaSpecHighestLevelOrder;
- (id)getOptimalFileFormat;
- (id)currentDownloadInLocalFormat;
- (void)setGroupID:(id)arg1;
- (id)currentPreloadInLocalFormat;
- (void)updateCurrentPreloadInfo;
- (id)getOptimalFileFormatWithCurrentDownloadFileFormat:(id)arg1;
- (BOOL)specHasHigherOrEqualHdrPriority:(id)arg1 over:(id)arg2;
- (unsigned long long)getH266MediaSpecHighestBitrate;
- (id)getH266MediaSpec:(id)arg1 maxBitrate:(int)arg2;
- (id)getMaxDownloadFormatByGlobalInfo:(long long)arg1;
- (id)findTargetMediaSpecWithFormat:(id)arg1;
- (id)findCodeMediaSpecArrayWithCode:(id)arg1;
- (BOOL)isSpecsArrayEmpty;
- (id)getCurrentMediaSpecWithFormat:(id)arg1;
- (unsigned int)getH266MaxCap:(id)arg1;
- (id)getMaxMediaSpecWithCodingFormat:(id)arg1;
- (BOOL)checkMediaSpecHasVideoBitrate;
- (id)getTargetMediaSpecWithMaxBitRate:(unsigned long long)arg1 codingFormat:(id)arg2 onlyUseVideoBR:(BOOL)arg3 correspondingH265LevelOrder:(unsigned long long)arg4;
- (id)sortDescendingWith:(id)arg1;
- (id)mediaURLWithToken;
- (void)switchTargetFileFormat;
- (id)getFormatInfo;
- (void)updatePlayerInfo:(id)arg1 playbackInfo:(id)arg2;
- (id)mediaURL;
- (void)setMediaURL:(id)arg1;
- (id)thumbURL;
- (void)setThumbURL:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (int)videoPlayDuration;
- (void)setVideoPlayDuration:(int)arg1;
- (int)preloadDuration;
- (void)setPreloadDuration:(int)arg1;
- (id)hashKey;
- (void)setHashKey:(id)arg1;
- (id)thumbHashKey;
- (void)setThumbHashKey:(id)arg1;
- (double)createTime;
- (void)setCreateTime:(double)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)specsArray;
- (void)setSpecsArray:(id)arg1;
- (id)hlsSpecsArray;
- (void)setHlsSpecsArray:(id)arg1;
- (id)hdrSpecsArray;
- (void)setHdrSpecsArray:(id)arg1;
- (id)coverURL;
- (void)setCoverURL:(id)arg1;
- (id)coverHashKey;
- (void)setCoverHashKey:(id)arg1;
- (id)decodeKey;
- (void)setDecodeKey:(id)arg1;
- (id)fullThumbURL;
- (void)setFullThumbURL:(id)arg1;
- (id)fullThumbHashKey;
- (void)setFullThumbHashKey:(id)arg1;
- (id)groupIDSet;
- (void)setGroupIDSet:(id)arg1;
- (id)urlToken;
- (void)setUrlToken:(id)arg1;
- (id)thumbUrlToken;
- (void)setThumbUrlToken:(id)arg1;
- (id)coverUrlToken;
- (void)setCoverUrlToken:(id)arg1;
- (id)fullThumbUrlToken;
- (void)setFullThumbUrlToken:(id)arg1;
- (id)fileFormat;
- (void)setFileFormat:(id)arg1;
- (int)qualityScore;
- (void)setQualityScore:(int)arg1;
- (id)transEnhanceInfo;
- (void)setTransEnhanceInfo:(id)arg1;
- (int)useTransEnhanceInfo;
- (void)setUseTransEnhanceInfo:(int)arg1;
- (BOOL)isHLS;
- (void)setIsHLS:(BOOL)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)encryptIV;
- (void)setEncryptIV:(id)arg1;
- (BOOL)isPlayUnifiedURL;
- (void)setIsPlayUnifiedURL:(BOOL)arg1;
- (BOOL)hotFlag;
- (void)setHotFlag:(BOOL)arg1;
- (double)mediaWidth;
- (void)setMediaWidth:(double)arg1;
- (double)mediaHeight;
- (void)setMediaHeight:(double)arg1;
- (id)editRectModel;
- (void)setEditRectModel:(id)arg1;
- (unsigned long long)currentMaxBitrate;
- (void)setCurrentMaxBitrate:(unsigned long long)arg1;
- (BOOL)isOnPlayState;
- (void)setIsOnPlayState:(BOOL)arg1;
- (BOOL)hadDownloadSuccessfulInLocal;
- (void)setHadDownloadSuccessfulInLocal:(BOOL)arg1;
- (BOOL)hasCache;
- (void)setHasCache:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (BOOL)hasAddPreloadArray;
- (void)setHasAddPreloadArray:(BOOL)arg1;
- (unsigned long long)setMaxBitrate;
- (void)setSetMaxBitrate:(unsigned long long)arg1;
- (id)currentVideoPath;
- (void)setCurrentVideoPath:(id)arg1;
- (id)scalingInfo;
- (void)setScalingInfo:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)isLowPriorityTask;
- (void)setIsLowPriorityTask:(BOOL)arg1;
- (BOOL)ignoreMultiplePhase;
- (void)setIgnoreMultiplePhase:(BOOL)arg1;
- (BOOL)preloadByIdleMonitor;
- (void)setPreloadByIdleMonitor:(BOOL)arg1;
- (id)livePhoto;
- (void)setLivePhoto:(id)arg1;
- (id)suggestMediaSpec;
- (void)setSuggestMediaSpec:(id)arg1;
- (id)currentLocalFileFormat;
- (void)setCurrentLocalFileFormat:(id)arg1;
- (unsigned long long)currentLocalFileDownloadPercent;
- (void)setCurrentLocalFileDownloadPercent:(unsigned long long)arg1;
- (id)currentLocalFileMediaSpec;
- (void)setCurrentLocalFileMediaSpec:(id)arg1;
- (id)finderCtrlInfo;
- (void)setFinderCtrlInfo:(id)arg1;
- (unsigned long long)preloadIndex;
- (void)setPreloadIndex:(unsigned long long)arg1;
- (id)currentTempVideoPath;
- (void)setCurrentTempVideoPath:(id)arg1;
- (id)currentMediaSpec;
- (void)setCurrentMediaSpec:(id)arg1;
- (BOOL)isUseSystemPlayer;
- (void)setIsUseSystemPlayer:(BOOL)arg1;
- (id)currentLocalPreloadInfo;
- (void)setCurrentLocalPreloadInfo:(id)arg1;
- (id)feedPreloadObjectInfo;
- (void)setFeedPreloadObjectInfo:(id)arg1;
- (id)arrDataSource;
- (void)setArrDataSource:(id)arg1;
- (id)targetSpecH266InfoStr;
- (void)setTargetSpecH266InfoStr:(id)arg1;
- (void).cxx_destruct;
@end
