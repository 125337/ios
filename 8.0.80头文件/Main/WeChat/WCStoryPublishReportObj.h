@interface WCStoryPublishReportObj : NSObject
{
    BOOL _isClickSearchMusic; // +0x8
    BOOL _isPublishToTimeLine; // +0x9
    BOOL _isShowLyric; // +0xa
    BOOL _isAddTextIntro; // +0xb
    BOOL _hasRecordVideo; // +0xc
    BOOL _hasEnterAllbum; // +0xd
    unsigned int _emoticonWidgetCount; // +0x10
    unsigned int _textWidgetCount; // +0x14
    unsigned int _publishVideoType; // +0x18
    unsigned int _photoCount; // +0x1c
    unsigned int _addTextIntroWordCount; // +0x20
    unsigned int _addEmojToTextIntroCount; // +0x24
    unsigned int _videoCompoundTime; // +0x28
    unsigned int _isPortrailVideo; // +0x2c
    NSString * _publishEventId; // +0x30
    unsigned long long _enterScene; // +0x38
    unsigned long long _enterTime; // +0x40
    unsigned long long _startEditTime; // +0x48
    unsigned long long _videoDuration; // +0x50
    unsigned long long _videoSource; // +0x58
    WCLocationInfo * _locationInfo; // +0x60
    NSMutableArray * _actionTraceArray; // +0x68
    EditVideoBGMSelectedMusicInfo * _musicInfo; // +0x70
    NSString * _photoLengthWidthSacles; // +0x78
}
- (id)actionTraceArray;
- (void)enterWithScene:(unsigned long long)arg1;
- (id)realPoiInfoStr;
- (void)reportDoPublish;
- (void)reportQuitPublish;
- (void)doActionTraceWithType:(unsigned long long)arg1;
- (id)arrayToJSON:(id)arg1;
- (unsigned long long)saveVideoCount;
- (id)publishEventId;
- (void)setPublishEventId:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (unsigned long long)startEditTime;
- (void)setStartEditTime:(unsigned long long)arg1;
- (unsigned long long)videoDuration;
- (void)setVideoDuration:(unsigned long long)arg1;
- (unsigned long long)videoSource;
- (void)setVideoSource:(unsigned long long)arg1;
- (unsigned int)emoticonWidgetCount;
- (void)setEmoticonWidgetCount:(unsigned int)arg1;
- (unsigned int)textWidgetCount;
- (void)setTextWidgetCount:(unsigned int)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (void)setActionTraceArray:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (BOOL)isClickSearchMusic;
- (void)setIsClickSearchMusic:(BOOL)arg1;
- (BOOL)isPublishToTimeLine;
- (void)setIsPublishToTimeLine:(BOOL)arg1;
- (unsigned int)publishVideoType;
- (void)setPublishVideoType:(unsigned int)arg1;
- (unsigned int)photoCount;
- (void)setPhotoCount:(unsigned int)arg1;
- (BOOL)isShowLyric;
- (void)setIsShowLyric:(BOOL)arg1;
- (BOOL)isAddTextIntro;
- (void)setIsAddTextIntro:(BOOL)arg1;
- (unsigned int)addTextIntroWordCount;
- (void)setAddTextIntroWordCount:(unsigned int)arg1;
- (unsigned int)addEmojToTextIntroCount;
- (void)setAddEmojToTextIntroCount:(unsigned int)arg1;
- (id)photoLengthWidthSacles;
- (void)setPhotoLengthWidthSacles:(id)arg1;
- (unsigned int)videoCompoundTime;
- (void)setVideoCompoundTime:(unsigned int)arg1;
- (unsigned int)isPortrailVideo;
- (void)setIsPortrailVideo:(unsigned int)arg1;
- (BOOL)hasRecordVideo;
- (void)setHasRecordVideo:(BOOL)arg1;
- (BOOL)hasEnterAllbum;
- (void)setHasEnterAllbum:(BOOL)arg1;
- (void).cxx_destruct;
@end
