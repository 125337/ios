@interface MMLiveReplayFragmentItem : NSObject <WCPlayerMediaExt>
{
    long long _beginOffsetSeconds; // +0x8
    long long _endOffsetSeconds; // +0x10
    NSString * _topic; // +0x18
    NSString * _summary; // +0x20
    long long _score; // +0x28
    NSString * _uniqId; // +0x30
    NSString * _sliceMp4Url; // +0x38
    long long _width; // +0x40
    long long _height; // +0x48
    long long _duration; // +0x50
    long long _fileSize; // +0x58
    NSString * _md5sum; // +0x60
    NSString * _coverImageUrl; // +0x68
    NSString * _recommendCoverUrl; // +0x70
    NSString * _recommendPublishTitle; // +0x78
    NSArray * _recommendPublishTags; // +0x80
    NSString * _liveId; // +0x88
    NSString * _finderObjectId; // +0x90
}
+ (id)liveReplayFragmentItemFromMicReplayInfo:(id)arg1;
+ (id)liveReplayFragmentItemFromBackendModel:(id)arg1 objectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3;
- (id)getLiveReplayFragmentTempDirectory;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getThumbImagePath;
- (long long)beginOffsetSeconds;
- (void)setBeginOffsetSeconds:(long long)arg1;
- (long long)endOffsetSeconds;
- (void)setEndOffsetSeconds:(long long)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (long long)score;
- (void)setScore:(long long)arg1;
- (id)uniqId;
- (void)setUniqId:(id)arg1;
- (id)sliceMp4Url;
- (void)setSliceMp4Url:(id)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (long long)fileSize;
- (void)setFileSize:(long long)arg1;
- (id)md5sum;
- (void)setMd5sum:(id)arg1;
- (id)coverImageUrl;
- (void)setCoverImageUrl:(id)arg1;
- (id)recommendCoverUrl;
- (void)setRecommendCoverUrl:(id)arg1;
- (id)recommendPublishTitle;
- (void)setRecommendPublishTitle:(id)arg1;
- (id)recommendPublishTags;
- (void)setRecommendPublishTags:(id)arg1;
- (id)liveId;
- (void)setLiveId:(id)arg1;
- (id)finderObjectId;
- (void)setFinderObjectId:(id)arg1;
- (void).cxx_destruct;
@end
