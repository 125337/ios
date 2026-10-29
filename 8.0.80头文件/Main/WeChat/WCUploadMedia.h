@interface WCUploadMedia : NSObject
{
    int type; // +0x8
    int subType; // +0xc
    NSData * buffer; // +0x10
    NSString * clientID; // +0x18
    int failCount; // +0x20
    BOOL isFinished; // +0x24
    WCUrl * bufferUrl; // +0x28
    WCUrl * lowBandUrl; // +0x30
    WCUrl * bufferDataUrl; // +0x38
    WCUrl * lowBandDataUrl; // +0x40
    WCUrl * songAlbumUrl; // +0x48
    NSString * songLyric; // +0x50
    NSMutableArray * thumbUrlsList; // +0x58
    NSString * serverID; // +0x60
    int outType; // +0x68
    int imageFilterID; // +0x6c
    CGSize imgSize; // +0x70
    BOOL isSyncToWeibo; // +0x80
    BOOL isSyncToFacebook; // +0x81
    BOOL isSyncToTwitter; // +0x82
    BOOL isSyncToQZone; // +0x83
    NSString * title; // +0x88
    NSString * desc; // +0x90
    BOOL isThumbForPrevMeida; // +0x98
    int imageFrom; // +0x9c
    NSString * twitterOAuthToken; // +0xa0
    NSString * twitterOAuthTokenSecret; // +0xa8
    NSString * userData; // +0xb0
    BOOL isSingleMedia; // +0xb8
    NSString * md5; // +0xc0
    NSString * videoMD5; // +0xc8
    BOOL _skipCompress; // +0xd0
    BOOL _isStory; // +0xd1
    BOOL _isWxamBuffer; // +0xd2
    BOOL _isMultiSpec; // +0xd3
    BOOL _shouldUseDefaultMediaType; // +0xd4
    int _sourceForSNSUploadStat; // +0xd8
    unsigned int _duration; // +0xdc
    int _sourceType; // +0xe0
    unsigned int _sessionStartTime; // +0xe4
    VideoUploadStatInfo * videoUploadStatInfo; // +0xe8
    NSString * _localMid; // +0xf0
    NSString * _mediaSourcePath; // +0xf8
    WCUrl * _uhdUrl; // +0x100
    WCUrl * _hdUrl; // +0x108
    NSString * _singerName; // +0x110
    NSString * _albumName; // +0x118
    NSString * _musicGenre; // +0x120
    NSString * _identification; // +0x128
    NSString * _hdAlbumThumbUrl; // +0x130
    unsigned long long _issueDate; // +0x138
    long long _fileSize; // +0x140
    MMImageExifLogInfo * _exifLogInfo; // +0x148
    NSArray * _emoticonItemList; // +0x150
    WCMomentsBizInfo * _bizInfo; // +0x158
    WCMediaEcsInfo * _ecsInfo; // +0x160
    WCMomentFinderInfo * _finderInfo; // +0x168
    NSString * _yuanBaoTemplate; // +0x170
    NSArray * _springFestivalKeywords; // +0x178
    long long _subMediaType; // +0x180
    NSString * _livePhotoUUID; // +0x188
    NSString * _gameSnsVideoDataUrl; // +0x190
    NSString * _gameSnsVideoThumbUrl; // +0x198
    NSString * _sessionID; // +0x1a0
    NSString * _sightCompositeTaskLocalToken; // +0x1a8
    long long _livePhotoStillImageTimeMs; // +0x1b0
    NSData * _jpgBuffer; // +0x1b8
    NSData * _hdAlbumImgData; // +0x1c0
    NSString * _metaDataJsonArray; // +0x1c8
    NSString * _fileFingerprint; // +0x1d0
    NSString * _askXiaoWeiLocalId; // +0x1d8
    NSDictionary * _cameraEditorLogInfo; // +0x1e0
}
- (void)setIsEdited:(BOOL)arg1;
- (BOOL)isEdited;
- (void)setEditImageAttr:(id)arg1;
- (id)editImageAttr;
- (void)setEditVideoAttr:(id)arg1;
- (id)editVideoAttr;
- (id)init;
- (id)getTypeName;
- (id)mediaBuffer;
- (void)clearMediaBuffer;
- (void)saveMediaBuffer;
- (void)removeMediaBuffer;
- (BOOL)saveMediaFromSourcePath:(id)arg1;
- (void)clearMediaSourcePath;
- (id)pathForMedia;
- (BOOL)isMainMedia;
- (BOOL)isSubMedia;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)subType;
- (void)setSubType:(int)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (id)bufferUrl;
- (void)setBufferUrl:(id)arg1;
- (id)lowBandUrl;
- (void)setLowBandUrl:(id)arg1;
- (id)bufferDataUrl;
- (void)setBufferDataUrl:(id)arg1;
- (id)lowBandDataUrl;
- (void)setLowBandDataUrl:(id)arg1;
- (id)songAlbumUrl;
- (void)setSongAlbumUrl:(id)arg1;
- (id)songLyric;
- (void)setSongLyric:(id)arg1;
- (id)thumbUrlsList;
- (void)setThumbUrlsList:(id)arg1;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (int)outType;
- (void)setOutType:(int)arg1;
- (int)imageFilterID;
- (void)setImageFilterID:(int)arg1;
- (CGSize)imgSize;
- (void)setImgSize:(CGSize)arg1;
- (BOOL)isSyncToWeibo;
- (void)setIsSyncToWeibo:(BOOL)arg1;
- (BOOL)isSyncToFacebook;
- (void)setIsSyncToFacebook:(BOOL)arg1;
- (BOOL)isSyncToTwitter;
- (void)setIsSyncToTwitter:(BOOL)arg1;
- (BOOL)isSyncToQZone;
- (void)setIsSyncToQZone:(BOOL)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isThumbForPrevMeida;
- (void)setIsThumbForPrevMeida:(BOOL)arg1;
- (int)imageFrom;
- (void)setImageFrom:(int)arg1;
- (id)twitterOAuthToken;
- (void)setTwitterOAuthToken:(id)arg1;
- (id)twitterOAuthTokenSecret;
- (void)setTwitterOAuthTokenSecret:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (BOOL)isSingleMedia;
- (void)setIsSingleMedia:(BOOL)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)videoMD5;
- (void)setVideoMD5:(id)arg1;
- (id)videoUploadStatInfo;
- (void)setVideoUploadStatInfo:(id)arg1;
- (id)localMid;
- (void)setLocalMid:(id)arg1;
- (id)mediaSourcePath;
- (void)setMediaSourcePath:(id)arg1;
- (id)uhdUrl;
- (void)setUhdUrl:(id)arg1;
- (id)hdUrl;
- (void)setHdUrl:(id)arg1;
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
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (int)sourceForSNSUploadStat;
- (void)setSourceForSNSUploadStat:(int)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (id)exifLogInfo;
- (void)setExifLogInfo:(id)arg1;
- (id)emoticonItemList;
- (void)setEmoticonItemList:(id)arg1;
- (id)bizInfo;
- (void)setBizInfo:(id)arg1;
- (id)ecsInfo;
- (void)setEcsInfo:(id)arg1;
- (id)finderInfo;
- (void)setFinderInfo:(id)arg1;
- (id)yuanBaoTemplate;
- (void)setYuanBaoTemplate:(id)arg1;
- (id)springFestivalKeywords;
- (void)setSpringFestivalKeywords:(id)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (long long)subMediaType;
- (void)setSubMediaType:(long long)arg1;
- (id)livePhotoUUID;
- (void)setLivePhotoUUID:(id)arg1;
- (id)gameSnsVideoDataUrl;
- (void)setGameSnsVideoDataUrl:(id)arg1;
- (id)gameSnsVideoThumbUrl;
- (void)setGameSnsVideoThumbUrl:(id)arg1;
- (BOOL)skipCompress;
- (void)setSkipCompress:(BOOL)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (unsigned int)sessionStartTime;
- (void)setSessionStartTime:(unsigned int)arg1;
- (id)sightCompositeTaskLocalToken;
- (void)setSightCompositeTaskLocalToken:(id)arg1;
- (BOOL)isStory;
- (void)setIsStory:(BOOL)arg1;
- (long long)livePhotoStillImageTimeMs;
- (void)setLivePhotoStillImageTimeMs:(long long)arg1;
- (BOOL)isWxamBuffer;
- (void)setIsWxamBuffer:(BOOL)arg1;
- (id)jpgBuffer;
- (void)setJpgBuffer:(id)arg1;
- (id)hdAlbumImgData;
- (void)setHdAlbumImgData:(id)arg1;
- (BOOL)isMultiSpec;
- (void)setIsMultiSpec:(BOOL)arg1;
- (id)metaDataJsonArray;
- (void)setMetaDataJsonArray:(id)arg1;
- (id)fileFingerprint;
- (void)setFileFingerprint:(id)arg1;
- (id)askXiaoWeiLocalId;
- (void)setAskXiaoWeiLocalId:(id)arg1;
- (BOOL)shouldUseDefaultMediaType;
- (void)setShouldUseDefaultMediaType:(BOOL)arg1;
- (id)cameraEditorLogInfo;
- (void)setCameraEditorLogInfo:(id)arg1;
- (void).cxx_destruct;
@end
