@interface WCEditVideoInformation : NSObject
{
    double _videoBitrate; // +0x8
    double _videoFramerate; // +0x10
    double _videoDuration; // +0x18
    double _videoWidth; // +0x20
    double _videoHeight; // +0x28
    double _audioBitrate; // +0x30
    unsigned long long _audioChannels; // +0x38
    unsigned long long _fileSize; // +0x40
    unsigned long long _codecType; // +0x48
}
- (id)toReportStr;
- (double)videoBitrate;
- (void)setVideoBitrate:(double)arg1;
- (double)videoFramerate;
- (void)setVideoFramerate:(double)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (double)videoWidth;
- (void)setVideoWidth:(double)arg1;
- (double)videoHeight;
- (void)setVideoHeight:(double)arg1;
- (double)audioBitrate;
- (void)setAudioBitrate:(double)arg1;
- (unsigned long long)audioChannels;
- (void)setAudioChannels:(unsigned long long)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned long long)codecType;
- (void)setCodecType:(unsigned long long)arg1;
@end

