@interface WCFinderMediaInfo : NSObject <PBCoding, NSMutableCopying>
{
    BOOL _hotFlag; // +0x8
    BOOL _isUnifiedByLongVideo; // +0x9
    BOOL _isPlayUnifiedURL; // +0xa
    BOOL _isDraft; // +0xb
    BOOL _hasInvalidWatermark; // +0xc
    int _videoPlayDuration; // +0x10
    int _coverSourceType; // +0x14
    int _shareSourceType; // +0x18
    int _videoType; // +0x1c
    int _dynamicRangeType; // +0x20
    float _halfWidth; // +0x24
    float _halfHeight; // +0x28
    unsigned int _halfFileSize; // +0x2c
    int _halfBitrate; // +0x30
    int _coverShowStyle; // +0x34
    int _shareShowStyle; // +0x38
    NSString * _mediaURL; // +0x40
    NSString * _thumbURL; // +0x48
    unsigned long long _mediaType; // +0x50
    double _mediaWidth; // +0x58
    double _mediaHeight; // +0x60
    unsigned long long _fileSize; // +0x68
    long long _bitrate; // +0x70
    NSString * _tid; // +0x78
    NSString * _coverURL; // +0x80
    NSString * _decodeKey; // +0x88
    NSString * _fullThumbUrl; // +0x90
    NSString * _fullCoverUrl; // +0x98
    NSString * _shareCoverUrl; // +0xa0
    NSMutableArray * _liveCoverImages; // +0xa8
    double _redPacketStartTime; // +0xb0
    NSString * _urlToken; // +0xb8
    NSString * _thumbUrlToken; // +0xc0
    NSString * _coverUrlToken; // +0xc8
    NSString * _fullThumbUrlToken; // +0xd0
    NSString * _fullCoverUrlToken; // +0xd8
    NSString * _shareCoverUrlToken; // +0xe0
    NSMutableArray * _specsArray; // +0xe8
    NSMutableArray * _hlsSpecsArray; // +0xf0
    NSMutableArray * _hdrSpecsArray; // +0xf8
    FinderMediaCodecInfo * _mediaCodecInfo; // +0x100
    unsigned long long _liveStatus; // +0x108
    WCFinderCheckThumbModel * _coverModel; // +0x110
    WCFinderCropRectModel * _cropRectModel; // +0x118
    WCFinderCropRectModel * _shareRectModel; // +0x120
    WCFinderFullScreenEditRectModel * _editRectModel; // +0x128
    NSString * _halfUrl; // +0x130
    NSString * _halfUrlToken; // +0x138
    NSString * _halfMd5Sum; // +0x140
    FinderObjectScalingInfo * _scalingInfo; // +0x148
    NSMutableArray * _audioSpec; // +0x150
    NSString * _encryptKey; // +0x158
    NSString * _encryptIV; // +0x160
    NSData * _finderCtrlInfo; // +0x168
    NSString * _originalVideoPath; // +0x170
    FinderCoverScalingInfo * _coverScalingInfo; // +0x178
    NSString * _videoTitle; // +0x180
    FinderLivePhotoMediaInfo * _livePhoto; // +0x188
    FinderProgressPreviewInfo * _progressPreviewInfo; // +0x190
}
+ (void)PBArrayAdd_mediaURL;
+ (void)PBArrayAdd_thumbURL;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_videoPlayDuration;
+ (void)PBArrayAdd_mediaWidth;
+ (void)PBArrayAdd_mediaHeight;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_bitrate;
+ (void)PBArrayAdd_specsArray;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_coverURL;
+ (void)PBArrayAdd_decodeKey;
+ (void)PBArrayAdd_urlToken;
+ (void)PBArrayAdd_thumbUrlToken;
+ (void)PBArrayAdd_coverUrlToken;
+ (void)PBArrayAdd_hlsSpecsArray;
+ (void)PBArrayAdd_isPlayUnifiedURL;
+ (void)PBArrayAdd_hotFlag;
+ (void)PBArrayAdd_fullThumbUrl;
+ (void)PBArrayAdd_fullThumbUrlToken;
+ (void)PBArrayAdd_editRectModel;
+ (void)PBArrayAdd_halfUrl;
+ (void)PBArrayAdd_halfWidth;
+ (void)PBArrayAdd_halfHeight;
+ (void)PBArrayAdd_halfMd5Sum;
+ (void)PBArrayAdd_halfFileSize;
+ (void)PBArrayAdd_halfBitrate;
+ (void)PBArrayAdd_halfUrlToken;
+ (void)PBArrayAdd_fullCoverUrl;
+ (void)PBArrayAdd_fullCoverUrlToken;
+ (void)PBArrayAdd_hdrSpecsArray;
+ (void)PBArrayAdd_scalingInfo;
+ (void)PBArrayAdd_coverShowStyle;
+ (void)PBArrayAdd_cropRectModel;
+ (void)PBArrayAdd_liveCoverImages;
+ (void)PBArrayAdd_videoType;
+ (void)PBArrayAdd_dynamicRangeType;
+ (void)PBArrayAdd_hasInvalidWatermark;
+ (void)PBArrayAdd_mediaCodecInfo;
+ (void)PBArrayAdd_audioSpec;
+ (void)PBArrayAdd_encryptKey;
+ (void)PBArrayAdd_encryptIV;
+ (void)PBArrayAdd_finderCtrlInfo;
+ (void)PBArrayAdd_coverScalingInfo;
+ (void)PBArrayAdd_videoTitle;
+ (void)PBArrayAdd_coverSourceType;
+ (void)PBArrayAdd_shareCoverUrl;
+ (void)PBArrayAdd_shareCoverUrlToken;
+ (void)PBArrayAdd_shareSourceType;
+ (void)PBArrayAdd_shareRectModel;
+ (void)PBArrayAdd_shareShowStyle;
+ (void)PBArrayAdd_livePhoto;
+ (void)PBArrayAdd_progressPreviewInfo;
+ (void)initialize;
+ (id)finderMediaInfoFromFinderMedia:(id)arg1 tid:(id)arg2;
+ (long long)mediaFilledPositionTypeWithSize:(CGSize)arg1 isSubScene:(BOOL)arg2 containerView:(id)arg3 attrFuncFlag:(unsigned int)arg4;
+ (long long)mediaFilledPositionTypeWithMediaSize:(CGSize)arg1 isSubScene:(BOOL)arg2 screenWidth:(double)arg3 attrFuncFlag:(unsigned int)arg4;
+ (id)genFinderMediaSpecFrom:(id)arg1;
- (id)wcfMediaWrap;
- (id)wcfMediaWrapWithScene:(int)arg1;
- (id)getPBPropertyTable;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (id)genFinderMedia;
- (id)genFinderMediaWithToken;
- (id)mediaCodecInfo;
- (id)appendToken:(id)arg1 toUrl:(id)arg2;
- (id)mediaUrlWithToken;
- (id)thumbUrlWithToken;
- (id)coverUrlWithToken;
- (id)fullThumbUrlWithToken;
- (id)fullCoverUrlWithToken;
- (id)shareCoverUrlWithToken;
- (id)liveCoverUriWithPreferredAspectRatio:(unsigned long long)arg1 appendToken:(BOOL)arg2;
- (id)liveCoverUriWithPreferredAspectRatio:(unsigned long long)arg1 appendToken:(BOOL)arg2 defaultUri:(id)arg3;
- (id)liveCoverUriTokenWithPreferredAspectRatio:(unsigned long long)arg1 defaultToken:(id)arg2;
- (BOOL)isUploadFinishFeed;
- (unsigned long long)finderMediaType;
- (unsigned long long)finderMediaSizeType;
- (unsigned long long)mediaSizeTypeWithSize:(CGSize)arg1;
- (CGRect)mediaFullFeedContentRect:(CGSize)arg1 isSubScene:(BOOL)arg2 containerView:(id)arg3 attrFuncFlag:(unsigned int)arg4;
- (long long)getMediaFilledPositionTypeIsSubScene:(BOOL)arg1 containerView:(id)arg2 attrFuncFlag:(unsigned int)arg3;
- (long long)getMediaFilledPositionTypeIsSubScene:(BOOL)arg1 mediaSize:(CGSize)arg2 containerView:(id)arg3 attrFuncFlag:(unsigned int)arg4;
- (CGSize)mediaFeedContentHeightWith:(double)arg1;
- (CGSize)mediaFullFeedContentPureHeightWith:(CGSize)arg1 useMediaScalingInfo:(BOOL)arg2 isSubScene:(BOOL)arg3 containerView:(id)arg4 attrFuncFlag:(unsigned int)arg5;
- (CGSize)mediaFullPureSizeWithContainerSize:(CGSize)arg1 useMediaScalingInfo:(BOOL)arg2 isSubScene:(BOOL)arg3 screenWidth:(double)arg4 attrFuncFlag:(unsigned int)arg5;
- (CGSize)mediaStreamFeedCardSizeWith:(double)arg1;
- (CGSize)zoomSizeByIsSubScene:(BOOL)arg1 mediaSize:(CGSize)arg2 halfHeightPercent:(double)arg3 curTopMoveProgress:(double)arg4 containerView:(id)arg5 attrFuncFlag:(unsigned int)arg6;
- (BOOL)isVideoMedia;
- (id)mediaPath;
- (id)getNetMediaTempCachePath;
- (id)getLocalMediaPermanentPath;
- (BOOL)isServerMedia;
- (BOOL)allUrlIsServerMedia;
- (BOOL)isInvalidSize;
- (BOOL)isValidServerMedia;
- (id)thumbPath;
- (id)getNetThumbTempCachePath;
- (id)getLocalThumbPermanentPath;
- (id)coverPath;
- (id)shareCoverPath;
- (id)fullCoverPath;
- (void)clearCoverInfo;
- (id)_getNetCoverTempCachePath;
- (id)_getNetShareCoverTempCachePath;
- (id)_getLocalCoverPermanentPath;
- (id)_getLocalShareCoverPermanentPath;
- (id)_getNetFullCoverTempCachePath;
- (id)_getLocalFullCoverPermanentPath;
- (id)fullScreenThumbPath;
- (id)_getNetFullScreenThumbTempCachePath;
- (id)_getLocalFullScreenThumbPermanentPath;
- (id)getLocalHalfUrlPermanentPath;
- (BOOL)isMegaVideo;
- (void)setIsMegaVideo:(BOOL)arg1;
- (int)videoPlayDuration;
- (CGSize)getEditRectMediaSize;
- (id)description;
- (BOOL)emptyForCoverPreview;
- (id)suggestSpec;
- (void)invalidateSuggestSpecCache;
- (CGSize)mediaSize;
- (CGSize)mediaScalingSize;
- (BOOL)hasCompleteLocalResource;
- (BOOL)isEqualToMediaInfo:(id)arg1;
- (unsigned long long)cdnResourceHash;
- (BOOL)isLivePhotoMedia;
- (id)livePhotoVideoUrlWithToken;
- (id)mediaURL;
- (void)setMediaURL:(id)arg1;
- (id)thumbURL;
- (void)setThumbURL:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (void)setVideoPlayDuration:(int)arg1;
- (double)mediaWidth;
- (void)setMediaWidth:(double)arg1;
- (double)mediaHeight;
- (void)setMediaHeight:(double)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (long long)bitrate;
- (void)setBitrate:(long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)coverURL;
- (void)setCoverURL:(id)arg1;
- (id)decodeKey;
- (void)setDecodeKey:(id)arg1;
- (id)fullThumbUrl;
- (void)setFullThumbUrl:(id)arg1;
- (id)fullCoverUrl;
- (void)setFullCoverUrl:(id)arg1;
- (id)shareCoverUrl;
- (void)setShareCoverUrl:(id)arg1;
- (id)liveCoverImages;
- (void)setLiveCoverImages:(id)arg1;
- (double)redPacketStartTime;
- (void)setRedPacketStartTime:(double)arg1;
- (id)urlToken;
- (void)setUrlToken:(id)arg1;
- (id)thumbUrlToken;
- (void)setThumbUrlToken:(id)arg1;
- (id)coverUrlToken;
- (void)setCoverUrlToken:(id)arg1;
- (id)fullThumbUrlToken;
- (void)setFullThumbUrlToken:(id)arg1;
- (id)fullCoverUrlToken;
- (void)setFullCoverUrlToken:(id)arg1;
- (id)shareCoverUrlToken;
- (void)setShareCoverUrlToken:(id)arg1;
- (id)specsArray;
- (void)setSpecsArray:(id)arg1;
- (id)hlsSpecsArray;
- (void)setHlsSpecsArray:(id)arg1;
- (id)hdrSpecsArray;
- (void)setHdrSpecsArray:(id)arg1;
- (void)setMediaCodecInfo:(id)arg1;
- (BOOL)hotFlag;
- (void)setHotFlag:(BOOL)arg1;
- (unsigned long long)liveStatus;
- (void)setLiveStatus:(unsigned long long)arg1;
- (id)coverModel;
- (void)setCoverModel:(id)arg1;
- (id)cropRectModel;
- (void)setCropRectModel:(id)arg1;
- (id)shareRectModel;
- (void)setShareRectModel:(id)arg1;
- (int)coverSourceType;
- (void)setCoverSourceType:(int)arg1;
- (int)shareSourceType;
- (void)setShareSourceType:(int)arg1;
- (int)videoType;
- (void)setVideoType:(int)arg1;
- (int)dynamicRangeType;
- (void)setDynamicRangeType:(int)arg1;
- (BOOL)isUnifiedByLongVideo;
- (void)setIsUnifiedByLongVideo:(BOOL)arg1;
- (BOOL)isPlayUnifiedURL;
- (void)setIsPlayUnifiedURL:(BOOL)arg1;
- (id)editRectModel;
- (void)setEditRectModel:(id)arg1;
- (id)halfUrl;
- (void)setHalfUrl:(id)arg1;
- (id)halfUrlToken;
- (void)setHalfUrlToken:(id)arg1;
- (float)halfWidth;
- (void)setHalfWidth:(float)arg1;
- (float)halfHeight;
- (void)setHalfHeight:(float)arg1;
- (id)halfMd5Sum;
- (void)setHalfMd5Sum:(id)arg1;
- (unsigned int)halfFileSize;
- (void)setHalfFileSize:(unsigned int)arg1;
- (int)halfBitrate;
- (void)setHalfBitrate:(int)arg1;
- (BOOL)isDraft;
- (void)setIsDraft:(BOOL)arg1;
- (id)scalingInfo;
- (void)setScalingInfo:(id)arg1;
- (int)coverShowStyle;
- (void)setCoverShowStyle:(int)arg1;
- (int)shareShowStyle;
- (void)setShareShowStyle:(int)arg1;
- (BOOL)hasInvalidWatermark;
- (void)setHasInvalidWatermark:(BOOL)arg1;
- (id)audioSpec;
- (void)setAudioSpec:(id)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)encryptIV;
- (void)setEncryptIV:(id)arg1;
- (id)finderCtrlInfo;
- (void)setFinderCtrlInfo:(id)arg1;
- (id)originalVideoPath;
- (void)setOriginalVideoPath:(id)arg1;
- (id)coverScalingInfo;
- (void)setCoverScalingInfo:(id)arg1;
- (id)videoTitle;
- (void)setVideoTitle:(id)arg1;
- (id)livePhoto;
- (void)setLivePhoto:(id)arg1;
- (id)progressPreviewInfo;
- (void)setProgressPreviewInfo:(id)arg1;
- (void).cxx_destruct;
@end
