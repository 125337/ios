@interface MsgBigFileConfirmItem : NSObject
{
    MMAsset * _asset; // +0x8
    unsigned long long _fileSize; // +0x10
    double _videoFileDuration; // +0x18
    unsigned long long _actualFileSize; // +0x20
}
- (id)asset;
- (void)setAsset:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (double)videoFileDuration;
- (void)setVideoFileDuration:(double)arg1;
- (unsigned long long)actualFileSize;
- (void)setActualFileSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
