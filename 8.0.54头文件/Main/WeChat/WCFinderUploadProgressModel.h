@interface WCFinderUploadProgressModel : NSObject
{
    double _progress; // +0x8
    unsigned long long _totalSize; // +0x10
    unsigned long long _uploadSize; // +0x18
    unsigned long long _currentUploadTaskIndex; // +0x20
    unsigned long long _uploadTaskCount; // +0x28
}
- (double)progress;
- (void)setProgress:(double)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (unsigned long long)uploadSize;
- (void)setUploadSize:(unsigned long long)arg1;
- (unsigned long long)currentUploadTaskIndex;
- (void)setCurrentUploadTaskIndex:(unsigned long long)arg1;
- (unsigned long long)uploadTaskCount;
- (void)setUploadTaskCount:(unsigned long long)arg1;
@end

