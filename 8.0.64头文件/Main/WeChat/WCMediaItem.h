@interface WCMediaItem : NSObject <NSCoding, WCPlayerMediaExt, PBCoding>
{
    BOOL bSnsScene; // +0x8
    BOOL bSupoortValidateMd5; // +0x9
    BOOL _likeFlag; // +0xa
    BOOL _bUseXorEncrypt; // +0xb
    BOOL _isAd; // +0xc
    BOOL _skipCompress; // +0xd
    BOOL _shouldUseDefaultMediaType; // +0xe
    unsigned int createTime; // +0x10
    int _type; // +0x14
    int _subType; // +0x18
    int _totalSize; // +0x1c
    int _attachVideoTotalTime; // +0x20
    int _likeCount; // +0x24
    int _commentCount; // +0x28
    int _withCount; // +0x2c
    int _index; // +0x30
    unsigned int _predownloadPercent; // +0x34
    unsigned int _predownNetType; // +0x38
    NSString * _tid; // +0x40
    NSString * _mid; // +0x48
    NSString * _bgFileId; // +0x50
    NSString * _title; // +0x58
    NSString * _desc; // +0x60
    NSString * _titlePattern; // +0x68
    NSString * _descPattern; // +0x70
    NSString * _source; // +0x78
    NSString * _userData; // +0x80
    NSString * _postName; // +0x88
    NSMutableArray * _previewUrls; // +0x90
    WCUrl * _dataUrl; // +0x98
    WCUrl * _lowBandUrl; // +0xa0
    WCUrl * _attachUrl; // +0xa8
    WCUrl * _attachThumbUrl; // +0xb0
    WCUrl * _uhdUrl; // +0xb8
    WCUrl * _hdUrl; // +0xc0
    NSString * _attachShareTitle; // +0xc8
    WCUrl * _songAlbumUrl; // +0xd0
    NSString * _songLyric; // +0xd8
    NSString * _singerName; // +0xe0
    NSString * _albumName; // +0xe8
    NSString * _musicGenre; // +0xf0
    NSString * _identification; // +0xf8
    NSString * _hdAlbumThumbUrl; // +0x100
    unsigned long long _issueDate; // +0x108
    NSMutableArray * _likeUsers; // +0x110
    NSMutableArray * _commentUsers; // +0x118
    NSMutableArray * _withUsers; // +0x120
    long long _entrance; // +0x128
    unsigned long long _xorEncrpyKey; // +0x130
    NSArray * _emoticonItemList; // +0x138
    WCMomentsBizInfo * _bizInfo; // +0x140
    WCMediaEcsInfo * _ecsInfo; // +0x148
    WCMomentFinderInfo * _finderInfo; // +0x150
    NSString * _gameSnsVideoDataUrl; // +0x158
    NSString * _gameSnsVideoThumbUrl; // +0x160
    NSString * _noPreDownloadRange; // +0x168
    double _videoDuration; // +0x170
    long long _videoPreloadEntrance; // +0x178
    WCMediaDownloadStat * _dataDownloadStat; // +0x180
    WCMediaDownloadStat * _thumbDownloadStat; // +0x188
    NSString * _videoColdRuleAll; // +0x190
    NSString * _videoColdRuleHD; // +0x198
    NSString * _videoColdRuleLD; // +0x1a0
    NSString * _ctxVersion; // +0x1a8
    NSString * _ctxInfo; // +0x1b0
    WCMediaItem * _livePhotoMediaItem; // +0x1b8
    long long _livePhotoStillImageTimeMs; // +0x1c0
    double _livePhotoVideoScale; // +0x1c8
    NSString * _RISKY_savedSightCompositeTaskId; // +0x1d0
    WCSightVideoCompositeTask * _cachedSightCompositeTask; // +0x1d8
    CGSize _imgSize; // +0x1e0
}
+ (id)WCCover_mediaItemFromServerObject:(id)arg1;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_titlePattern;
+ (void)PBArrayAdd_descPattern;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_userData;
+ (void)PBArrayAdd_postName;
+ (void)PBArrayAdd_previewUrls;
+ (void)PBArrayAdd_dataUrl;
+ (void)PBArrayAdd_lowBandUrl;
+ (void)PBArrayAdd_attachUrl;
+ (void)PBArrayAdd_attachThumbUrl;
+ (void)PBArrayAdd_attachShareTitle;
+ (void)PBArrayAdd_songAlbumUrl;
+ (void)PBArrayAdd_songLyric;
+ (void)PBArrayAdd_imgSize;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_likeUsers;
+ (void)PBArrayAdd_commentCount;
+ (void)PBArrayAdd_commentUsers;
+ (void)PBArrayAdd_withCount;
+ (void)PBArrayAdd_withUsers;
+ (void)PBArrayAdd_attachVideoTotalTime;
+ (void)PBArrayAdd_xorEncrpyKey;
+ (void)PBArrayAdd_bUseXorEncrypt;
+ (void)PBArrayAdd_isAd;
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_gameSnsVideoDataUrl;
+ (void)PBArrayAdd_gameSnsVideoThumbUrl;
+ (void)PBArrayAdd_predownloadPercent;
+ (void)PBArrayAdd_predownNetType;
+ (void)PBArrayAdd_noPreDownloadRange;
+ (void)PBArrayAdd_skipCompress;
+ (void)PBArrayAdd_videoDuration;
+ (void)PBArrayAdd_bgFileId;
+ (void)PBArrayAdd_videoColdRuleAll;
+ (void)PBArrayAdd_videoColdRuleHD;
+ (void)PBArrayAdd_videoColdRuleLD;
+ (void)PBArrayAdd_RISKY_savedSightCompositeTaskId;
+ (void)PBArrayAdd_emoticonItemList;
+ (void)PBArrayAdd_bizInfo;
+ (void)PBArrayAdd_livePhotoMediaItem;
+ (void)PBArrayAdd_livePhotoStillImageTimeMs;
+ (void)PBArrayAdd_livePhotoVideoScale;
+ (void)PBArrayAdd_ecsInfo;
+ (void)PBArrayAdd_finderInfo;
+ (void)PBArrayAdd_uhdUrl;
+ (void)PBArrayAdd_hdUrl;
+ (void)PBArrayAdd_ctxVersion;
+ (void)PBArrayAdd_ctxInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)RISKY_savedSightCompositeTaskId;
- (void)setCachedSightCompositeTask:(id)arg1;
- (id)getCachedSightCompositeTask;
- (void)removeCachedSightCompositeTask;
- (id)mediaID;
- (long long)mediaType;
- (id)voiceStreamForData;
- (id)videoStreamForData;
- (id)cityForData;
- (CLLocationCoordinate2D)locationForData;
- (id)hashPathForString:(id)arg1;
- (id)pathForExistData;
- (id)pathForUhdData;
- (id)pathForHdData;
- (id)pathForData;
- (id)tmpPathForData;
- (id)pathForSightData;
- (id)pathForSightDataWithSource:(long long)arg1;
- (id)tempPathForSightData;
- (id)tempPathForSightDataWithSource:(long long)arg1;
- (BOOL)createTempSightPath;
- (id)pathForAttachVideoData;
- (id)pathForTempAttachVideoData;
- (id)pathForPreview;
- (id)tmpPathForPreview;
- (id)sightThumbWxAMPath;
- (id)getThumbUrl;
- (id)comparativePathForPreview;
- (id)imageOfSize:(long long)arg1;
- (BOOL)hasHdData;
- (BOOL)hasUhdData;
- (BOOL)hasData;
- (BOOL)hasTypedData:(long long)arg1;
- (BOOL)hasSight;
- (BOOL)hasAttachVideo;
- (BOOL)hasPreview;
- (BOOL)shouldMute;
- (BOOL)saveDataFromPath:(id)arg1;
- (BOOL)saveSightDataFromPath:(id)arg1;
- (BOOL)savePreviewFromPath:(id)arg1;
- (BOOL)saveDataFromData:(id)arg1;
- (BOOL)saveSightDataFromData:(id)arg1;
- (BOOL)saveSightDataFromSourcePath:(id)arg1;
- (BOOL)saveVideoDataFromData:(id)arg1 filePath:(id)arg2 continueMode:(BOOL)arg3;
- (BOOL)savePreviewFromData:(id)arg1;
- (BOOL)saveDataFromMedia:(id)arg1;
- (BOOL)saveSightDataFromMedia:(id)arg1;
- (BOOL)saveSightPreviewFromMedia:(id)arg1;
- (BOOL)savePreviewFromMedia:(id)arg1;
- (BOOL)isValid;
- (unsigned int)predownloadPercent;
- (BOOL)isPreloadVideoTask;
- (unsigned int)predownNetType;
- (BOOL)canBeginPreload;
- (BOOL)isEncrypt;
- (id)dataDownloadStat;
- (id)thumbDownloadStat;
- (BOOL)isLivePhoto;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getThumbImagePath;
- (id)debugDescription;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)bSnsScene;
- (void)setBSnsScene:(BOOL)arg1;
- (BOOL)bSupoortValidateMd5;
- (void)setBSupoortValidateMd5:(BOOL)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)mid;
- (void)setMid:(id)arg1;
- (id)bgFileId;
- (void)setBgFileId:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)subType;
- (void)setSubType:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)titlePattern;
- (void)setTitlePattern:(id)arg1;
- (id)descPattern;
- (void)setDescPattern:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)postName;
- (void)setPostName:(id)arg1;
- (id)previewUrls;
- (void)setPreviewUrls:(id)arg1;
- (id)dataUrl;
- (void)setDataUrl:(id)arg1;
- (id)lowBandUrl;
- (void)setLowBandUrl:(id)arg1;
- (id)attachUrl;
- (void)setAttachUrl:(id)arg1;
- (id)attachThumbUrl;
- (void)setAttachThumbUrl:(id)arg1;
- (id)uhdUrl;
- (void)setUhdUrl:(id)arg1;
- (id)hdUrl;
- (void)setHdUrl:(id)arg1;
- (id)attachShareTitle;
- (void)setAttachShareTitle:(id)arg1;
- (id)songAlbumUrl;
- (void)setSongAlbumUrl:(id)arg1;
- (id)songLyric;
- (void)setSongLyric:(id)arg1;
- (id)singerName;
- (void)setSingerName:(id)arg1;
- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (id)musicGenre;
- (void)setMusicGenre:(id)arg1;
- (id)identification;
- (void)setIdentification:(id)arg1;
- (id)hdAlbumThumbUrl;
- (void)setHdAlbumThumbUrl:(id)arg1;
- (unsigned long long)issueDate;
- (void)setIssueDate:(unsigned long long)arg1;
- (CGSize)imgSize;
- (void)setImgSize:(CGSize)arg1;
- (int)totalSize;
- (void)setTotalSize:(int)arg1;
- (int)attachVideoTotalTime;
- (void)setAttachVideoTotalTime:(int)arg1;
- (BOOL)likeFlag;
- (void)setLikeFlag:(BOOL)arg1;
- (int)likeCount;
- (void)setLikeCount:(int)arg1;
- (id)likeUsers;
- (void)setLikeUsers:(id)arg1;
- (int)commentCount;
- (void)setCommentCount:(int)arg1;
- (id)commentUsers;
- (void)setCommentUsers:(id)arg1;
- (int)withCount;
- (void)setWithCount:(int)arg1;
- (id)withUsers;
- (void)setWithUsers:(id)arg1;
- (long long)entrance;
- (void)setEntrance:(long long)arg1;
- (BOOL)bUseXorEncrypt;
- (void)setBUseXorEncrypt:(BOOL)arg1;
- (unsigned long long)xorEncrpyKey;
- (void)setXorEncrpyKey:(unsigned long long)arg1;
- (BOOL)isAd;
- (void)setIsAd:(BOOL)arg1;
- (int)index;
- (void)setIndex:(int)arg1;
- (id)emoticonItemList;
- (void)setEmoticonItemList:(id)arg1;
- (id)bizInfo;
- (void)setBizInfo:(id)arg1;
- (id)ecsInfo;
- (void)setEcsInfo:(id)arg1;
- (id)finderInfo;
- (void)setFinderInfo:(id)arg1;
- (id)gameSnsVideoDataUrl;
- (void)setGameSnsVideoDataUrl:(id)arg1;
- (id)gameSnsVideoThumbUrl;
- (void)setGameSnsVideoThumbUrl:(id)arg1;
- (BOOL)skipCompress;
- (void)setSkipCompress:(BOOL)arg1;
- (void)setPredownloadPercent:(unsigned int)arg1;
- (void)setPredownNetType:(unsigned int)arg1;
- (id)noPreDownloadRange;
- (void)setNoPreDownloadRange:(id)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (long long)videoPreloadEntrance;
- (void)setVideoPreloadEntrance:(long long)arg1;
- (BOOL)shouldUseDefaultMediaType;
- (void)setShouldUseDefaultMediaType:(BOOL)arg1;
- (void)setDataDownloadStat:(id)arg1;
- (void)setThumbDownloadStat:(id)arg1;
- (id)videoColdRuleAll;
- (void)setVideoColdRuleAll:(id)arg1;
- (id)videoColdRuleHD;
- (void)setVideoColdRuleHD:(id)arg1;
- (id)videoColdRuleLD;
- (void)setVideoColdRuleLD:(id)arg1;
- (id)ctxVersion;
- (void)setCtxVersion:(id)arg1;
- (id)ctxInfo;
- (void)setCtxInfo:(id)arg1;
- (id)livePhotoMediaItem;
- (void)setLivePhotoMediaItem:(id)arg1;
- (long long)livePhotoStillImageTimeMs;
- (void)setLivePhotoStillImageTimeMs:(long long)arg1;
- (double)livePhotoVideoScale;
- (void)setLivePhotoVideoScale:(double)arg1;
- (void)setRISKY_savedSightCompositeTaskId:(id)arg1;
- (id)cachedSightCompositeTask;
- (void).cxx_destruct;
@end
