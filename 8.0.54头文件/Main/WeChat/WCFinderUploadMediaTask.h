@interface WCFinderUploadMediaTask : NSObject <PBCoding>
{
    BOOL _startCdnUpload; // +0x8
    BOOL _uploadCDNSuccessful; // +0x9
    BOOL _isH265; // +0xa
    BOOL _useLargeFileAPI; // +0xb
    BOOL _isLongVideo; // +0xc
    int _coverShowStyle; // +0x10
    int _videoType; // +0x14
    int _dynamicRangeType; // +0x18
    float _halfWidth; // +0x1c
    float _halfHeight; // +0x20
    int _halfBitrate; // +0x24
    int _ratio; // +0x28
    FinderMedia * _serverMedia; // +0x30
    NSString * _mediaUrl; // +0x38
    NSString * _md5; // +0x40
    NSString * _mediaMd5; // +0x48
    NSString * _thumbUrl; // +0x50
    NSString * _thumbMd5; // +0x58
    NSString * _clientID; // +0x60
    NSString * _coverUrl; // +0x68
    NSString * _coverMd5; // +0x70
    NSString * _fullCoverUrl; // +0x78
    NSString * _fullCoverMd5; // +0x80
    NSString * _shareCoverUrl; // +0x88
    NSString * _shareCoverMd5; // +0x90
    NSString * _patMusicUrl; // +0x98
    double _duration; // +0xa0
    long long _totalsize; // +0xa8
    double _mediaWidth; // +0xb0
    double _mediaHeight; // +0xb8
    NSString * _fullScreenThumbUrl; // +0xc0
    NSString * _fullScreenThumbMd5; // +0xc8
    NSString * _videoTitle; // +0xd0
    NSString * _halfScreenMediaUrl; // +0xd8
    NSString * _halfScreenMediaMd5; // +0xe0
    long long _halfFileSize; // +0xe8
    NSString * _uploadHalfMediaURL; // +0xf0
    NSString * _uploadFullThumbURL; // +0xf8
    NSString * _uploadMediaURL; // +0x100
    NSString * _uploadThumbURL; // +0x108
    NSString * _uploadCoverURL; // +0x110
    NSString * _uploadFullCoverURL; // +0x118
    NSString * _uploadShareCoverURL; // +0x120
    NSString * _requestHeader; // +0x128
    unsigned long long _mediaType; // +0x130
    unsigned long long _fileSize; // +0x138
    unsigned long long _bitRate; // +0x140
    unsigned long long _startUploadcdnTimestampMs; // +0x148
    unsigned long long _endUploadcdnTimestampMs; // +0x150
    FinderMediaCodecInfo * _mediaCodecInfo; // +0x158
    unsigned long long _uploadCDNType; // +0x160
    WCFinderFullScreenEditRectModel * _editRectModel; // +0x168
}
+ (void)PBArrayAdd_mediaUrl;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_mediaMd5;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_thumbMd5;
+ (void)PBArrayAdd_startCdnUpload;
+ (void)PBArrayAdd_clientID;
+ (void)PBArrayAdd_uploadCDNSuccessful;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_totalsize;
+ (void)PBArrayAdd_mediaWidth;
+ (void)PBArrayAdd_mediaHeight;
+ (void)PBArrayAdd_uploadMediaURL;
+ (void)PBArrayAdd_uploadThumbURL;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_coverMd5;
+ (void)PBArrayAdd_uploadCoverURL;
+ (void)PBArrayAdd_bitRate;
+ (void)PBArrayAdd_isH265;
+ (void)PBArrayAdd_useLargeFileAPI;
+ (void)PBArrayAdd_isLongVideo;
+ (void)PBArrayAdd_uploadFullCoverURL;
+ (void)PBArrayAdd_fullCoverUrl;
+ (void)PBArrayAdd_fullCoverMd5;
+ (void)PBArrayAdd_mediaCodecInfo;
+ (void)PBArrayAdd_videoTitle;
+ (void)PBArrayAdd_uploadShareCoverURL;
+ (void)PBArrayAdd_shareCoverUrl;
+ (void)PBArrayAdd_shareCoverMd5;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (id)serverMedia;
- (void)setServerMedia:(id)arg1;
- (int)coverShowStyle;
- (void)setCoverShowStyle:(int)arg1;
- (int)videoType;
- (void)setVideoType:(int)arg1;
- (int)dynamicRangeType;
- (void)setDynamicRangeType:(int)arg1;
- (id)mediaUrl;
- (void)setMediaUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)mediaMd5;
- (void)setMediaMd5:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)thumbMd5;
- (void)setThumbMd5:(id)arg1;
- (BOOL)startCdnUpload;
- (void)setStartCdnUpload:(BOOL)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (BOOL)uploadCDNSuccessful;
- (void)setUploadCDNSuccessful:(BOOL)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)coverMd5;
- (void)setCoverMd5:(id)arg1;
- (id)fullCoverUrl;
- (void)setFullCoverUrl:(id)arg1;
- (id)fullCoverMd5;
- (void)setFullCoverMd5:(id)arg1;
- (id)shareCoverUrl;
- (void)setShareCoverUrl:(id)arg1;
- (id)shareCoverMd5;
- (void)setShareCoverMd5:(id)arg1;
- (id)patMusicUrl;
- (void)setPatMusicUrl:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (long long)totalsize;
- (void)setTotalsize:(long long)arg1;
- (double)mediaWidth;
- (void)setMediaWidth:(double)arg1;
- (double)mediaHeight;
- (void)setMediaHeight:(double)arg1;
- (id)fullScreenThumbUrl;
- (void)setFullScreenThumbUrl:(id)arg1;
- (id)fullScreenThumbMd5;
- (void)setFullScreenThumbMd5:(id)arg1;
- (id)videoTitle;
- (void)setVideoTitle:(id)arg1;
- (id)halfScreenMediaUrl;
- (void)setHalfScreenMediaUrl:(id)arg1;
- (id)halfScreenMediaMd5;
- (void)setHalfScreenMediaMd5:(id)arg1;
- (float)halfWidth;
- (void)setHalfWidth:(float)arg1;
- (float)halfHeight;
- (void)setHalfHeight:(float)arg1;
- (long long)halfFileSize;
- (void)setHalfFileSize:(long long)arg1;
- (int)halfBitrate;
- (void)setHalfBitrate:(int)arg1;
- (id)uploadHalfMediaURL;
- (void)setUploadHalfMediaURL:(id)arg1;
- (id)uploadFullThumbURL;
- (void)setUploadFullThumbURL:(id)arg1;
- (id)uploadMediaURL;
- (void)setUploadMediaURL:(id)arg1;
- (id)uploadThumbURL;
- (void)setUploadThumbURL:(id)arg1;
- (id)uploadCoverURL;
- (void)setUploadCoverURL:(id)arg1;
- (id)uploadFullCoverURL;
- (void)setUploadFullCoverURL:(id)arg1;
- (id)uploadShareCoverURL;
- (void)setUploadShareCoverURL:(id)arg1;
- (id)requestHeader;
- (void)setRequestHeader:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned long long)bitRate;
- (void)setBitRate:(unsigned long long)arg1;
- (BOOL)isH265;
- (void)setIsH265:(BOOL)arg1;
- (BOOL)useLargeFileAPI;
- (void)setUseLargeFileAPI:(BOOL)arg1;
- (unsigned long long)startUploadcdnTimestampMs;
- (void)setStartUploadcdnTimestampMs:(unsigned long long)arg1;
- (unsigned long long)endUploadcdnTimestampMs;
- (void)setEndUploadcdnTimestampMs:(unsigned long long)arg1;
- (id)mediaCodecInfo;
- (void)setMediaCodecInfo:(id)arg1;
- (BOOL)isLongVideo;
- (void)setIsLongVideo:(BOOL)arg1;
- (unsigned long long)uploadCDNType;
- (void)setUploadCDNType:(unsigned long long)arg1;
- (id)editRectModel;
- (void)setEditRectModel:(id)arg1;
- (int)ratio;
- (void)setRatio:(int)arg1;
- (void).cxx_destruct;
@end

