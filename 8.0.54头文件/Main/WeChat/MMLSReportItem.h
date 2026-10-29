@interface MMLSReportItem : NSObject
{
    BOOL _singleChat; // +0x8
    unsigned int _reportStart; // +0xc
    unsigned int _limitSession; // +0x10
    unsigned long long _sessionCnt; // +0x18
    unsigned long long _msgSize; // +0x20
    unsigned long long _msgCount; // +0x28
    unsigned long long _audioSize; // +0x30
    unsigned long long _audioCount; // +0x38
    unsigned long long _thumbSize; // +0x40
    unsigned long long _thumbCount; // +0x48
    unsigned long long _videoSize; // +0x50
    unsigned long long _videoCount; // +0x58
    unsigned long long _imageSize; // +0x60
    unsigned long long _imageCount; // +0x68
    unsigned long long _fileSize; // +0x70
    unsigned long long _fileCount; // +0x78
    unsigned long long _recordSize; // +0x80
    unsigned long long _recordCount; // +0x88
    unsigned long long _imageThumbSize; // +0x90
    unsigned long long _imageThumbCount; // +0x98
    unsigned long long _videoThumbSize; // +0xa0
    unsigned long long _videoThumbCount; // +0xa8
    unsigned long long _appThumbSize; // +0xb0
    unsigned long long _appThumbCount; // +0xb8
}
- (id)init;
- (id)getReportLog1;
- (id)getReportLog2;
- (id)getReportLog3;
- (unsigned int)reportStart;
- (void)setReportStart:(unsigned int)arg1;
- (BOOL)singleChat;
- (void)setSingleChat:(BOOL)arg1;
- (unsigned int)limitSession;
- (void)setLimitSession:(unsigned int)arg1;
- (unsigned long long)sessionCnt;
- (void)setSessionCnt:(unsigned long long)arg1;
- (unsigned long long)msgSize;
- (void)setMsgSize:(unsigned long long)arg1;
- (unsigned long long)msgCount;
- (void)setMsgCount:(unsigned long long)arg1;
- (unsigned long long)audioSize;
- (void)setAudioSize:(unsigned long long)arg1;
- (unsigned long long)audioCount;
- (void)setAudioCount:(unsigned long long)arg1;
- (unsigned long long)thumbSize;
- (void)setThumbSize:(unsigned long long)arg1;
- (unsigned long long)thumbCount;
- (void)setThumbCount:(unsigned long long)arg1;
- (unsigned long long)videoSize;
- (void)setVideoSize:(unsigned long long)arg1;
- (unsigned long long)videoCount;
- (void)setVideoCount:(unsigned long long)arg1;
- (unsigned long long)imageSize;
- (void)setImageSize:(unsigned long long)arg1;
- (unsigned long long)imageCount;
- (void)setImageCount:(unsigned long long)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned long long)fileCount;
- (void)setFileCount:(unsigned long long)arg1;
- (unsigned long long)recordSize;
- (void)setRecordSize:(unsigned long long)arg1;
- (unsigned long long)recordCount;
- (void)setRecordCount:(unsigned long long)arg1;
- (unsigned long long)imageThumbSize;
- (void)setImageThumbSize:(unsigned long long)arg1;
- (unsigned long long)imageThumbCount;
- (void)setImageThumbCount:(unsigned long long)arg1;
- (unsigned long long)videoThumbSize;
- (void)setVideoThumbSize:(unsigned long long)arg1;
- (unsigned long long)videoThumbCount;
- (void)setVideoThumbCount:(unsigned long long)arg1;
- (unsigned long long)appThumbSize;
- (void)setAppThumbSize:(unsigned long long)arg1;
- (unsigned long long)appThumbCount;
- (void)setAppThumbCount:(unsigned long long)arg1;
@end

