@interface EditVideoAttr : MMObject <NSCoding>
{
    BOOL _isSelectFromAlbum; // +0x8
    BOOL _isOriginSoundOff; // +0x9
    BOOL _isCropped; // +0xa
    BOOL _isSizeCropped; // +0xb
    BOOL _useAssetDurationForCompose; // +0xc
    BOOL _needComposeWithFullVideoTimeCrop; // +0xd
    BOOL _isSilenceVideo; // +0xe
    NSMutableDictionary * _extraInfo; // +0x10
    unsigned long long _editEntrance; // +0x18
    NSMutableArray * _videoSingleAttrs; // +0x20
    RecommendedMusicInfo * _mjPublisherPatMusicInfo; // +0x28
    EditVideoBGMSelectedMusicInfo * _musicInfo; // +0x30
    EditImageAttr * _editImageAttr; // +0x38
    NSString * _assetUrlForMultiComposeVideo; // +0x40
    CGRect _cropFrame; // +0x48
    struct _totalEditedTimeRange; // +0x68
}
+ (BOOL)isEditedTimeRange:(struct)arg1 equalToTimeDuration:(struct)arg2;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getImageBySize:(CGSize)arg1;
- (id)getVideoFileSize;
- (BOOL)isCroppedTimeRangeOnly;
- (BOOL)isEdited;
- (BOOL)isCropped;
- (BOOL)isMultiComposeVideo;
- (BOOL)isSingleComposeVideo;
- (struct)cropTotalDurationOfEachSingleVideoTimeRange;
- (struct)editTimeRangeOfVideoAtIndex:(unsigned long long)arg1;
- (struct)fixedEditTimeRangeOfVideoAtIndex:(unsigned long long)arg1;
- (double)editTimeStartForVideoAtIndex:(unsigned long long)arg1;
- (double)editTimeEndForVideoAtIndex:(unsigned long long)arg1;
- (id)assetURL;
- (void)setAssetURL:(id)arg1;
- (void)addMultiVideoAttrWithAssetURL:(id)arg1 assetDuration:(struct)arg2 editTimeRange:(struct)arg3;
- (struct)originDuration;
- (void)setOriginDuration:(struct)arg1;
- (struct)editedTimeRange;
- (void)setEditedTimeRange:(struct)arg1;
- (id)musicFilePath;
- (id)extraInfo;
- (unsigned long long)editEntrance;
- (void)setEditEntrance:(unsigned long long)arg1;
- (id)videoSingleAttrs;
- (void)setVideoSingleAttrs:(id)arg1;
- (BOOL)isSelectFromAlbum;
- (void)setIsSelectFromAlbum:(BOOL)arg1;
- (id)mjPublisherPatMusicInfo;
- (void)setMjPublisherPatMusicInfo:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (BOOL)isOriginSoundOff;
- (void)setIsOriginSoundOff:(BOOL)arg1;
- (void)setIsCropped:(BOOL)arg1;
- (BOOL)isSizeCropped;
- (void)setIsSizeCropped:(BOOL)arg1;
- (CGRect)cropFrame;
- (void)setCropFrame:(CGRect)arg1;
- (BOOL)useAssetDurationForCompose;
- (void)setUseAssetDurationForCompose:(BOOL)arg1;
- (id)editImageAttr;
- (void)setEditImageAttr:(id)arg1;
- (BOOL)needComposeWithFullVideoTimeCrop;
- (void)setNeedComposeWithFullVideoTimeCrop:(BOOL)arg1;
- (BOOL)isSilenceVideo;
- (void)setIsSilenceVideo:(BOOL)arg1;
- (id)assetUrlForMultiComposeVideo;
- (void)setAssetUrlForMultiComposeVideo:(id)arg1;
- (struct)totalEditedTimeRange;
- (void)setTotalEditedTimeRange:(struct)arg1;
- (void).cxx_destruct;
@end

