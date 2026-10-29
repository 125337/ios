@interface WCMediaDownloadStat : NSObject
{
    unsigned int _downloadSize; // +0x8
    unsigned int _imgWidth; // +0xc
    unsigned int _imgHeight; // +0x10
    unsigned long long _downloadStartTime; // +0x18
    unsigned long long _downloadEndTime; // +0x20
    unsigned long long _downloadFormat; // +0x28
}
- (unsigned long long)downloadStartTime;
- (void)setDownloadStartTime:(unsigned long long)arg1;
- (unsigned long long)downloadEndTime;
- (void)setDownloadEndTime:(unsigned long long)arg1;
- (unsigned int)downloadSize;
- (void)setDownloadSize:(unsigned int)arg1;
- (unsigned int)imgWidth;
- (void)setImgWidth:(unsigned int)arg1;
- (unsigned int)imgHeight;
- (void)setImgHeight:(unsigned int)arg1;
- (unsigned long long)downloadFormat;
- (void)setDownloadFormat:(unsigned long long)arg1;
@end
