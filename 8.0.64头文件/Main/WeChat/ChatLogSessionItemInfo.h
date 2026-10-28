@interface ChatLogSessionItemInfo : NSObject <PBCoding>
{
    unsigned int _msgOldestTime; // +0x8
    unsigned int _msgNewestTime; // +0xc
    unsigned int _sessionType; // +0x10
    unsigned int _lastMsgTime; // +0x14
    NSString * _session; // +0x18
    NSString * _username; // +0x20
    unsigned long long _msgCount; // +0x28
    unsigned long long _msgEstimateSize; // +0x30
    unsigned long long _resSize; // +0x38
    unsigned long long _imageSize; // +0x40
    unsigned long long _videoSize; // +0x48
    unsigned long long _appFileSize; // +0x50
    unsigned long long _otherFileSize; // +0x58
    unsigned long long _thumbFileSize; // +0x60
    unsigned long long _thumbFileCount; // +0x68
    unsigned long long _audioFileSize; // +0x70
    unsigned long long _audioFileCount; // +0x78
    unsigned long long _videoThumbSize; // +0x80
    unsigned long long _videoThumbCount; // +0x88
    unsigned long long _videoFileCount; // +0x90
    unsigned long long _imageThumbSize; // +0x98
    unsigned long long _imageThumbCount; // +0xa0
    unsigned long long _imageFileCount; // +0xa8
    unsigned long long _appThumbSize; // +0xb0
    unsigned long long _appThumbCount; // +0xb8
    unsigned long long _recordFileCount; // +0xc0
    unsigned long long _fileFileCount; // +0xc8
    unsigned long long _rawImageSize; // +0xd0
    unsigned long long _rawImageCount; // +0xd8
    unsigned long long _rawVideoSize; // +0xe0
    unsigned long long _rawVideoCount; // +0xe8
}
+ (void)PBArrayAdd_session;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_msgCount;
+ (void)PBArrayAdd_msgEstimateSize;
+ (void)PBArrayAdd_msgOldestTime;
+ (void)PBArrayAdd_msgNewestTime;
+ (void)PBArrayAdd_sessionType;
+ (void)PBArrayAdd_resSize;
+ (void)PBArrayAdd_imageSize;
+ (void)PBArrayAdd_videoSize;
+ (void)PBArrayAdd_appFileSize;
+ (void)PBArrayAdd_otherFileSize;
+ (void)PBArrayAdd_lastMsgTime;
+ (void)PBArrayAdd_thumbFileSize;
+ (void)PBArrayAdd_thumbFileCount;
+ (void)PBArrayAdd_audioFileSize;
+ (void)PBArrayAdd_audioFileCount;
+ (void)PBArrayAdd_videoThumbSize;
+ (void)PBArrayAdd_videoThumbCount;
+ (void)PBArrayAdd_videoFileCount;
+ (void)PBArrayAdd_imageThumbSize;
+ (void)PBArrayAdd_imageThumbCount;
+ (void)PBArrayAdd_imageFileCount;
+ (void)PBArrayAdd_appThumbSize;
+ (void)PBArrayAdd_appThumbCount;
+ (void)PBArrayAdd_recordFileCount;
+ (void)PBArrayAdd_fileFileCount;
+ (void)PBArrayAdd_rawImageSize;
+ (void)PBArrayAdd_rawImageCount;
+ (void)PBArrayAdd_rawVideoSize;
+ (void)PBArrayAdd_rawVideoCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)session;
- (void)setSession:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)msgCount;
- (void)setMsgCount:(unsigned long long)arg1;
- (unsigned long long)msgEstimateSize;
- (void)setMsgEstimateSize:(unsigned long long)arg1;
- (unsigned int)msgOldestTime;
- (void)setMsgOldestTime:(unsigned int)arg1;
- (unsigned int)msgNewestTime;
- (void)setMsgNewestTime:(unsigned int)arg1;
- (unsigned int)sessionType;
- (void)setSessionType:(unsigned int)arg1;
- (unsigned long long)resSize;
- (void)setResSize:(unsigned long long)arg1;
- (unsigned long long)imageSize;
- (void)setImageSize:(unsigned long long)arg1;
- (unsigned long long)videoSize;
- (void)setVideoSize:(unsigned long long)arg1;
- (unsigned long long)appFileSize;
- (void)setAppFileSize:(unsigned long long)arg1;
- (unsigned long long)otherFileSize;
- (void)setOtherFileSize:(unsigned long long)arg1;
- (unsigned int)lastMsgTime;
- (void)setLastMsgTime:(unsigned int)arg1;
- (unsigned long long)thumbFileSize;
- (void)setThumbFileSize:(unsigned long long)arg1;
- (unsigned long long)thumbFileCount;
- (void)setThumbFileCount:(unsigned long long)arg1;
- (unsigned long long)audioFileSize;
- (void)setAudioFileSize:(unsigned long long)arg1;
- (unsigned long long)audioFileCount;
- (void)setAudioFileCount:(unsigned long long)arg1;
- (unsigned long long)videoThumbSize;
- (void)setVideoThumbSize:(unsigned long long)arg1;
- (unsigned long long)videoThumbCount;
- (void)setVideoThumbCount:(unsigned long long)arg1;
- (unsigned long long)videoFileCount;
- (void)setVideoFileCount:(unsigned long long)arg1;
- (unsigned long long)imageThumbSize;
- (void)setImageThumbSize:(unsigned long long)arg1;
- (unsigned long long)imageThumbCount;
- (void)setImageThumbCount:(unsigned long long)arg1;
- (unsigned long long)imageFileCount;
- (void)setImageFileCount:(unsigned long long)arg1;
- (unsigned long long)appThumbSize;
- (void)setAppThumbSize:(unsigned long long)arg1;
- (unsigned long long)appThumbCount;
- (void)setAppThumbCount:(unsigned long long)arg1;
- (unsigned long long)recordFileCount;
- (void)setRecordFileCount:(unsigned long long)arg1;
- (unsigned long long)fileFileCount;
- (void)setFileFileCount:(unsigned long long)arg1;
- (unsigned long long)rawImageSize;
- (void)setRawImageSize:(unsigned long long)arg1;
- (unsigned long long)rawImageCount;
- (void)setRawImageCount:(unsigned long long)arg1;
- (unsigned long long)rawVideoSize;
- (void)setRawVideoSize:(unsigned long long)arg1;
- (unsigned long long)rawVideoCount;
- (void)setRawVideoCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
